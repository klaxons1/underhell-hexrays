int __thiscall sub_10286E90(_DWORD *this, int a2)
{
  if ( a2 >= 0 && a2 < this[64] )
    return *(_DWORD *)(16 * *(_DWORD *)(this[61] + 4 * a2) + this[52]);
  else
    return 0;
}
