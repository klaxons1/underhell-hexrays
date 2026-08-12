bool __thiscall sub_10332CB0(int this)
{
  bool result; // al

  sub_100422B0((_DWORD *)this);
  result = (*(_DWORD *)(this + 248) & 0x100000) != 0;
  *(_BYTE *)(this + 3672) = result;
  return result;
}
