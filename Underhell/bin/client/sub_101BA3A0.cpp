int __thiscall sub_101BA3A0(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[12] )
    return 0;
  else
    return *(_DWORD *)(this[9] + 4 * a2);
}
