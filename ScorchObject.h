#pragma once

#include <vector>

namespace Scorch {
namespace Core {

	class SCObject
	{
	public:
		virtual void initialize() = 0;
		virtual void reset() = 0;
		virtual void cleanup() = 0;
		std::vector<SCObject*> getObjectChildren() { return ObjChildren_; }
		SCObject* getObjectChildAtIndex(int i) { return ObjChildren_[i]; }
	private:
		int objectID_;
		std::vector<SCObject*> ObjChildren_;
	};
} //End namespace Core
} //End namespace Scorch