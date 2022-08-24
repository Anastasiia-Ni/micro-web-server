#include "TestServer.hpp"

/* contructor */
HDE::testServer::testServer() : simpleServer(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10)
{
    launch();
}

/* destructor */
HDE::testServer::~testServer() {}

void HDE::testServer::accepter()
{
    struct sockaddr_in address = getSocket()->getAdress();
    int addrlen = sizeof(address);
    newSocket = accept(getSocket()->getSock(), (struct sockaddr *)& address, (socklen_t *)& addrlen);
    read(newSocket, buffer, 30000);
}

void HDE::testServer::handler()
{
    std::cout << buffer << std::endl;
}

void HDE::testServer::responder()
{
    char hello[] = "Hello from server";
    write(newSocket, hello, strlen(hello));
    close(newSocket);
}

void HDE::testServer::launch()
{
    while (true)
    {
        std::cout << "Waiting..." << std::endl;
        accepter();
        handler();
        responder();
        std::cout << "Done" << std::endl;
    }
}