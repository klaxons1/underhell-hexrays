void __thiscall sub_1010CD10(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int v3; // edi
  unsigned int v4; // eax
  char v5; // bl
  int v6; // ecx
  const char *v7; // edx
  int v8; // ecx
  const char *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  const char *v12; // esi
  const char *v13; // eax
  int *v14; // eax
  int v15; // ecx
  int v16; // eax

  v2 = a2;
  if ( a2 )
  {
    v3 = this[12];
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 16);
        v5 = 0;
        if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 16) & 0xFFF) + 2] != *(_DWORD *)(v3 + 16) >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (*(_DWORD *)(v3 + 16) & 0xFFF) + 1];
        if ( (_DWORD *)v6 == v2 )
        {
          v7 = (const char *)v2[65];
          if ( !v7 )
            v7 = String;
          if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 16) & 0xFFF) + 2] != v4 >> 12 )
            v8 = 0;
          else
            v8 = off_1061BE18[4 * (*(_DWORD *)(v3 + 16) & 0xFFF) + 1];
          v9 = *(const char **)(v8 + 260);
          if ( !v9 )
            v9 = String;
          if ( !_stricmp(v9, v7) )
          {
            v10 = *(_DWORD *)(v3 + 16);
            if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 16) & 0xFFF) + 2] != v10 >> 12 )
              v11 = 0;
            else
              v11 = off_1061BE18[4 * (*(_DWORD *)(v3 + 16) & 0xFFF) + 1];
            v12 = *(const char **)(v11 + 92);
            if ( !v12 )
              v12 = String;
            v13 = sub_10019630(a2);
            if ( !_stricmp(v12, v13) )
              v5 = 1;
          }
        }
        v14 = (int *)(v3 + 48);
        v15 = v3;
        v3 = *(_DWORD *)(v3 + 48);
        if ( v5 )
        {
          *(_DWORD *)(*(_DWORD *)(v15 + 52) + 48) = v3;
          v16 = *v14;
          if ( v16 )
            *(_DWORD *)(v16 + 52) = *(_DWORD *)(v15 + 52);
          sub_1042FBE0(v15);
        }
        if ( !v3 )
          break;
        v2 = a2;
      }
    }
  }
}
