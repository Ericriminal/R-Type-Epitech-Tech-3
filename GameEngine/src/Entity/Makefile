##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

# ----------------------------------------
#                 RULES
# ----------------------------------------

NAME	=	game

CPPFLAGS	=	-W -Wall -Wextra -Iinclude/ -ldl -l pthread -lsfml-graphics -lsfml-window -lsfml-system

SRC	=	main.cpp	\
		include/Core/Coordinator.cpp	\
		include/Core/EntityManager.cpp	\
		include/Entity/EntityCreator.cpp	\
		src/System/RenderSprite.cpp	\
		src/System/RenderParallax.cpp	\
		src/System/Movement.cpp	\
		src/System/PlayerInput.cpp	\
		src/System/Collide.cpp	\
		src/System/BulletHandler.cpp	\
		src/System/Shoot.cpp	\
		src/Entity/Player.cpp	\
		Game.cpp


OBJ	=	$(SRC:.cpp=.o)

RM	=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re:	fclean all
