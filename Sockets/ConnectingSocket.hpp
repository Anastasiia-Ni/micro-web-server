# ifndef CONNECTINGSOCKET_HPP
# define CONNECTINGSOCKET_HPP

#include "SimpleSocket.hpp"

namespace HDE
{
    class connectSocker : public simpleSocket
    {
        public:
            connectSocker(int domain, int service, int protocol, int port, u_long interface);
            ~connectSocker();
            int connectToNetwork(int sock, struct sockaddr_in address);
    };
};


#endif