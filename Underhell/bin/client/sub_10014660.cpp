int __thiscall sub_10014660(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[28] &= ~a2;
  if ( (a2 & 0x20) != 0 )
    return sub_10039310(this);
  return result;
}
