int __thiscall sub_1007D870(_DWORD *this, int a2, __int16 a3, __int16 a4)
{
  int result; // eax

  result = 2 * a2;
  *(_WORD *)(this[3] + 8 * result + 4) = a3;
  *(_WORD *)(this[3] + 8 * result + 6) = a4;
  return result;
}
