// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here WILL BE LOST.
//

import { WalletCore } from '../WalletCore';
import { TW } from '../../proto/TrustWalletCore';
import * as Long from 'long';

// Struct
export class X509 {

    public static encodeED25519PublicKey(publicKey: Uint8Array): Uint8Array {
        return WalletCore.Js_wallet_core_napi_X509_encodeED25519PublicKey(publicKey);
    }

    public static decodeED25519PublicKey(data: Uint8Array): Uint8Array {
        return WalletCore.Js_wallet_core_napi_X509_decodeED25519PublicKey(data);
    }

}
