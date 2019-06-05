#include <iostream>
#include <string>
#include <math.h>

int main(int argc, char** argv){
    if (argc < 2){
        std::cout << "Missing prime number limit, use ./a.out <num>" << std::endl;
        return 1;
    }
    std::string num_str(argv[1]);
    int max_num = stoi(num_str);
    bool primes[max_num];
    for(int i = 2; i < max_num; i++)
        primes[i] = true;

    int j = 0;
    int counter = 1;
    for (int i = 2; i < sqrt(max_num); i++){
        j = (i*i);
        if (primes[i]){
            while(j < max_num){
                primes[j] = false;
                j = (i*i)+(counter*i);
                counter++;
            }
        }
        counter = 1;
    }

    for (int i = 2; i < max_num; i++)
        if(primes[i])
            std::cout << i << " ";

    std::cout << std::endl;
    return 0;
}