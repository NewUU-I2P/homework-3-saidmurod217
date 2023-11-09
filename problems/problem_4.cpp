#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int count = 0;
    for(int i = 0; i < macAddress.length();i++) {
        if (macAddress[i] == 'F') {
            count++;
        }
    }
        auto first = macAddress[0];
        auto second = macAddress[1];

        int first1;
        switch (first)){
    case 'A':
        first1 = 10;
        break;
    case 'B':
        first1  = 11;
            break;
            case 'C':
        first1 = 12;
        break;
    case 'D':
        first1 = 13;
            break;

            case 'E':
                first1 = 14;
            break;

            case 'F':
        first1 = 15;
}
    if(count == 12){
        return "Broadcast";
    } else if((first1 + second) % 2 == 0){
        return "Even";
    } else {
        return "Odd";
    }
    // make use of control flow statements
    // return result;
}
