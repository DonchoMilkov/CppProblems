#ifndef LECTURE_H
#define LECTURE_H

using SoftUni::Resource;
namespace SoftUni
{
	class Lecture {
	public:
		typedef set<Resource> ResourceColection;
		typedef map<ResourceType, int> ResourceTypesDict;
	private:
		ResourceColection _resources;
		ResourceTypesDict _typesDict;
	public:
		Lecture& operator << (const Resource& res) {
			if (_resources.find(res) != _resources.end())
			{
				if (_typesDict.find(res.getType()) != _typesDict.end())
				{
					if (_typesDict[res.getType()] > 0)
						_typesDict[res.getType()]--;
					else
						_typesDict[res.getType()] = 0;
				}

				_resources.erase(res);

			}

			_resources.insert(res);

			if (_typesDict.find(res.getType()) != _typesDict.end())
				_typesDict[res.getType()]++;
			else
				_typesDict[res.getType()] = 1;

			return *this;
		}
		set<Resource>::const_iterator begin() {
			return _resources.begin();
		}
		set<Resource>::const_iterator end() {
			return _resources.end();
		}

		ResourceTypesDict& getTypesDict() { return _typesDict; }

		int operator [] (ResourceType rt)
		{
			if (_typesDict.find(rt) != _typesDict.end())
				return _typesDict[rt];
			else
				return 0;
		}

	};

	vector<ResourceType>& operator << (vector<ResourceType>& resTypes, Lecture& lec)
	{
		/*for (ResourceType resType : resTypes)
		{
			if (lec.getTypesDict().find(resType) != lec.getTypesDict().end())
				lec.getTypesDict()[resType]++;
			else
				lec.getTypesDict()[resType] = 0;
		}
		for (const Resource& r : lec) {
			ResourceType currentResType = r.getType();
			if (lec.getTypesDict().find(currentResType) != lec.getTypesDict().end())
				lec.getTypesDict()[currentResType]++;
			else
				lec.getTypesDict()[currentResType] = 0;
		}*/
		for (auto rtp : lec.getTypesDict())
		{
			resTypes.push_back(rtp.first);
		}

		return resTypes;

	}

}
#endif // !LECTURE_H