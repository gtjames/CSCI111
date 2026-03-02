#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[]) {
    float randomFloat;

    if (argc > 1) {
        // If a seed is provided as a command-line argument, use it
        int seed = std::atoi(argv[1]);
        srand(seed);
    } else {
        // Otherwise, seed with the current time
        srand(time(0));
    }
    // srand(time(0));         // Seed the random number generator with the current time
    
    // Generate a random float between 0.0 and 1.0
    for(int i = 0; i < 5; i++) {
        randomFloat = static_cast<float>(rand()) / RAND_MAX;
        std::cout << "Random float (0.0 to 1.0): " << randomFloat << std::endl;
    }
    
    // Scale to a range of 1-10
    randomFloat = static_cast<float>(rand()) / RAND_MAX;
    int range1to100 = static_cast<int>(randomFloat * 10) + 1;
    std::cout << "Scaled to 1-10: " << range1to100 << std::endl;
    
    // Scale to a range of 10-25
    randomFloat = static_cast<float>(rand()) / RAND_MAX;
    int range1to10 = static_cast<int>(randomFloat * 15) + 10;
    std::cout << "Scaled to 10-25: " << range1to10 << std::endl;
    
    // Scale to a range of 0-255
    randomFloat = static_cast<float>(rand()) / RAND_MAX;
    int range0to255 = static_cast<int>(randomFloat * 255);
    std::cout << "Scaled to 0-255: " << range0to255 << std::endl;

    for(int i = 0; i < 30; i++) {
        randomFloat = static_cast<float>(rand()) / RAND_MAX;
        int rnd = static_cast<int>(randomFloat * 10);
        std::cout << "  " << rnd;
    }   
    std::cout << std::endl;

    return 0;
}