define MSG
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile for Libft                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/14 19:23:44 by arsciand          #+#    #+#              #
#                                                     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
endef

# Progress bar

ifneq ($(words $(MAKECMDGOALS)),1)
.DEFAULT_GOAL = make
%:
	  @$(MAKE) $@ --no-print-directory -rRf $(firstword $(MAKEFILE_LIST))
else
ifndef ECHO
T := $(shell $(MAKE) $(MAKECMDGOALS) --no-print-directory \
	  -nrRf $(firstword $(MAKEFILE_LIST)) \
	  ECHO="OutputPrintable" | grep -c "OutputPrintable")
N := x
C = $(words $N)$(eval N := x $N)
V = "`expr "   [\`expr $C '*' 100 / $T\`" : '.*\(....\)$$'`%]"
ECHO = printf "\e[1A\r%s %s %s                                      \n" $V
endif

# Color

RESET_C = \033[m
B_C = \033[0;34m
Y_C = \033[0;33m
G_C = \033[0;32m
R_C = \033[0;31m
M_C = \033[0;35m
C_C = \033[0;36

# Programms names

NAME = libft.a
HNAME = libft.h
TNAME = Libft_test

# Dir/Files Path

S_PATH = srcs/
H_PATH = includes/
B_PATH = build/
O_PATH = build/objs/

P_PATH = build/objs/ft_mprintf/

PATHS = $(P_PATH) $(O_PATH) $(B_PATH)
OBJP = "$(O_PATH){core,db,misc}*.o"


# Files

SRC += $(S_PATH)ft_atoi.c
SRC += $(S_PATH)ft_bzero.c
SRC += $(S_PATH)ft_free_tab.c
SRC += $(S_PATH)ft_isalnum.c
SRC += $(S_PATH)ft_isalpha.c
SRC += $(S_PATH)ft_isascii.c
SRC += $(S_PATH)ft_isdigit.c
SRC += $(S_PATH)ft_isspace.c
SRC += $(S_PATH)ft_isprint.c
SRC += $(S_PATH)ft_itoa.c
SRC += $(S_PATH)ft_lstadd.c
SRC += $(S_PATH)ft_lstdel.c
SRC += $(S_PATH)ft_lstdelone.c
SRC += $(S_PATH)ft_lstfind.c
SRC += $(S_PATH)ft_lstiter.c
SRC += $(S_PATH)ft_lstlen.c
SRC += $(S_PATH)ft_lstmap.c
SRC += $(S_PATH)ft_lstmerge.c
SRC += $(S_PATH)ft_lstnew.c
SRC += $(S_PATH)ft_lstpushback.c
SRC += $(S_PATH)ft_lstrev.c
SRC += $(S_PATH)ft_memalloc.c
SRC += $(S_PATH)ft_memccpy.c
SRC += $(S_PATH)ft_memchr.c
SRC += $(S_PATH)ft_memcmp.c
SRC += $(S_PATH)ft_memcpy.c
SRC += $(S_PATH)ft_memdel.c
SRC += $(S_PATH)ft_memmove.c
SRC += $(S_PATH)ft_memset.c
SRC += $(S_PATH)ft_putchar_fd.c
SRC += $(S_PATH)ft_putchar.c
SRC += $(S_PATH)ft_putendl_fd.c
SRC += $(S_PATH)ft_putendl.c
SRC += $(S_PATH)ft_putnbr_fd.c
SRC += $(S_PATH)ft_putnbr.c
SRC += $(S_PATH)ft_putstr_fd.c
SRC += $(S_PATH)ft_putstr.c
SRC += $(S_PATH)ft_strcat.c
SRC += $(S_PATH)ft_strchr.c
SRC += $(S_PATH)ft_strclen.c
SRC += $(S_PATH)ft_strclr.c
SRC += $(S_PATH)ft_strcmp.c
SRC += $(S_PATH)ft_strcpy.c
SRC += $(S_PATH)ft_strdup.c
SRC += $(S_PATH)ft_strdel.c
SRC += $(S_PATH)ft_strequ.c
SRC += $(S_PATH)ft_striter.c
SRC += $(S_PATH)ft_striteri.c
SRC += $(S_PATH)ft_strjoin.c
SRC += $(S_PATH)ft_strjoinf.c
SRC += $(S_PATH)ft_strlcat.c
SRC += $(S_PATH)ft_strlen.c
SRC += $(S_PATH)ft_strncat.c
SRC += $(S_PATH)ft_strnrchr.c
SRC += $(S_PATH)ft_strncmp.c
SRC += $(S_PATH)ft_strncpy.c
SRC += $(S_PATH)ft_strnequ.c
SRC += $(S_PATH)ft_strnew.c
SRC += $(S_PATH)ft_strnstr.c
SRC += $(S_PATH)ft_strmap.c
SRC += $(S_PATH)ft_strmapi.c
SRC += $(S_PATH)ft_strrchr.c
SRC += $(S_PATH)ft_strrev.c
SRC += $(S_PATH)ft_strsplit.c
SRC += $(S_PATH)ft_strstr.c
SRC += $(S_PATH)ft_strsub.c
SRC += $(S_PATH)ft_strtrim.c
SRC += $(S_PATH)ft_tablen.c
SRC += $(S_PATH)ft_tolower.c
SRC += $(S_PATH)ft_toupper.c
SRC += $(S_PATH)get_next_line.c
SRC += $(S_PATH)ft_mprintf/ft_mprintf.c
SRC += $(S_PATH)ft_mprintf/ft_mprintf_tools.c


# Objects and Headers

OBJ = $(patsubst $(S_PATH)%.c, $(O_PATH)%.o, $(SRC))
HDR = $(H_PATH)$(HNAME)

# Variables

C_GCC = gcc
COMPL = $(C_GCC) -c -I$(H_PATH)
BUILD = $(PATHS)
AR_RC = ar rc
RANLI = ranlib
CFLAG = -Wall -Wextra -Werror
RM_RF = /bin/rm -rf
MKDIR = mkdir -p
NORME = norminette
SLEEP = sleep 0.01
GCFIL = "	- >	Compiling		-"
GCLAR = "	- }	Archiving		-"
RMSHW = "	- -	Removing		-"
MKSHW = "	- +	Creating		-"
GCRUN = echo ">\n$(G_C)---------->\tCompiling$(RESET_C)\n"
CLRUN = echo ">\n$(R_C)---------->\tCleaning$(RESET_C)\n"
FCRUN = echo ">\n$(R_C)---------->\tForce cleaning$(RESET_C)\n"
NORMR = echo ">\n$(Y_C)---------->\tNorminette$(RESET_C)\n"

.PHONY: all norme clean fclean re test

# Rules

make:
#	$(MSG)
	@$(MAKE) --no-print-directory all

all: $(BUILD) $(NAME)

$(NAME): $(OBJ)
	@$(SLEEP)
	@$(AR_RC) $(NAME) $^
	@$(ECHO) $(GCLAR) $@
	@$(RANLI) $(NAME)

$(OBJ): $(O_PATH)%.o: $(S_PATH)%.c $(HDR)
	@$(COMPL) $(CFLAG) $< -o $@
	@$(ECHO) $(GCFIL) $<

$(PATHS):
	@$(SLEEP)
	@$(GCRUN)
	@$(MKDIR) $(PATHS)
	@$(foreach var,$(PATHS), $(ECHO) $(MKSHW) $(var);)

norme:
	@$(NORMR)
	@$(NORME) $(SRC) $(H_PATH)$(HNAME)
	@$(NORMD)

clean:
	@$(CLRUN)
	@for i in $(OBJ); do $(RM_RF) $$i; $(ECHO) $(RMSHW) $$i; done

fclean:
	@$(FCRUN)
	@for i in $(OBJ); do $(RM_RF) $$i; $(ECHO) $(RMSHW) $$i; done
	@for i in $(PATHS); do $(RM_RF) $$i; $(ECHO) $(RMSHW) $$i; done
	@$(RM_RF) $(NAME)
	@$(ECHO) $(RMSHW) $(NAME)

re:
	@$(MAKE) --no-print-directory fclean all

endif
