#ifndef STUDENTINFO_H
#define STUDENTINFO_H
#include<string>

class studentinfo
{
    public:
        studentinfo();
        studentinfo(std::string, std::string, double);
        bool operator==(studentinfo);
        bool operator!=(studentinfo);
        void print();

        virtual ~studentinfo();

    protected:

    private:
        std::string studentID, name;
        double cgpa;
};

#endif // STUDENTINFO_H
