#include <bits/stdc++.h>

int main() {
    std::vector <int> v{2, 7, 1, 6, 2, -2, 4, 0};
    // count a particular value in the collection;
    int twos = 0;
    int const target = 2;

    for(size_t i = 0; i < v.size(); i++) {

        if(v[i] == target) {
            twos++;
        }
    }
    //legacy style code;
    std::cout << "the number of twos is " << twos << "\n";


//  Non-Member function for begin and end;
    twos = std::count(v.begin(), v.end(), target);
    std::cout << "the number of twos is " << twos << "\n";

// Non-Member function for begin and end;
    twos = std::count(begin(v), end(v), target);
    std::cout << "the number of twos is " << twos << "\n";

    // conditional counting using Count_if();
    // count odd entries;

    int odds = 0;
    for(auto elem : v) {

        if(elem%2 != 0) {
            odds++;
        }
    }
    //legacy way 
    std::cout << "the number of odds is " << odds << "\n";


    //using algorithm library;
    odds = std::count_if(begin(v), end(v), [](auto elem){return elem%2 != 0;});
    std::cout << "the number of odds is " << odds << "\n";

}