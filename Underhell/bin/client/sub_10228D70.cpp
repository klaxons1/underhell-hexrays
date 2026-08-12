int __thiscall sub_10228D70(_DWORD *this, int a2)
{
  int result; // eax

  result = this[7];
  *(_DWORD *)(result + 20) |= a2;
  return result;
}
