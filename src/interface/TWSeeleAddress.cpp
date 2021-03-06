// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include <TrustWalletCore/TWSeeleAddress.h>

#include "../Data.h"
#include "../Seele/Address.h"

#include <TrustWalletCore/TWHash.h>
#include <TrustWalletCore/TWPublicKey.h>

#include <TrezorCrypto/ecdsa.h>
#include <memory>
#include <string>

using namespace TW;
using namespace TW::Seele;

bool TWSeeleAddressEqual(struct TWSeeleAddress *_Nonnull lhs, struct TWSeeleAddress *_Nonnull rhs) {
   return lhs->impl == rhs->impl;
}

bool TWSeeleAddressIsValidString(TWString *_Nonnull string) {
    auto s = reinterpret_cast<const std::string*>(string);
    return Address::isValid(*s);
}

struct TWSeeleAddress *_Nullable TWSeeleAddressCreateWithString(TWString *_Nonnull string) {
    auto s = reinterpret_cast<const std::string*>(string);
    if (!Address::isValid(*s)) {
        return nullptr;
    }
    return new TWSeeleAddress{ Address(*s) };
}

struct TWSeeleAddress *_Nullable TWSeeleAddressCreateWithKeyHash(TWData *_Nonnull keyHash) {
    auto d = reinterpret_cast<const Data*>(keyHash);
    if (!Address::isValid(*d)) {
        return nullptr;
    }
    return new TWSeeleAddress{ Address(*d) };
}

struct TWSeeleAddress *_Nonnull TWSeeleAddressCreateWithPublicKey(struct TWPublicKey *_Nonnull publicKey) {
    return new TWSeeleAddress{ Address(publicKey->impl) };
}

void TWSeeleAddressDelete(struct TWSeeleAddress *_Nonnull address) {
    delete address;
}

TWString *_Nonnull TWSeeleAddressDescription(struct TWSeeleAddress *_Nonnull address) {
    const auto string = address->impl.string();
    return TWStringCreateWithUTF8Bytes(string.c_str());
}

TWData *_Nonnull TWSeeleAddressKeyHash(struct TWSeeleAddress *_Nonnull address) {
    return TWDataCreateWithBytes(address->impl.bytes.data(), address->impl.bytes.size());
}
