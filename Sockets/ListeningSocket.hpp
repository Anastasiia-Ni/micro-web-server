# ifndef LISTENINGSOCKET_HPP
# define LISTENINGSOCKET_HPP

#include "BindSocket.hpp"

namespace HDE
{
    class listeningSocket : public bindingSocket
    {
        private:
            int backlog;
            int listng;
        public:
            listeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
            ~listeningSocket();
            void startListening();
            int getListening();
            int getBacklog();
    };
};


#endif