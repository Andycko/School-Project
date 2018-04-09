make:
	g++ main.cpp car.cpp bike.cpp vehicle.cpp -o auto
	./auto

comp:
	g++ main.cpp car.cpp bike.cpp vehicle.cpp -o auto

clean:
	rm auto
