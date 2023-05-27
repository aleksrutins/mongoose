#include "Parser.hpp"

using namespace Mongoose::Parser;
using namespace Mongoose::Parser::Intrinsics;

template <typename Iterator>
quoted_string<Iterator>::quoted_string() : quoted_string<Iterator>::base_type(start) {
    using qi::lexeme;
    using qi::char_;

    start %= lexeme['"' >> *(char_ - (!'\\' >> '"')) >> '"'];
}
