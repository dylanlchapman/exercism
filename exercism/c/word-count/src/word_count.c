#include "word_count.h"
#include "string.h"
#include "stdio.h"

int count_words(const char *sentence, word_count_word_t * words){

    // iterate over entire sentence
    const char* word;
    word = &sentence[0];
    const char * origin = word;
    while(*word != '\0') {
        //when a space is encountered
            // have a current word buffer
                //copy x characters to first index of words

    ++word;  //you can increment pointers without assigning an address to them
    }
    word = origin;
    strcpy(words[0].text, word) ;
    words[0].count = 1;
    return 1;
}
