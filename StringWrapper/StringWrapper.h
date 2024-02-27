#include <iostream>
#include <string>

#include "InputParser.h"

class StringWrapper
{
    public:
        StringWrapper(const std::string &line) : m_data(line){}

        StringWrapper(char letter, unsigned int repetitions) : m_data(repetitions, letter) {}

        StringWrapper() = default;

        virtual ~StringWrapper(){}

        const std::string getContent() const
        {
            return m_data;
        }

        void printContent()
        {
            std::cout << m_data << std::endl;
        }

        StringWrapper& append(const std::string &data)
        {
            m_data.append(data);
            return *this;
        }

    private:
        std::string m_data;

};
