#pragma once
template <class T>
class TStack
{
protected:
	int numItem;
	
public:
	T* item;
	TStack(size_t size);
	virtual ~TStack();
	int getNumItem();
	void push(T t);
	T pop();
	bool isEmpty();
};

template<class T>
inline TStack<T>::TStack(size_t size)
{
	numItem = 0;
	item = new T[size];
}

template<class T>
inline TStack<T>::~TStack()
{
	delete[] item;
}

template<class T>
inline int TStack<T>::getNumItem()
{
	return numItem;
}

template<class T>
inline void TStack<T>::push(T t)
{
	item[numItem++] = t;
}

template<class T>
inline T TStack<T>::pop()
{
	return item[--numItem];
}

template<class T>
inline bool TStack<T>::isEmpty()
{
	return numItem==0 ? true:false;
}
