int __thiscall sub_101E64E0(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[4] )
    return 0;
  else
    return *(_DWORD *)(this[1] + 4 * a2);
}
