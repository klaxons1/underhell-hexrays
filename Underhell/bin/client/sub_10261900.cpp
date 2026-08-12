char __thiscall sub_10261900(int this, int a2, int a3, char a4)
{
  char v4; // al
  char result; // al

  *(_DWORD *)(this + 344) = a2;
  v4 = *(_BYTE *)(this + 376) ^ (2 * a4);
  *(_DWORD *)(this + 348) = a3;
  result = v4 & 2;
  *(_BYTE *)(this + 376) ^= result;
  return result;
}
