// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

#ifndef NAPI_TW_FIOADDRESS_H
#define NAPI_TW_FIOADDRESS_H

#include <TrustWalletCore/TWFIOAddress.h>
#include <TrustWalletCore/TWPublicKey.h>

#include <TrustWalletCore/TWBase.h>
#include "../TWNapi.h"

using namespace Napi;

External<TWFIOAddress> Js_wallet_core_napi_FIOAddress_createWithString(const CallbackInfo& info);

External<TWFIOAddress> Js_wallet_core_napi_FIOAddress_createWithPublicKey(const CallbackInfo& info);

void Js_wallet_core_napi_FIOAddress_delete(const CallbackInfo& info);

Boolean Js_wallet_core_napi_FIOAddress_equals(const CallbackInfo& info);

Boolean Js_wallet_core_napi_FIOAddress_isValidString(const CallbackInfo& info);

String Js_wallet_core_napi_FIOAddress_description(const CallbackInfo& info);


#endif // NAPI_TW_FIOADDRESS_H