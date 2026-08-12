int __thiscall sub_10187540(_DWORD *this, int a2, char *Source, int a4)
{
  int v4; // edx
  int result; // eax
  _DWORD *v6; // edi
  _DWORD *i; // ecx
  char *v8; // esi

  v4 = this[1444];
  result = 0;
  if ( v4 > 0 )
  {
    v6 = (_DWORD *)this[1441];
    for ( i = v6; *i != a2; i += 24 )
    {
      if ( ++result >= v4 )
        return result;
    }
    v8 = (char *)&v6[24 * result];
    if ( v8 )
    {
      if ( Source )
      {
        result = sub_102282F0(v8 + 16, Source, 0x20u);
      }
      else
      {
        result = 0;
        *((_DWORD *)v8 + 4) = 0;
        *((_DWORD *)v8 + 5) = 0;
        *((_DWORD *)v8 + 6) = 0;
        *((_DWORD *)v8 + 7) = 0;
        *((_DWORD *)v8 + 8) = 0;
        *((_DWORD *)v8 + 9) = 0;
        *((_DWORD *)v8 + 10) = 0;
        *((_DWORD *)v8 + 11) = 0;
      }
      *((_DWORD *)v8 + 3) = a4;
    }
  }
  return result;
}
