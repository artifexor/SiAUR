#include "Vid.hpp"

class Movie : public VidBase {
public:
	static VidBase create(std::string &str, std::string &rar, std::string urloc = "Movies\\")  {
		return VidBase(str,rar,urloc,-1,-1);
	}
	static std::string URLoc(VidBase&);

};
