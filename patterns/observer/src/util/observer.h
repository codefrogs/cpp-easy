/**
 * To make your class an Observer inherit this class and implement update().
 */
#ifndef OBSERVER_H
#define OBSERVER_H
#include <memory>

namespace Codefrogs
{

	class Observable;

	class Observer
	{
	public:
		virtual void update(std::shared_ptr<Observable> observable) = 0;
	};

}

#endif