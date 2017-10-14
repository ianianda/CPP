namespace assignment1
{
	class Cone
	{
	public:
		Cone();
		Cone(const Cone& other);
		unsigned int GetCost() const;

	private:
		int cost;
	};
}
