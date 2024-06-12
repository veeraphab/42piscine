SRCS_DIR = ./srcs/

SRC = main.c allocate_map.c display.c dp.c fill_map.c find_square.c freemap.c \
		getcol.c map_input.c min.c parse_first_line.c putstr.c
		
SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = ${SRCS:.c=.o}

HEADER_DIR = ./includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror

OUTPUT = bsq

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o ${<:.c=.o}

${OUTPUT} : ${SRCS_OBJ}
	${CC} ${CFLAGS} -o ${OUTPUT} ${SRCS_OBJ}

all : ${OUTPUT}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${OUTPUT}

re : fclean all

.PHONY : all clean fclean re