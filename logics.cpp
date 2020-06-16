#include <fstream>
#include <iostream>
#include <cctype>

// we have two files: words1.txt and words2.txt
// we are given two functions, to test whether there is another word on file1 or file2 respectively
// we need to determine the following:
// -Does words1.txt contain more than 20 words? if not, how many?
// -Does words2.txt contain more than 20 words? if not, how many?

std::ifstream *words1, *words2;

bool hasMoreWords(std::ifstream &input) {
    auto result{false};
    char c;
    for (input.get(c); !result && !input.eof(); input.get(c)) {
        result = std::isspace(c);
    }
    return result;
}

// Returns true if there is at least one more word available on words1.txt
bool has1MoreWords() {
    return hasMoreWords(*words1);
}

// Returns true if there is at least one more word available on words2.txt
bool has2MoreWords() {
    return hasMoreWords(*words2);
}

int main()
{
    // open both files
    words1 = new std::ifstream("words1.txt");
    words2 = new std::ifstream("words2.txt");

    // -- your code --
    int i;
    for(i = 0; has1MoreWords() && i < 20; ++i) {
        ;
    }
    std::cout << "Words1 has ";
    if (i < 20) {
        std::cout << i << " words" << std::endl;
    }
    else {
        std::cout << " 20 words or more" << std::endl;
    }

    
    // HOMEWORK: create the same kind of logic, to count from words2
    //          -> calling has2MoreWords()

    /*
    for(i = 0; has2MoreWords() < 20; ++i )
       if (has2MoreWords() < 20) {
           std::cout << "words2 has " << i << "words." << endl;
       }

       else {
           std::cout << "words 2 has more then 20 words" << endl;
       } */

    for(i = 0; has2MoreWords() && i < 20; ++i) {
        ;
    }
    std::cout << "Words2 has ";
    if (i < 20) {
        std::cout << i << " words" << std::endl;
    }
    else {
        std::cout << " 20 words or more" << std::endl;

   
    // 
    -- end of your code --

    delete words1;
    delete words2;

    return 0;
} 