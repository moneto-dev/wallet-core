// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

#ifndef NAPI_TW_EOSADDRESS_H
#define NAPI_TW_EOSADDRESS_H

#include <TrustWalletCore/TWEOSAddress.h>
#include <TrustWalletCore/TWPublicKey.h>

#include <TrustWalletCore/TWBase.h>
#include "../TWNapi.h"

using namespace Napi;

External<TWEOSAddress> Js_wallet_core_napi_EOSAddress_createWithString(const CallbackInfo& info);

External<TWEOSAddress> Js_wallet_core_napi_EOSAddress_createWithPublicKey(const CallbackInfo& info);

External<TWEOSAddress> Js_wallet_core_napi_EOSAddress_createWithKeyHash(const CallbackInfo& info);

void Js_wallet_core_napi_EOSAddress_delete(const CallbackInfo& info);

Boolean Js_wallet_core_napi_EOSAddress_equals(const CallbackInfo& info);

Boolean Js_wallet_core_napi_EOSAddress_isValidString(const CallbackInfo& info);

String Js_wallet_core_napi_EOSAddress_description(const CallbackInfo& info);


#endif // NAPI_TW_EOSADDRESS_H