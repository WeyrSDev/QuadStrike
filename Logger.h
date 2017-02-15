/*
    QuadStrike Project

    Copyright (c) 2017 MrOnlineCoder (github.com/MrOnlineCoder or vk.com/mronlinecoder)

    Permission to use, copy, modify, and/or distribute this software for any
    purpose with or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

#ifndef QS_LOGGER_H
#define QS_LOGGER_H

#include <fstream>
#include <iostream>
#include <string>

#include <SFML/System/Clock.hpp>

using namespace std;
using namespace sf;

class Logger {
    public:
        ofstream logFile;
        Clock clock;
        void log(string msg);
        void close();
        Logger();
};


#endif // QS_LOGGER_H

