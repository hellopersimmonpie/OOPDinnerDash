#pragma once

class Handler{
   
    public:
        virtual Handler* setNext(Handler* handler) = 0;
        virtual void handle() = 0;
};

