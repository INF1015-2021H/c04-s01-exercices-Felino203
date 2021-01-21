///
/// Traite les arguments de ligne de commande à l'aide de TCLAP.
///


#include <cstddef>
#include <cstdint>

#include <string>

#include <tclap/cmdline.h>

#include "arguments.hpp"

using namespace std;
using namespace std::literals;


arguments parseargs(int argc, char* argv[]) {
	tclap::cmdline parser("what is it, citizen?");

	// exo 2 : arguments du programme
	// todo: créer l'argument de nombre (--number)
	tclap::valuearg<int> numberarg; //...
	parser.add(numberarg);
	
	// todo: créer l'argument de fichier (-f et --filename)
	tclap::valuearg<string> filenamearg; //...
	parser.add(filenamearg);

	parser.parse(argc, argv);

	return {numberarg.getvalue(), filenamearg.getvalue()};
}

