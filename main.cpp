#include "Sockets/HDELibSockets.hpp"


int main() {
    std::cout << "Starting..." << std::endl;
    // std::cout << "Simple Socket..." << std::endl;
    // HDE::simpleSocket ss = HDE::simpleSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY);
    std::cout << "Binding Socket..." << std::endl;
    HDE::bindingSocket bs = HDE::bindingSocket(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY);
    std::cout << "Listening Socket..." << std::endl;
    HDE::listeningSocket ls = HDE::listeningSocket(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 8080);
    std::cout << "Success!" << std::endl;
    (void) bs;
    (void) ls;
    return (0);
}