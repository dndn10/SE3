#include "PRNParserTest.h"
#define expect_true(arg) \
        do { \
            if(!(arg)) { \
                std::cout << "Unexpected false at " \
                          << __FILE__ << ", " << __LINE__ << ", " << __func__ << ": " \
                          << #arg \
                          << std::endl; } \
        } while(false);

void ParseLine_StringTooShort_Incomplete(){
    PRNParser test=PRNParser();
    ParseStatus A=test.ParseLine("Novel With Cocaine                      Ageyev,M.                     978081011");
    ParseStatus tmp=Incomplete;
    bool result=(tmp==A);
    expect_true(result);

};
void ParseLine_StringTooLong_Error(){
    PRNParser test=PRNParser();
    ParseStatus A=test.ParseLine("Novel With Cocaine                      Ageyev,M.                     9780810117099848908040894");
    ParseStatus tmp=Error;
    bool result=(tmp==A);
    expect_true(result);



};
void ParseLine_StringOK_Done(){
        PRNParser test=PRNParser();
    ParseStatus A=test.ParseLine("Novel With Cocaine                      Ageyev,M.                     9780810117099");
    ParseStatus tmp=Done;
    bool result=(tmp==A);
    expect_true(result);



};

