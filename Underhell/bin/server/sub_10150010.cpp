int __thiscall sub_10150010(int this)
{
  int result; // eax

  sub_100E38F0((float *)this);
  sub_1014FD40(this);
  result = dword_106B24A4;
  if ( *(_DWORD *)(dword_106B24A4 + 48) )
    *(_DWORD *)(this + 236) |= 1u;
  return result;
}
