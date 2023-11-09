#include <string>
#include <sstream>
#include <string>
#include <sstream>
std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::stringstream ss(macAddress);
    std::string octet;
    int firstOctet;

    for (int i = 0; i < 6; i++) {
        if (!getline(ss, octet, ':')) {
            return "Invalid MAC address";
        }

        int octetValue;
        std::istringstream(octet) >> std::hex >> octetValue;

        if (i == 0) {
            firstOctet = octetValue;
        }
    }

    if (firstOctet % 2 == 0) {
        return "Unicast";
    } else if (firstOctet % 2 == 1) {
        return "Multicast";
    } else if (firstOctet == 255) {
        for (int i = 1; i < 6; i++) {
            if (!getline(ss, octet, ':')) {
                return "Broadcast";
            }
            int octetValue;
            std::istringstream(octet) >> std::hex >> octetValue;
            if (octetValue != 255) {
                return "Invalid MAC address";
            }
        }
        return "Broadcast";
    } else {
        return "Unknown";
    }
}

    // make use of control flow statements
    // return result;
