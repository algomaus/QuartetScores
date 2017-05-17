#ifndef GENESIS_TREE_FORMATS_NEWICK_LEXER_H_
#define GENESIS_TREE_FORMATS_NEWICK_LEXER_H_

/*
    Genesis - A toolkit for working with phylogenetic data.
    Copyright (C) 2014-2016 Lucas Czech

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Contact:
    Lucas Czech <lucas.czech@h-its.org>
    Exelixis Lab, Heidelberg Institute for Theoretical Studies
    Schloss-Wolfsbrunnenweg 35, D-69118 Heidelberg, Germany
*/

/**
 * @brief
 *
 * @file
 * @ingroup tree
 */

#include "utils/io/lexer.hpp"

namespace genesis {
namespace tree {

// =============================================================================
//     Newick Lexer
// =============================================================================

class NewickLexer : public utils::Lexer
{
public:

    NewickLexer();

private:

    bool scan_comment() override;

    bool scan_number() override;

    bool scan_tag() override;
};

} // namespace tree
} // namespace genesis

#endif // include guard
