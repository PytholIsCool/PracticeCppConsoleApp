#include <iostream>
#include <vector> //making the array of acceptable names (i love you julia)
#include <algorithm> //for the transform and the finding shit. (ive noticed that this is REALLY good for modifying and identifying data)
#include <cctype> //to turn the character to lowercase
#include <cstdlib> //clearing the console (system)

void ToLower(std::string& s);
bool ArrayAny(const std::vector<std::string>& array, const std::string& target);

void unCheck(std::string& un);
void Init(std::string& un);

int main() {
	std::cout << "Enter your username:\n";
	std::string username;
	std::cin >> username;

	ToLower(username);

	unCheck(username);
	return 0;
}
void unCheck(std::string& un) {
	system("cls");

	std::string in;
	std::cout << ("Your inputed username is: " + un + "\n");
	std::cout << "Is this correct?\n";
	std::cin >> in;

	ToLower(in);

	if (in == "y") {
		std::cout << ("Username set.\n");

		Init(un);
	}
	else if (in == "n") {
		system("cls");
		main();
	}
	else {
		std::cout << "Invalid input. Press enter to try again.";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //clears the input buffer so the unCheck method runs cleanly without any potential overlap. it'll continue to ignore any new input until the user presses the enter key (effectively making a new line)
		std::cin.get(); //waits for a user input as you cant just do "std::cin;" if you want it to wait
		
		unCheck(un);
	}
}
void Init(std::string& un) {
	std::vector<std::string> theNamesOfMyBeautifulGorgeousQueenJulia = { "julia", "jules", "sly", "haven", "salad", "mewomur", "ham", "murcy", "murr" };

	if (un == "pythol") {
		std::cout << "wsg me. ur like... lowkey sigma ong ong\n\n";

		std::cout << "Anyways, press enter to go back to the start of the application";
		std::cin.get();
	}
	else if (ArrayAny(theNamesOfMyBeautifulGorgeousQueenJulia, un)) {
		std::cout << "HIIIII LOVEEEEEEE\n I LOVE YOUUUUUUUUU\n UR REALLY PRETTYYYYY :DDDDDDD\n";
		for (int i = 0; i < 100; i++) std::cout << "I LOVE YOU I LOVE YOU I LOVE YOU I LOVE YOU I LOVE YOU\n";

		std::cout << "                     ___\n";
		std::cout << "                    /   \\\n";
		std::cout << "                    |   |   <3\n";
		std::cout << "                   /  __/   i love you\n";
		std::cout << "                  (  \\ \\\n";
		std::cout << "                  | \\ \\ \\       ___\n";
		std::cout << "                  |  \\ \\_\\_---_/   \\\n";
		std::cout << "                  |   / )        __/\n";
		std::cout << "                  \\  |    _    /\n";
		std::cout << "                ___\\_|   / \\  |__\n";
		std::cout << "               (________/    \\___)\n";
		
		std::cout << "Press your Enter key to go back to the start of the app love <3\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.get();
		system("cls");

		std::cout << "I love you (Press enter again)\n";
		std::cin.get();
		system("cls");

		std::cout << "(I just wanted to tell you that i love you one last time. For realzies now, press enter one last time <3)\n";
	}
	else {
		std::cout << "You are neither me nor my gorgeous queen Julia so you can leave now. (Seriously, get out. Ur not welcome here.)";
		return;
	}

	std::cin.get();
	system("cls");
	main();
}
#pragma region Base
void ToLower(std::string& s) {
	std::transform(s.begin(), s.end(), s.begin(),
		[](unsigned char c) { return std::tolower(c); });
}
bool ArrayAny(const std::vector<std::string>& array, const std::string& target) {
	return std::find(array.begin(), array.end(), target) != array.end();
}
#pragma endregion

