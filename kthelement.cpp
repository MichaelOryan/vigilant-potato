// Find the kth closest element to a target value

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main()
{
    std::vector<int> numbers = {2, 6, 13, 7, 4, 8, 1, 9, 12, 3};
    int target = 8;
    int nth = 5;
    std::nth_element(std::begin(numbers), std::begin(numbers) + nth ,std::end(numbers),
        [target] (const int& lhs, const int& rhs) {
            return abs(lhs - target) < abs(rhs - target);
        }
    );
    std::cout << numbers[nth] << std::endl;
}
