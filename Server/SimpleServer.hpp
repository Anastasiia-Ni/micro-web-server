# ifndef SIMPLESERVER_HPP
# define SIMPLESERVER_HPP

#include "../Sockets/HDELibSockets.hpp"

namespace HDE
{
    class simpleServer
    {
        private:
            listeningSocket *socket;
            virtual void accepter() = 0;
            virtual void handler() = 0;
            virtual void responder() = 0;
        public:
            simpleServer(int domain, int service, int protocol, int port, u_long interface, int bklg);
            ~simpleServer();
            virtual void launch() = 0;
            listeningSocket *getSocket();
    };
    
}

#endif