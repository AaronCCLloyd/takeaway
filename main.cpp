#include <iostream>
#include <string>

#include <tins/tins.h>

using namespace Tins;

int main(int, char **)
{
    std::cout << "Hello, from takeaway!\n";

    std::string dst_hw_addr = "00:11:22:33:44:55";
    std::string src_hw_addr = "66:77:88:99:AA:BB";

    EthernetII eth = EthernetII(dst_hw_addr, src_hw_addr) / IP() / TCP();

    std::cout << "Destination MAC: " << eth.dst_addr() << std::endl;
    std::cout << "Source MAC: " << eth.src_addr() << std::endl;
    std::cout << "Payload Type: " << eth.payload_type() << std::endl;
}
