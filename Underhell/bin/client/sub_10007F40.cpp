int __thiscall sub_10007F40(_DWORD *this, int a2)
{
  if ( a2 < 1 || a2 >= this[1] )
    return 8;
  else
    return this[13 * a2 + 7];
}
