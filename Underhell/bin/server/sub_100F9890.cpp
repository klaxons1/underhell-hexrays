int __thiscall sub_100F9890(int this)
{
  int result; // eax

  result = sub_102467A0();
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    *(_DWORD *)(this + 252) = 128;
    return sub_100D8500((_DWORD *)this);
  }
  return result;
}
