int __thiscall sub_10262340(_DWORD *this, int a2)
{
  if ( a2 >= 0 && a2 < this[84] )
    return *(_DWORD *)(this[81] + 4 * a2);
  else
    return -1;
}
