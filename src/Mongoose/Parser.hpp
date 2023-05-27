#pragma once
#include <boost/spirit/include/qi.hpp>
#include <boost/phoenix/core.hpp>
#include <boost/phoenix/operator.hpp>
#include <string>

namespace Mongoose::Parser {
    namespace qi = boost::spirit::qi;
    namespace ascii = boost::spirit::ascii;

    namespace Intrinsics {
        template<typename Iterator>
        struct quoted_string : qi::grammar<Iterator, std::string(), ascii::space_type> {
            quoted_string();
            qi::rule<Iterator, std::string(), ascii::space_type> start;
        };
    }
}