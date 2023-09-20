#include "Bitmask.h"
Tbitfield::Tbitfield(int len) {
	Bitlen = len;
	Memlen = (Bitlen - 1) / (sizeof(TELEM) * 8 + 1);
	pMem = new TELEM[Memlen];
}
Tbitfield::Tbitfield(Tbitfield& s) {
	Bitlen = s.Bitlen;
	Memlen = s.Memlen;
	pMem = new TELEM[Memlen];
	for (int i = 0; i < Bitlen; i++) {
		pMem[i] = s.pMem[i];
	}
}
Tbitfield:: ~Tbitfield() {
	for (int i = 0; i < Bitlen; i++) {
		pMem[i] = 0;
	}
	delete[] pMem;
}
int Tbitfield:: GetMem_Index(int n) {
	return n / (sizeof(TELEM) * 8);
}
int Tbitfield::GetLength() {
	return Bitlen;
}
bool Tbitfield:: operator == (const Tbitfield bf) {
	if (Bitlen != bf.Bitlen) {
		return false;
	}
}