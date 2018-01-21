linux:
	cd source
	g++ read.cpp -o "read"
	g++ write.cpp -o write
	cd ..
	mv "source/read" ../"read"
	mv source/write ../writer

windows:
	cd source
	g++ read.cpp -o "read"
	g++ write.cpp -o write
	cd ..
	mv "source/read" ../"read"
	mv source/write ../writer	
