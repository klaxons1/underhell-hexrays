int __thiscall sub_1027CE30(int this, int a2, int a3)
{
  int result; // eax

  result = sub_1025DD80((_DWORD *)this, a2, a3);
  *(_BYTE *)(this + 52) |= 1u;
  *(_DWORD *)(this + 40) = a2;
  return result;
}
