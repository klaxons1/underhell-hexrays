int __thiscall sub_100B9E30(_DWORD *this, int a2)
{
  if ( a2 < 1 || a2 >= this[1] )
    return 0;
  else
    return this[13 * a2 + 4];
}
