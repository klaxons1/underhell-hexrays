int __thiscall sub_10044C60(_DWORD *this)
{
  unsigned int v2; // ecx
  int result; // eax
  int *v4; // edx
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // edx
  char *v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  char *v11; // eax

  v2 = this[672];
  result = 6;
  if ( v2 != -1
    && (v4 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], v5 = v2 >> 12, v4[1] == v5)
    && *v4
    && (v4[1] != v5 ? (v6 = 0) : (v6 = *v4), *(_DWORD *)(v6 + 816)) )
  {
    if ( v4[1] == v5 )
      v7 = *v4;
    else
      v7 = 0;
    v8 = *(char **)(v7 + 816);
    if ( !v8 )
      v8 = (char *)String;
    result = sub_100BDEE0(v8);
    if ( result == -1 )
    {
      v9 = this[672];
      if ( v9 == -1 || off_1061BE18[4 * (this[672] & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (this[672] & 0xFFF) + 1];
      v11 = *(char **)(v10 + 816);
      if ( !v11 )
        v11 = (char *)String;
      return sub_100BDF40(v11) != -1 ? 16 : 6;
    }
  }
  else if ( this[676] )
  {
    return 16;
  }
  return result;
}
