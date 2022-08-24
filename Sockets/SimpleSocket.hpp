# ifndef SIMPLESOCKET_HPP
# define SIMPLESOCKET_HPP

#include <sys/socket.h>
#include <netinet/in.h>

#include <iostream>
#include <cstdio>

namespace HDE
{
    class simpleSocket
    {
        private:
            int sock;
            int connection;
            struct sockaddr_in address;   
        public:
            simpleSocket(int domain, int service, int protocol, int port, u_long interface);
            virtual ~simpleSocket();
            virtual int connectToNetwork(int sock, struct sockaddr_in address) = 0;
            void testConnection(int item_to_test);
            struct sockaddr_in getAdress();
            int getSock();
            int getConnection();
            void setConnection(int con);
    };
};

#endif