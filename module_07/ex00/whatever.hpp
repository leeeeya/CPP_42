//
// Created by Claribel Stefany on 11/21/22.
//

#ifndef CPP_42_WHATEVER_HPP
#define CPP_42_WHATEVER_HPP

template <typename T>
void swap(T &t1, T &t2){
	T tmp = t1;
	t1 = t2;
	t2 = tmp;
}


template <typename T>
T t_min(T t1, T t2){
	return t1 < t2 ? t1 : t2;
}

template <typename T>
T t_max(T t1, T t2){
	return t1 > t2 ? t1 : t2;
}

#endif //CPP_42_WHATEVER_HPP
