#ifndef VirtualBook_h
#define VirtualBook_h
#include "VirtualPage.h"
#include <vector>
class VirtualBook
{
private:
	std::vector<VirtualPage> _pages;

public:
	void addPage(VirtualPage& page) {
		this->_pages.push_back(page);
	}

	void printContent() {
		for (auto& page : this->_pages)
		{
			page.printContent();
		}
	}

	void removeLastPage() {
		if (!this->_pages.empty())
		{
			this->_pages.pop_back();
		}
	}

	void removeAllPages() {
		if (!this->_pages.empty())
			this->_pages.clear();
	}
};
#endif // !VirtualBook_h


