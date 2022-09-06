#ifndef RESOURCE_H
#define RESOURCE_H
#include "ResourceType.h"

using SoftUni::ResourceType;
using namespace std;

namespace SoftUni
{
	class Resource
	{
	private:
		int _id;
		ResourceType _type;
		string _url;
	public:
		int getId(void) const { return _id; };
		const ResourceType& getType() const { return _type; };

		bool operator< (const Resource& b) const {
			return this->_id < b._id;
		}

		friend ostream& operator << (ostream&, const Resource&);
		friend istream& operator >> (istream&, Resource&);
	};

	ostream& operator<< (ostream& str, const Resource& r) {
		str << r._id << " " << r._type << " " << r._url;
		return str;
	}

	istream& operator>> (istream& str, ResourceType& rt) {
		string type;
		str >> type;
		if (type == "Presentation")
			rt = ResourceType::PRESENTATION;
		else if (type == "Demo")
			rt = ResourceType::DEMO;
		else if (type == "Video")
			rt = ResourceType::VIDEO;

		return str;
	}

	istream& operator>> (istream& str, Resource& r) {
		str >> r._id >> r._type >> r._url;
		return str;
	}

}


#endif // !RESOURCE_H