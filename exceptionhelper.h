#pragma once

#include <stdexcept>

class IllegalStateException : public std::exception
{
private:
    std::string msg;

public:
    IllegalStateException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class InvocationTargetException : public std::exception
{
private:
    std::string msg;

public:
    InvocationTargetException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class IllegalAccessException : public std::exception
{
private:
    std::string msg;

public:
    IllegalAccessException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class NullPointerException : public std::exception
{
private:
    std::string msg;

public:
    NullPointerException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class ClassCastException : public std::exception
{
private:
    std::string msg;

public:
    ClassCastException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class UnsupportedOperationException : public std::exception
{
private:
    std::string msg;

public:
    UnsupportedOperationException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class NoSuchFieldException : public std::exception
{
private:
    std::string msg;

public:
    NoSuchFieldException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class XmlPullParserException : public std::exception
{
private:
    std::string msg;

public:
    XmlPullParserException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class InflateException : public std::exception
{
private:
    std::string msg;

public:
    InflateException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class IOException : public std::exception
{
private:
    std::string msg;

public:
    IOException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class ActivityNotFoundException : public std::exception
{
private:
    std::string msg;

public:
    ActivityNotFoundException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class FileNotFoundException : public std::exception
{
private:
    std::string msg;

public:
    FileNotFoundException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class NoSuchMethodException : public std::exception
{
private:
    std::string msg;

public:
    NoSuchMethodException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class NumberFormatException : public std::exception
{
private:
    std::string msg;

public:
    NumberFormatException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class NotFoundException : public std::exception
{
private:
    std::string msg;

public:
    NotFoundException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class NameNotFoundException : public std::exception
{
private:
    std::string msg;

public:
    NameNotFoundException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class GeneralSecurityException : public std::exception
{
private:
    std::string msg;

public:
    GeneralSecurityException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class UnsupportedEncodingException : public std::exception
{
private:
    std::string msg;

public:
    UnsupportedEncodingException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class IllegalBlockSizeException : public std::exception
{
private:
    std::string msg;

public:
    IllegalBlockSizeException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class BadPaddingException : public std::exception
{
private:
    std::string msg;

public:
    BadPaddingException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class NoSuchAlgorithmException : public std::exception
{
private:
    std::string msg;

public:
    NoSuchAlgorithmException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class InvalidKeySpecException : public std::exception
{
private:
    std::string msg;

public:
    InvalidKeySpecException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class RemoteException : public std::exception
{
private:
    std::string msg;

public:
    RemoteException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class InvalidKeyException : public std::exception
{
private:
    std::string msg;

public:
    InvalidKeyException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class SignatureException : public std::exception
{
private:
    std::string msg;

public:
    SignatureException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class URISyntaxException : public std::exception
{
private:
    std::string msg;

public:
    URISyntaxException(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};

class AssertionError : public std::exception
{
private:
    std::string msg;

public:
    AssertionError(const std::string& message = "") : msg(message)
    {
    }

    const char * what() const throw()
    {
        return msg.c_str();
    }
};
