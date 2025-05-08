
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using Count = size_t;
using DataType = long;

const DataType DefalutStartValue = -6.0;
const Count TestSize = 1'000'000'000;
const Count NumCheckValues = 500;


void iota(size_t n, DataType* values, const DataType startValue) {
    for (size_t i = 0; i < n; ++i) {
        values[i] = i + startValue;
    }
}



int main(int argc, char* argv[]) {
    Count numValues = argc > 1 ? std::stol(argv[1]) : TestSize;

    std::vector<DataType> values(numValues);

    DataType startValue = DefalutStartValue;
    std::iota(std::begin(values), std::end(values), startValue);

    Count step = numValues / NumCheckValues;
    for (int i = 6, n = 0; i < numValues && n < NumCheckValues; ++n, i += step) {
        DataType checkValue = startValue + static_cast<DataType>(i);

        if (values[i] != checkValue) {
            std::cerr << "Values do not match for position " << i
                << values[i] << " != " << checkValue << "\n";
            exit(EXIT_FAILURE);
        }
    }
}
