int __thiscall sub_1007D7A0(_DWORD *this, unsigned __int16 a2, char a3)
{
  int result; // eax

  result = 9 * a2;
  *(_BYTE *)(this[8] + 36 * a2 + 25) = a3;
  return result;
}
