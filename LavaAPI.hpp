//
// Created by computer on 20.04.2022.
//

#ifndef LAVA_LAVAAPI_HPP
#define LAVA_LAVAAPI_HPP

#include <string>

#include "libs/json.hpp"
#include "libs/kidCurl.hpp"

#include "lava/LavaExceptions.hpp"
#include "lava/LavaEndpoints.hpp"

namespace lava
{
    class LavaAPI
    {
        private:
			void Validate(nlohmann::json json);
		public:
			LavaAPI(std::string token)
			{
				token = token;
			}

			std::string APIGateway = "https://api.lava.ru";
	        std::string token;

			void SetAPIGateway(std::string gateway);
	        void SetToken(std::string token);

			void Ping();
			nlohmann::json WalletsList();

	        nlohmann::json NewWithdraw(nlohmann::json params);
		    nlohmann::json WithdrawInfo(nlohmann::json params);

	        nlohmann::json NewTransfer(nlohmann::json params);
	        nlohmann::json TransferInfo(nlohmann::json params);

			nlohmann::json TransactionsList(nlohmann::json params);
			nlohmann::json TransactionsList();

		    nlohmann::json NewInvoice(nlohmann::json params);
	        nlohmann::json InvoiceInfo(nlohmann::json params);

	        nlohmann::json InvoiceSetWebhook(nlohmann::json params);
	        nlohmann::json InvoiceGenerateSecret();
	};
} // lava

#endif //LAVA_LAVAAPI_HPP
