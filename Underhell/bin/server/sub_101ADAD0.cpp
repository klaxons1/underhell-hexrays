int __thiscall sub_101ADAD0(int this)
{
  int result; // eax

  LOBYTE(result) = ~*(_BYTE *)(this + 248);
  *(_DWORD *)(this + 828) = (result & 8 | 4u) >> 2;
  return result;
}
