double __thiscall sub_10007FA0(_DWORD *this, int a2)
{
  if ( a2 < 1 || a2 >= this[1] )
    return 0.0;
  else
    return *(float *)&this[13 * a2 + 5];
}
