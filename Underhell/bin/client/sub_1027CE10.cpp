int __thiscall sub_1027CE10(int this, int a2)
{
  int result; // eax

  result = a2;
  *(_BYTE *)(this + 52) |= 1u;
  *(_DWORD *)(this + 32) = a2;
  return result;
}
