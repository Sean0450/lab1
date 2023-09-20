# include <iostream>
typedef unsigned int TELEM;
class Tbitfield {
private:
	int Memlen;
	int Bitlen;
	TELEM* pMem;
public:
	int GetMem_Index(int n);
	TELEM GetMemMask(int n);
	Tbitfield(int n);
	Tbitfield(Tbitfield&);
	~Tbitfield();
	int GetLength();
	void SetBit(int n);
	void ClrBit(int n);
	int GetBit(int n);
	bool operator == (const Tbitfield& bf);
	bool operator != (const Tbitfield& bf);
};