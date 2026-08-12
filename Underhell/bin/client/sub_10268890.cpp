int __thiscall sub_10268890(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[75] )
    return -1;
  else
    return *(_DWORD *)(this[72] + 4 * a2);
}
