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
class Observer ; 

class Observable
{
public:
			Observable( void ) ;
	virtual ~Observable( void ) ;

	void	add( Observer* const observer ) ;

	void    removeObserver( Observer* observer ) ;
	void	clear( void ) ;

	int		observers() ;

	bool	isChanged( void ) ;
	

	void	notifyObservers( void ) ;

	protected:
	void	setChanged( void ) ;
	void 	clearChanged();

private:
	
	bool	isMember( Observer* observer ) ;

private:

	std::vector<Observer*>	m_observers ;
	bool					m_changed ;
};

}// of Codefrogs

#endif // OBSERVABLE_H