all:    
	moc traducteur.h -o moc_traducteur.cpp
	g++ -Wall -fPIC --std=c++11  `pkg-config --cflags Qt5Widgets` moc_traducteur.cpp traducteur.cpp vue.cpp  calc.cpp main.cpp -o calc `pkg-config  --libs Qt5Widgets`
clear:
		rm moc_traducteur.cpp calc
