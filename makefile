Main: Lab7_AndresCruz.o Poder.o Air.o Curativo.o Defensivo.o Earth.o Fire.o Invocacion.o Non.o Ofensivo.o Persona.o Water.o
	g++ Lab7_AndresCruz.o Air.o Poder.o Curativo.o Defensivo.o Earth.o Fire.o Invocacion.o Non.o Ofensivo.o Persona.o Water.o -o rnm
Air.o: Air.cpp Air.h
	g++ -c Air.cpp
Curativo.o: Curativo.cpp Curativo.h
	g++ -c Curativo.cpp
Defensivo.o: Defensivo.cpp Defensivo.h
	g++ -c Defensivo.cpp
Earth.o: Earth.cpp Earth.h
	g++ -c Earth.cpp
Fire.o: Fire.cpp Fire.h
	g++ -c Fire.cpp
Invocacion.o: Invocacion.cpp Invocacion.h
	g++ -c Invocacion.cpp
Non.o: Non.cpp Non.h
	g++ -c Non.cpp
Ofensivo.o: Ofensivo.cpp Ofensivo.h
	g++ -c Ofensivo.cpp
Persona.o: Persona.cpp Persona.h
	g++ -c Persona.cpp
Water.o: Water.cpp Water.h
	g++ -c Water.cpp
Poder.o: Poder.cpp Poder.h
	g++ -c Poder.cpp
Lab7_AndresCruz.o: Lab7_AndresCruz.cpp
	g++ -c Lab7_AndresCruz.cpp