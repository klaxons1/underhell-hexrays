int __thiscall sub_1026B980(_DWORD *this, int a2)
{
  if ( a2 >= 0 && a2 < this[75] )
    return *(_DWORD *)(this[72] + 4 * a2);
  else
    return -1;
}
