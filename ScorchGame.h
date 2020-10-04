#pragma once

#include "ScorchObject.h"

namespace Scorch {
namespace Core {

	class SCGame : SCObject
	{
	public:
		virtual void Configure() = 0;
		virtual void GetInput() = 0;
		virtual void Update() = 0;
		virtual void Render() = 0;
	protected:

	private:
	};


} //End namespace Core
} //End namespace Scorch