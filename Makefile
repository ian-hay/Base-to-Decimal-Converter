SOURCE=dec.c
NAME=$(basename $(SOURCE))

$(NAME): $(SOURCE)
	cc -Wall -Werror $(SOURCE) -o $(NAME) -g

test: $(NAME)
	./$(NAME) 1101 2; true
	@echo "13 EXPECTED"
	./$(NAME) 1234 5; true
	@echo "194 EXPECTED"
	./$(NAME) ZZ 36; true
	@echo "1295 EXPECTED"
	./$(NAME) CAFE 16; true
	@echo "51966 EXPECTED"
	./$(NAME) A7 10; true
	@echo "INVALID VALUE EXPECTED"
	./$(NAME); true
	@echo "Usage EXPECTED"
	./$(NAME) 1111 37; true
	@echo "INVALID BASE EXPECTED"
	./$(NAME) 1111 1; true
	@echo "INVALID BASE EXPECTED"

.PHONY: clean test
clean:
	rm -rf $(NAME) $(NAME).dSYM

