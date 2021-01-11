#include <iostream>
#include <string>

enum ParseStatus { Error, Done, Incomplete };
class book{
    public:
    std::string _isbn;
    std::string _author;
    std::string _title;

};

class PRNParser{
    public:
    ParseStatus ParseLine(std::string line);
    book GetLastRead();




};