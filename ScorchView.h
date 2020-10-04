#pragma once

#include "ScorchObject.h"

namespace Scorch {
namespace Core {

	class SCView : SCObject
	{
	public:
		virtual void draw() = 0;
		std::vector<SCView*> getViewChildren() { return ViewChildren_; }
		SCView* getViewChildAtIndex(int i) { return ViewChildren_[i]; }
		void addViewChild(SCView* newChild) { ViewChildren_.push_back(newChild); }
	private:
		std::vector<SCView*> ViewChildren_;

	};


} //End namespace Core
} //End namespace Scorch