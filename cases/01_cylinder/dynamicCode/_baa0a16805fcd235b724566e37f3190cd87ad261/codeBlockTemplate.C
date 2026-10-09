/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Description
    Template for use with codeBlock.

\*---------------------------------------------------------------------------*/

#include "dictionaryEntry.H"
#include "fieldTypes.H"
#include "Ostream.H"
#include "Pstream.H"
#include "read.H"
#include "units.H"

//{{{ begin codeInclude
#line 0 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"

//}}} end codeInclude

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    #define CODE_BLOCK_STREAM_FUNCTION(index)                                  \
        void CAT3(codeBlock_baa0a16805fcd235b724566e37f3190cd87ad261, _, index)                             \
        (                                                                      \
            Ostream& os,                                                       \
            const dictionary& dict                                             \
        )

    #define CODE_BLOCK_DICT_FUNCTION(index)                                    \
        void CAT3(codeBlock_baa0a16805fcd235b724566e37f3190cd87ad261, _, index)                             \
        (                                                                      \
            dictionary& dict,                                                  \
            Istream& is                                                        \
        )

//{{{ begin code
    #line 0 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
CODE_BLOCK_STREAM_FUNCTION(0)
{
    #line 27 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (dict.lookupScoped<doubleScalar>("diameter", true, false) / 2.0);
}

CODE_BLOCK_STREAM_FUNCTION(1)
{
    #line 31 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (100*dict.lookupScoped<doubleScalar>("diameter", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(2)
{
    #line 34 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (8*dict.lookupScoped<scalar>("cylMax", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(3)
{
    #line 37 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (20*dict.lookupScoped<doubleScalar>("diameter", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(4)
{
    #line 38 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (dict.lookupScoped<scalar>("layerMax", true, false) + 11*dict.lookupScoped<doubleScalar>("diameter", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(5)
{
    #line 44 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (2*dict.lookupScoped<doubleScalar>("diameter", true, false)*dict.lookupScoped<scalar>("zMax", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(6)
{
    #line 47 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (13*dict.lookupScoped<int32_t>("scalingFactor", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(7)
{
    #line 48 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (8*dict.lookupScoped<int32_t>("scalingFactor", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(8)
{
    #line 49 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (int(ceil(0.4*dict.lookupScoped<label>("layerCells", true, false))));
}

CODE_BLOCK_STREAM_FUNCTION(9)
{
    #line 51 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (3*dict.lookupScoped<int32_t>("scalingFactor", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(10)
{
    #line 53 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (5*dict.lookupScoped<int32_t>("scalingFactor", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(11)
{
    #line 54 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (5*dict.lookupScoped<int32_t>("scalingFactor", true, false));
}

CODE_BLOCK_STREAM_FUNCTION(12)
{
    #line 58 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (dict.lookupScoped<scalar>("xJoin", true, false) / 2.0);
}

CODE_BLOCK_STREAM_FUNCTION(13)
{
    #line 60 "/home/philibert/naval-cfd-lab/cases/01_cylinder/system/blockMeshDict!#codeBlock"
os << (dict.lookupScoped<scalar>("layerMax", true, false) + (7.0 / 11.0)*(dict.lookupScoped<scalar>("yJoin", true, false) - dict.lookupScoped<scalar>("layerMax", true, false)));
}


//}}} end code
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

