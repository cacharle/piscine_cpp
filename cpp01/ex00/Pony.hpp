#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
	public:
		Pony(int w, int s);
		void say_hello();
		void run();
	private:
		int weight;
		int max_speed;
};

#endif
