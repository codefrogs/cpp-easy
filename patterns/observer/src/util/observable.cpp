#include <algorithm>
#include "observable.h"
#include "observer.h"

using std::find;
using std::for_each;
using std::vector;

namespace Codefrogs
{

	Observable::Observable(void) : m_changed(false)
	{
	}

	Observable::~Observable(void)
	{
	}

	void Observable::add(Observer *const observer)
	{
		m_observers.push_back(observer);
	}

	void Observable::removeObserver(Observer *observer)
	{
		std::vector<Observer *>::iterator iter = find(m_observers.begin(), m_observers.end(), observer);
		if (iter != m_observers.end())
		{
			m_observers.erase(iter);
		}
	}

	void Observable::clear(void)
	{
		m_observers.clear();
	}

	int Observable::observers()
	{
		return m_observers.size();
	}

	bool Observable::isChanged(void)
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

		// for_each(m_observers.begin(), m_observers.end(), [this](Observer* ob){ ob->update(this); } );

		std::vector<Observer *>::iterator iter;

		for (iter = m_observers.begin(); iter != m_observers.end(); iter++)
		{
			(*iter)->update(this);
		}

		clearChanged();

	} // of notifyObservers

	void Observable::clearChanged()
	{
		m_changed = false;
	}

	bool Observable::isMember(Observer *observer)
	{

		std::vector<Observer *>::iterator iter;
		for (iter = m_observers.begin(); iter != m_observers.end(); iter++)
		{
			if ((*iter) == observer)
			{
				return true; // already a member
			}
		}

		return false;

	} // of isMember
} // of Codefrogs
