int __thiscall sub_10268750(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[65] )
    return -1;
  else
    return *(_DWORD *)(this[62] + 4 * a2);
}
