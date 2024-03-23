NAME	=	algo

SRCS	=	main.cpp

CPP		=	c++
CPPFLAG	=	-std=c++11
RM		=	rm -f
CP		=	cp tmp/main.cpp .

all		:
			@$(CPP) $(CPPFLAG) $(SRCS) -o $(NAME)

fclean	:
			@$(RM) $(NAME)

test	:
			@$(MAKE) all
			@./$(NAME)
			@$(MAKE) fclean

re		:
			@$(MAKE) fclean
			@$(MAKE) all

.PHONY: all fclean re test
