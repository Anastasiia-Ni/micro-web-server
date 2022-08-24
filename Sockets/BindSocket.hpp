# ifndef BINDSOCKET_HPP
# define BINDSOCKET_HPP

#include "SimpleSocket.hpp"

namespace HDE
{
    class bindingSocket : public simpleSocket
    {
        private:
            int bndg;
        public:
            bindingSocket(int domain, int service, int protocol, int port, u_long interface);
            ~bindingSocket();
            int connectToNetwork(int sock, struct sockaddr_in address);
            int getBinding();
    };
};

# endif