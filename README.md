# stats-cli

A small multi-file C++17 statistics calculator that computes `mean`, `median`, `min`, `max`, and `range` while handling empty inputs safely with `std::optional`.

## Build and Run

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic -g -c stats.cpp -o stats.o
g++ -std=c++17 -Wall -Wextra -Wpedantic -g -c main.cpp -o main.o
g++ stats.o main.o -o stats_app
./stats_app
```