#include "lexer/lexer.hh"

#include <iomanip>
#include <iostream>

using namespace Frontend;

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        std::cout << "Error: not enough arguments" << std::endl;
        std::cout << "USAGE: " << argv[0] << " <filename>" << std::endl;
        return -1;
    }
    Lexer lexer(argv[1]);

    Token tok;
    while (lexer.getToken(tok))
    {
        
        std::cout << std::setw(12)
                  << tok.prinTokenType() << " | "
                  << tok.getLiteral() << "\n";
        
    }
    return 0;
}
