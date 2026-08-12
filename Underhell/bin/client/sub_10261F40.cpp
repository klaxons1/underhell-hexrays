int __thiscall sub_10261F40(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = 9 * *(unsigned __int8 *)(this[65] + a2);
  *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a2) + 64) = a3;
  return result;
}
