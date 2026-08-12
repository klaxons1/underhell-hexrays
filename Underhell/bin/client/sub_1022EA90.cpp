bool __thiscall sub_1022EA90(_BYTE *this, int a2, _BYTE *a3, int a4)
{
  char v5; // al
  bool result; // al

  result = (this[20] & 2) == 0
        && (v5 = sub_1022E380((int)this, a2 + a4), this[20] &= ~2u, v5)
        && sub_10227B20((_BYTE *)(a2 + *(_DWORD *)this + *((_DWORD *)this + 3) - *((_DWORD *)this + 8)), a3, a4) == 0;
  return result;
}
