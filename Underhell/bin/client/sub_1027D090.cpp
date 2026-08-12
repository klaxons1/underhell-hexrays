char __thiscall sub_1027D090(int this, char a2, int a3)
{
  char v3; // al
  char result; // al

  v3 = *(_BYTE *)(this + 52) ^ (4 * a2);
  *(_DWORD *)(this + 36) = a3;
  result = v3 & 4;
  *(_BYTE *)(this + 52) ^= result;
  return result;
}
