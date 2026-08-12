int __thiscall sub_10262450(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[100] )
    return -1;
  else
    return *(_DWORD *)(this[97] + 4 * a2);
}
