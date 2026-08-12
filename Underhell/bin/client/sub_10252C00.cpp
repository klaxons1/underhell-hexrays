char __thiscall sub_10252C00(int this, char a2, int a3)
{
  char result; // al

  result = (a2 ^ *(_BYTE *)(this + 936)) & 1;
  *(_BYTE *)(this + 936) ^= result;
  *(_DWORD *)(this + 940) = a3;
  return result;
}
