#include <algorithm>

#include "observable.h"
#include "observer.h"

using std::find;
using std::for_each;
using std::vector;

namespace Codefrogs
{

	void Observable::add(Observer *const observer)
	{
		if (! isMember(observer) )
		{
			m_observers.push_back(observer);
		}
	}

	void Observable::removeObserver(Observer *observer)
	{
		auto iter = find(m_observers.begin(), m_observers.end(), observer);
		if (iter != m_observers.end())
		{
			m_observers.erase(iter);
		}
	}

	void Observable::clear(void)
	{
		m_observers.clear();
	}

	int Observable::observers() const
	{
		return m_observers.size();
	}

	bool Observable::isChanged(void) const
	{
		return m_changed;
	}

	void Observable::setChanged(void)
	{
		m_changed = true;
	}

	void Observable::notifyObservers(void)
	{
		if (!isChanged())
			return;

		for_each(m_observers.begin(), m_observers.end(), [this](Observer* ob){ ob->update(this); } );

		clearChanged();

	} // of notifyObservers

	void Observable::clearChanged()
	{
		m_changed = false;
	}

	bool Observable::isMember(Observer *observer)
	{		
		auto it = std::find(m_observers.begin(), m_observers.end(), observer);
		return it != m_observers.end();

	} // of isMember
} // of Codefrogs
