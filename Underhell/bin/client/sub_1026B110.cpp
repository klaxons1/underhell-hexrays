int __thiscall sub_1026B110(int this, char a2, int a3)
{
  int result; // eax
  char v4; // dl

  result = a3;
  v4 = *(_BYTE *)(this + 348) ^ (2 * a2);
  *(_DWORD *)(this + 388) = a3;
  *(_BYTE *)(this + 348) ^= v4 & 2;
  return result;
}
