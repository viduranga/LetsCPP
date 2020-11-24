#include <iostream>
#include <chrono>

using namespace std::chrono;
constexpr int testVal = 25;

constexpr unsigned int fibonacci(unsigned int i){
    if(i == 0)
        return 0;
    else if(i == 1)
        return 1;
    else
        return fibonacci(i-1) + fibonacci(i-2);
}

int main(){

    auto start = high_resolution_clock::now();
    constexpr auto result = fibonacci(testVal);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "result = " << result << '\n';
    std::cout << "duration = " << duration.count() << " microseconds\n";
}