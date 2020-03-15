#pragma once

#include <exception>

#include "types.h"

class CSVException : public std::exception
{
public:
    CSVException() :
        _msg("CSVException")
    {

    }

    const char *what() const noexcept override
    {
        return _msg.c_str();
    }

protected:
    string _msg;
};

class CSVInvalidIndex : public CSVException
{
public:
    CSVInvalidIndex()
    {
        _msg = "row / coloum has invlalid index";
    }
};
