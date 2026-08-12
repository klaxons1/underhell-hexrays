int __thiscall sub_10007F10(_DWORD *this, int a2)
{
  if ( a2 < 1 || a2 >= this[1] )
    return 4;
  else
    return this[13 * a2 + 6];
}
