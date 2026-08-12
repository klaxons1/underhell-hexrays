int __thiscall sub_10065E70(_DWORD *this, int a2)
{
  unsigned int v3; // edx
  char *v4; // eax
  unsigned int v5; // edx
  int v7; // eax

  if ( this[311] )
  {
    v3 = this[304];
    if ( v3 != -1
      && (v4 = (char *)off_103DCD74 + 16 * (this[304] & 0xFFF) + 4,
          v5 = v3 >> 12,
          *((_DWORD *)off_103DCD74 + 4 * (this[304] & 0xFFF) + 2) == v5)
      && *(_DWORD *)v4 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (this[304] & 0xFFF) + 2) == v5 )
        return *(_DWORD *)v4;
    }
    else
    {
      v7 = sub_101E69B0(a2);
      if ( v7 >= 0 && v7 < this[308] )
        return sub_1006BE10(this[305] + 4 * v7);
    }
  }
  return 0;
}
