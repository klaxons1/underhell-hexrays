void __thiscall sub_1010C110(_DWORD *this, int a2, const char *a3)
{
  _DWORD *v3; // esi
  unsigned int v4; // eax
  char v5; // bl
  int v6; // ecx
  unsigned int v7; // eax
  const char *v8; // ecx
  int *v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax

  if ( a2 )
  {
    v3 = (_DWORD *)this[12];
    while ( v3 )
    {
      v4 = v3[6];
      v5 = 0;
      if ( v4 == -1 || off_1061BE18[4 * (v3[6] & 0xFFF) + 2] != v4 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (v3[6] & 0xFFF) + 1];
      if ( v6 == a2 )
      {
        v7 = strlen(a3);
        v8 = (const char *)v3[2];
        if ( !v8 )
          v8 = String;
        if ( !sub_104291C0(v8, a3, v7) )
          v5 = 1;
      }
      v9 = v3 + 12;
      v10 = v3;
      v3 = (_DWORD *)v3[12];
      if ( v5 )
      {
        *(_DWORD *)(v10[13] + 48) = v3;
        v11 = *v9;
        if ( v11 )
          *(_DWORD *)(v11 + 52) = v10[13];
        sub_1042FBE0(v10);
      }
    }
  }
}
