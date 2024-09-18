/**
 * An Observable
 *
 * An Observable is an object that other objects monitor.
 * In other words they wait to hear about changes to this class.
 *
 * @see Observer
 */

#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <vector>
#include <memory>

namespace Codefrogs
{
	class Observer;

	class Observable : public std::enable_shared_from_this<Observable>
	{
	public:
		Observable(void) = default;
		Observable(Observable &&) = default;
		Observable(const Observable &) = default;
		Observable &operator=(Observable &&) = default;
		Observable &operator=(const Observable &) = default;

		virtual ~Observable(void) = default; // hence, rule of 5 applies!

		void add(Observer *const observer);

		void removeObserver(Observer *observer);
		void clear(void);

		int observers() const;

		bool isChanged(void) const;

		void notifyObservers(void);

	protected:
		void setChanged(void);
		void clearChanged();

	private:
		bool isMember(Observer *observer);

	private:
		std::vector<Observer *> m_observers;
		bool m_changed = false;
	};

} // of Codefrogs

#endif // OBSERVABLE_H
