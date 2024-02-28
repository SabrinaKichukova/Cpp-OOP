#ifndef VIRTUALBOOK_H_
#define VIRTUALBOOK_H_

#include <vector>

#include "VirtualPage.h"

class VirtualBook {
public:
    VirtualBook() = default;

    void addPage(const VirtualPage &page)
    {
        _pages.push_back(page);
    }

    void printContent() const
    {
        for (auto &page : _pages)
        {
            page.printContent();
        }
    }

    void removeLastPage()
    {
        if (!_pages.empty())
        {
            _pages.pop_back();
        }
        
    }

    void removeAllPages()
    {
        _pages.clear();
    }

private:
    std::vector<VirtualPage> _pages;
};

#endif /* VIRTUALBOOK_H_ */
