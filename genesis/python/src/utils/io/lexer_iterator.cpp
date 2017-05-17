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
 * @ingroup python
 */

#include <python/src/common.hpp>

#include "lib/genesis.hpp"

using namespace ::genesis::utils;

PYTHON_EXPORT_CLASS (LexerIterator, "utils")
{

    // -------------------------------------------------------------------
    //     Class LexerIterator
    // -------------------------------------------------------------------

    boost::python::class_< ::genesis::utils::LexerIterator > ( "LexerIterator", boost::python::init< Lexer *, long >(( boost::python::arg("lexer"), boost::python::arg("position") )) )

        // Public Member Functions

        .def(
            "consume_head",
            ( void ( ::genesis::utils::LexerIterator::* )(  ))( &::genesis::utils::LexerIterator::consume_head ),
            get_docstring("void ::genesis::utils::LexerIterator::consume_head ()")
        )
        .def(
            "get_lexer",
            ( Lexer & ( ::genesis::utils::LexerIterator::* )(  ) const )( &::genesis::utils::LexerIterator::get_lexer ),
            boost::python::return_value_policy<boost::python::reference_existing_object>()
        )
        .def(
            "has_error",
            ( bool ( ::genesis::utils::LexerIterator::* )(  ) const )( &::genesis::utils::LexerIterator::has_error ),
            get_docstring("bool ::genesis::utils::LexerIterator::has_error () const")
        )

        // Operators

        .def( boost::python::self != boost::python::self )
        .def( boost::python::self == boost::python::self )
    ;
}
