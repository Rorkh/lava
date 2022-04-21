//
// Created by computer on 21.04.2022.
//

#ifndef LAVA_LAVAENDPOINTS_HPP
#define LAVA_LAVAENDPOINTS_HPP

#include <string>

inline constexpr auto LAVA_ENDPOINT_PING = "/test/ping";
inline constexpr auto LAVA_ENDPOINT_WALLETS_LIST = "/wallet/list";
inline constexpr auto LAVA_ENDPOINT_WITHDRAW_CREATE = "withdraw/create";
inline constexpr auto LAVA_ENDPOINT_WITHDRAW_INFO = "withdraw/info";
inline constexpr auto LAVA_ENDPOINT_TRANSFER_CREATE = "/transfer/create";
inline constexpr auto LAVA_ENDPOINT_TRANSFER_INFO = "/transfer/info";
inline constexpr auto LAVA_ENDPOINT_TRANSACTIONS_LIST = "/transactions/list";
inline constexpr auto LAVA_ENDPOINT_INVOICE_CREATE = "/invoice/create";
inline constexpr auto LAVA_ENDPOINT_INVOICE_INFO = "/invoice/info";
inline constexpr auto LAVA_ENDPOINT_INVOICE_SET_WEBHOOK = "/invoice/set-webhook";
inline constexpr auto LAVA_ENDPOINT_INVOICE_GENERATE_SECRET = "/invoice/generate-secret-key";

#endif //LAVA_LAVAENDPOINTS_HPP
