#include <map>
#include <vector>
#include "modem.cxx"
#ifndef MODEM_LISTENER_H_INCLUDED_
#define MODEM_LISTENER_H_INCLUDED_
using namespace std;


class Modems {
	vector<Modem> modemCollection;
	vector<std::thread> threaded_modems;
	public:
		enum STATE{TEST, PRODUCTION};
		STATE state;
		Modems( STATE state);

		void __INIT__( map<string,string> configs );
		void startAllModems();
		
		vector<string> getAllIndexes();
		vector<string> getAllISP();
		vector<string> getAllIMEI();

		vector<Modem> getAllModems();

		bool start(Modem);
};

#endif
