int __thiscall sub_1020EA00(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( a2 && a3 )
  {
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    return sub_10425340(this + 125, this + 426, this + 429, a2, a3);
  }
  return result;
}
