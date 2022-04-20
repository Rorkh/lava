//
// Created by computer on 20.04.2022.
//

#ifndef LAVA_LAVAEXCEPTIONS_HPP
#define LAVA_LAVAEXCEPTIONS_HPP

#include <exception>

struct LavaCode0 : public std::exception {
	const char * what () const throw () {
		return "Unknown error";
	}
};

struct LavaCode1 : public std::exception {
	const char * what () const throw () {
		return "Object not found";
	}
};

struct LavaCode2 : public std::exception {
	const char * what () const throw () {
		return "Invalid parameter value";
	}
};

struct LavaCode5 : public std::exception {
	const char * what () const throw () {
		return "Invalid JWT-token";
	}
};

struct LavaCode6 : public std::exception {
	const char * what () const throw () {
		return "Serverside error";
	}
};

struct LavaCode7 : public std::exception {
	const char * what () const throw () {
		return "Invalid request type";
	}
};

struct LavaCode100 : public std::exception {
	const char * what () const throw () {
		return "Invalid parameters passed";
	}
};

struct LavaCode101 : public std::exception {
	const char * what () const throw () {
		return "Invalid wallet number";
	}
};

struct LavaCode102 : public std::exception {
	const char * what () const throw () {
		return "Sum below min";
	}
};

struct LavaCode103 : public std::exception {
	const char * what () const throw () {
		return "Sum above max";
	}
};

struct LavaCode104 : public std::exception {
	const char * what () const throw () {
		return "Not enough money on wallet";
	}
};

struct LavaCode105 : public std::exception {
	const char * what () const throw () {
		return "Transaction not found";
	}
};

struct LavaCode107 : public std::exception {
	const char * what () const throw () {
		return "Transaction not available";
	}
};

struct LavaCode202 : public std::exception {
	const char * what () const throw () {
		return "Live time below min";
	}
};

struct LavaCode203 : public std::exception {
	const char * what () const throw () {
		return "Live time above max";
	}
};

struct LavaCode204 : public std::exception {
	const char * what () const throw () {
		return "Number have more that 255 symbols";
	}
};

struct LavaCode205 : public std::exception {
	const char * what () const throw () {
		return "Transaction number already exists";
	}
};

struct LavaCode206 : public std::exception {
	const char * what () const throw () {
		return "Invoice not founded";
	}
};

struct LavaCode207 : public std::exception {
	const char * what () const throw () {
		return "Invoice lifetime has passed";
	}
};

struct LavaCode208 : public std::exception {
	const char * what () const throw () {
		return "Invoice already paid";
	}
};

struct LavaCode209 : public std::exception {
	const char * what () const throw () {
		return "Secret key not set";
	}
};

struct LavaCode210 : public std::exception {
	const char * what () const throw () {
		return "Invalid signature";
	}
};

#endif //LAVA_LAVAEXCEPTIONS_HPP
