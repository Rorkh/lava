//
// Created by computer on 20.04.2022.
//

#include "LavaAPI.hpp"

namespace lava
{
	void LavaAPI::Validate(nlohmann::json json)
	{
		if (json["code"].is_null()) return;
		int code = json["code"];

		switch (code)
		{
			case 0: throw LavaCode0();
			case 1: throw LavaCode1();
			case 2: throw LavaCode2();
			case 5: throw LavaCode5();
			case 6: throw LavaCode6();
			case 7: throw LavaCode7();
			case 100: throw LavaCode100();
			case 101: throw LavaCode101();
			case 102: throw LavaCode102();
			case 103: throw LavaCode103();
			case 104: throw LavaCode104();
			case 105: throw LavaCode105();
			case 107: throw LavaCode107();
			case 202: throw LavaCode202();
			case 203: throw LavaCode203();
			case 204: throw LavaCode204();
			case 205: throw LavaCode205();
			case 206: throw LavaCode206();
			case 207: throw LavaCode207();
			case 208: throw LavaCode208();
			case 209: throw LavaCode209();
			case 210: throw LavaCode210();
		}
	}

	void LavaAPI::SetAPIGateway(std::string gateway)
	{
		APIGateway = gateway;
	}

	void LavaAPI::Ping()
	{
		http::Request request{APIGateway + "/test/ping"};

		const auto response = request.send("GET", "", {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
	}

	nlohmann::json LavaAPI::WalletsList()
	{
		http::Request request{APIGateway + "/wallet/list"};

		const auto response = request.send("GET", "", {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::NewWithdraw(nlohmann::json params)
	{
		http::Request request{APIGateway + "/wallet/list"};

		const auto response = request.send("POST", params.dump(), {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::WithdrawInfo(nlohmann::json params)
	{
		http::Request request{APIGateway + "/wallet/info"};

		const auto response = request.send("POST", params.dump(), {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::NewTransfer(nlohmann::json params)
	{
		http::Request request{APIGateway + "/transfer/create"};

		const auto response = request.send("POST", params.dump(), {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::TransferInfo(nlohmann::json params)
	{
		http::Request request{APIGateway + "/transfer/info"};

		const auto response = request.send("POST", params.dump(), {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::TransactionsList()
	{
		http::Request request{APIGateway + "/transactions/list"};

		const auto response = request.send("POST", "", {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::NewInvoice(nlohmann::json params)
	{
		http::Request request{APIGateway + "/invoice/create"};

		const auto response = request.send("POST", params.dump(), {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::InvoiceInfo(nlohmann::json params)
	{
		http::Request request{APIGateway + "/invoice/info"};

		const auto response = request.send("POST", params.dump(), {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::InvoiceSetWebhook(nlohmann::json params)
	{
		http::Request request{APIGateway + "/invoice/set-webhook"};

		const auto response = request.send("POST", params.dump(), {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}

	nlohmann::json LavaAPI::InvoiceGenerateSecret()
	{
		http::Request request{APIGateway + "/invoice/generate-secret-key"};

		const auto response = request.send("GET", "", {{"Authorization", token}});
		std::string body = std::string{response.body.begin(), response.body.end()};
		auto json = nlohmann::json::parse(body);

		Validate(json);
		return json;
	}
}