int __thiscall sub_10086010(_DWORD *this, int a2)
{
  if ( a2 == -1 || a2 >= *(_DWORD *)(this[5] + 4) )
    return -1;
  else
    return *(_DWORD *)(this[3] + 4 * a2);
}
