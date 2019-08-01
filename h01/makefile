EXE = h01
CXX = @g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow
LIBS = $(EXE)
SRC = $(EXE).cpp
OBJS = $(EXE).o
LDLIBS=

$(EXE): $(OBJS) makefile
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) -L./ -l$(LIBS)

$(OBJS): $(SRC)
	$(CXX) -c $(CXXFLAGS) $(SRC)

# Remove object files from folder
clean:
	@rm -f core $(EXE) *.o

lint:
	clang++-6.0 --analyze -Xanalyzer -analyzer-output=text $(EXE).cpp

run: $(EXE)
	@echo Running . . .
	@./$(EXE)

# installs this command to ~/bin
install: $(EXE)
	@cp $(EXE) ~/bin/me
	@echo Installed in ~/bin/me

uninstall:
	@rm ~/bin/me
	@echo ~/bin/me has been uninstalled

test: $(EXE)
	@echo Testing . . .
	@git add $(SRC) > /dev/null 2> errors.txt; true
	@git commit -m "auto commit `date +"%x %X"`"  > /dev/null 2>> errors.txt; true
	@cat errors.txt 2> /dev/null; true
	@./$(EXE) -t
	@rm -rf errors.txt 2> /dev/null; true

submit: $(EXE)
	@echo Submitting . . .
	@./$(EXE) -t 1> /dev/null 2> results.txt
	@git add $(SRC) results.txt > /dev/null 2> errors.txt; true
	@git commit -m "auto commit `date +"%x %X"`"  > /dev/null 2>> errors.txt; true
	@git push > /dev/null 2>> errors.txt; true
	@cat errors.txt 2> /dev/null; true
	@curl -A "$$CS150KEY" --data "id=$$CS150USER&sid=$$CS150SID&data=`tail -n 1 results.txt`" https://cs170-console.appspot.com/update ; true
	@rm -rf errors.txt 2> /dev/null ; true
