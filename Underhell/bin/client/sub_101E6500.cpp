int __thiscall sub_101E6500(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[9] )
    return 0;
  else
    return *(_DWORD *)(this[6] + 4 * a2);
}
