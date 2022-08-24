# ifndef TESTSERVER_HPP
# define TESTSERVER_HPP

#include "SimpleServer.hpp"
#include <unistd.h>

namespace HDE
{
    class testServer : public simpleServer
    {
        private:
            char buffer[30000];
            int newSocket;
            void accepter();
            void handler();
            void responder();
        public:
            testServer();
            ~testServer();
            void launch();
    };
};

#endif