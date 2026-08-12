int __thiscall sub_101EAE80(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[36] )
    return 0;
  else
    return *(_DWORD *)(this[33] + 4 * a2);
}
