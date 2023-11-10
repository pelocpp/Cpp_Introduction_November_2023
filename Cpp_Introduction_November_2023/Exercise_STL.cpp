// ===========================================================================
// Exercise STL
// ===========================================================================

#include <iostream>
#include <algorithm>
#include <vector>

void printToConsole(int value) {
    std::cout << ">: " << value << std::endl;
}

void testExerciseDevilsSequence()
{
    std::vector<int> devilsSequenceFolge;

    int start = 7;

    devilsSequenceFolge.push_back(start);

    while (start != 1)
    {
        // greedy calculation
        start = (start % 2 == 0) ? (start / 2) : (start * 3 + 1);
        devilsSequenceFolge.push_back(start);
    }

    std::for_each(
        devilsSequenceFolge.begin(),
        devilsSequenceFolge.end(),
        printToConsole
    );
}

// ===========================================================================

// Callable Object
class FibonacciSequence
{
private:
    int m_first;
    int m_second;

public:
    FibonacciSequence() : m_first(0), m_second(1) {}

    int operator() ()
    {
        // store current Fibonacci number
        int last = m_first;

        // calculate next pair
        int tmp = m_first + m_second;
        m_first = m_second;
        m_second = tmp;

        return last;
    }

    void operator() (int elem)
    {
        std::cout << ">: " << elem << std::endl;
    }
};

void testExerciseFibonacci()
{
    std::vector<int> sequence(20);

    FibonacciSequence fibonacci;

    std::generate(
        sequence.begin(),
        sequence.end(),
        fibonacci
    );

    std::for_each(
        sequence.begin(),
        sequence.end(),
        fibonacci
    );
}

void testExerciseSTL()
{
    testExerciseDevilsSequence();
    testExerciseFibonacci();
}

// ===========================================================================
// End-of-File
// ===========================================================================
