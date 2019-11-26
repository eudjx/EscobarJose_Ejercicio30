diff.png : Ex29.py Ex29.dat
	python Ex29.py

Ex29.dat : Ex29.x
	./Ex29.x > Ex29.dat

Ex29.x : Ex29.cpp
	c++ Ex29.cpp -o Ex29.x
	
clean:
	rm Ex29.x Ex29.dat diff.png
