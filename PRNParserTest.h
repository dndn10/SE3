#include <string>
#include <iostream>
#include "PRNParser.h"
// method_scenerio_expected

class PRNParsetTest{
    void ParseLine_StringTooShort_Incomplete();
    void ParseLine_StringTooLong_Error();
    void ParseLine_StringOK_Done();

};