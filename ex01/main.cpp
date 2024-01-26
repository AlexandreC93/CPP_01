#include "Zombie.hpp"

int main(int ac, char **av) {
    (void)ac;
    std::string name;
    size_t N;
    if (!av[1])
    {
        name = "Carlos le Zombie";
        N = 5;
    }
    else
    {
        name = av[1];
        if (av[2])
            N = atoi(av[2]);
        else
            N = 5;
    }
    // std::cout << name << std::endl;
    // std::cout << N << std::endl;
    Zombie *zomb = zombieHorde(N, name);
    for (size_t i = 0; i < N; i++) {
        zomb[i].announce();
    }
    delete [] zomb;
    return 0;
}

// relire le sujet
