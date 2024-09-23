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

namespace Codefrogs
{
	class Observer;

	class Observable
	{
	public:
		Observable(void) = default;
		Observable(Observable &&) = default;
		Observable(const Observable &) = default;
		Observable &operator=(Observable &&) = default;
		Observable &operator=(const Observable &) = default;

		virtual ~Observable(void) = default; // hence, rule of 5 applies!

		void add(Observer *const observer) noexcept;

		void removeObserver(Observer *observer) noexcept;
		void clear(void) noexcept;

		int observers() const noexcept;

		bool isChanged(void) const noexcept;

		void notifyObservers(void);

	protected:
		void setChanged(void) noexcept;
		void clearChanged() noexcept;

	private:
		bool isMember(Observer *observer) noexcept;

	private:
		std::vector<Observer *> m_observers;
		bool m_changed = false;
	};

} // of Codefrogs

#endif // OBSERVABLE_H
