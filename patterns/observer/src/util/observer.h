/**
 * To make your class an Observer inherit this class and implement update().
 */
#ifndef OBSERVER_H
#define OBSERVER_H

namespace Codefrogs
{

	class Observable;

	class Observer
	{
	public:
		virtual void update(Observable *observable) = 0;
	};

}

#endif