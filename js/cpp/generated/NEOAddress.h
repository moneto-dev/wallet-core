// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

#ifndef NAPI_TW_NEOADDRESS_H
#define NAPI_TW_NEOADDRESS_H

#include <TrustWalletCore/TWNEOAddress.h>
#include <TrustWalletCore/TWPublicKey.h>

#include <TrustWalletCore/TWBase.h>
#include "../TWNapi.h"

using namespace Napi;

External<TWNEOAddress> Js_wallet_core_napi_NEOAddress_createWithString(const CallbackInfo& info);

External<TWNEOAddress> Js_wallet_core_napi_NEOAddress_createWithPublicKey(const CallbackInfo& info);

void Js_wallet_core_napi_NEOAddress_delete(const CallbackInfo& info);

Boolean Js_wallet_core_napi_NEOAddress_equals(const CallbackInfo& info);

Boolean Js_wallet_core_napi_NEOAddress_isValidString(const CallbackInfo& info);

String Js_wallet_core_napi_NEOAddress_description(const CallbackInfo& info);

Uint8Array Js_wallet_core_napi_NEOAddress_keyHash(const CallbackInfo& info);


#endif // NAPI_TW_NEOADDRESS_H