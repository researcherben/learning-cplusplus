

# 
.PHONY: help clean webserver typehints flake8 pylint doctest mccabe

help:
	@echo "make help"
	@echo "      this message"
	@echo "==== Targets outside container ===="
	@echo "make docker"
	@echo "      build and run docker"
	@echo "make dockerlive"
	@echo "      build and run docker /bin/bash"
	@echo "==== Targets inside container ===="
	@echo "make compile"


ifdef FILE_NAME
	@echo 'FILE_NAME is defined' $(FILE_NAME)
else
	@echo 'FILE_NAME is undefined'
endif


do: compile run
compile:
	g++ $(FILE_NAME)
run:
	./a.out

docker:
	docker build -t phusion_cpp .
	docker run -it --rm \
           -v`pwd`:/scratch \
           phusion_cpp

dockerlive:
	docker build -t phusion_cpp .
	docker run -it --rm -v`pwd`:/scratch \
           --entrypoint='' \
           phusion_cpp /bin/bash
