#include "stats.hpp"

#include <algorithm>
#include <cstddef>
#include <optional>

namespace stats {

std::optional<double> mean(const std::vector<double>& data) {
    if(data.empty()){
        return std::nullopt;
    }

    double sum=0.0;
    

    for(double x : data){
        sum+=x;
    }

    return sum/static_cast<double>(data.size());
}

std::optional<double> median(const std::vector<double>& data) {
    if(data.empty()){
        return std::nullopt;
    }

    std::vector<double> sorted=data;
    std::sort(sorted.begin(), sorted.end());

    std::size_t n=sorted.size();

    if(n%2==1){
        return sorted[n/2];
    }else{
        return (sorted[n/2-1]+sorted[n/2])/2.0;
    }
}

std::optional<double> min_val(const std::vector<double>& data) {
    if(data.empty()){
        return std::nullopt;
    }

    double best=data[0];

    for(double x : data){
        if(x<best){
            best=x;
        }
    }

    return best;
}

std::optional<double> max_val(const std::vector<double>& data) {
    if(data.empty()){
        return std::nullopt;
    }

    double best=data[0];

    for(double x : data){
        if(x>best){
            best=x;
        }
    }

    return best;
}

std::optional<double> range(const std::vector<double>& data) {
    if (data.empty()) {
        return std::nullopt;
    }
    return *max_val(data) - *min_val(data);
}

}  // namespace stats