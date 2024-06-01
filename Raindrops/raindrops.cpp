#include "raindrops.h"

namespace raindrops {
    std::string convert(int num){
        std::string result = "";

        if (num % 3 == 0){
            result.append("Pling");
        }
        if (num % 5 == 0){
            result.append("Plang");
        }
        if (num % 7 == 0){
            result.append("Plong");
        }

        if (result == ""){
            return std::to_string(num);
        }
        else{
            return result;
        }
        
    }
}  // namespace raindrops
