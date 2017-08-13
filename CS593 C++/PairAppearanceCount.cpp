#include <cstring>
#include <iostream>
#include <string>
int count_pair_occurences_string(const std::string&, const std::string& pair);
int count_pair_occurences_chararray(const char*, const char* pair);

int main(){
    std::cout<<count_pair_occurences_chararray("babuwwhabxyabjahba","ab")<<std::endl;
    std::cout<<count_pair_occurences_string("babuwwhabxyabjahba","ab");
}

int count_pair_occurences_string(const std::string& mystring, const std::string& pair){
    int count=0;
    size_t position=0;
    while ( (position=mystring.find(pair,position)) != std::string::npos ){
        ++count;
        ++position;
    }

return count;
}

int count_pair_occurences_chararray(const char* chararray, const char* pair){
    //let's say the pair is ab
    //first we find the first occurrence of a, if it is followed by b we increment the counter
    const char* iterator=chararray;
    int count=0;

    while (*iterator !=0){
        if ( strncmp(iterator,pair,1) == 0 )
            if ( strncmp(iterator+1,pair+1,1) == 0 )
                ++count;
        ++iterator;
    }

    return count;
}
