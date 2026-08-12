int __cdecl CreateInterface(_BYTE *a1, _DWORD *a2)
{
  int v2; // esi
  _BYTE *v3; // eax
  _BYTE *v4; // ecx
  bool v5; // cf
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = dword_106FF8F4;
  if ( dword_106FF8F4 )
  {
    while ( 1 )
    {
      v3 = *(_BYTE **)(v2 + 4);
      v4 = a1;
      while ( 1 )
      {
        v5 = *v3 < *v4;
        if ( *v3 != *v4 )
          break;
        if ( !*v3 )
          goto LABEL_7;
        v6 = v3[1];
        v5 = v6 < v4[1];
        if ( v6 != v4[1] )
          break;
        v3 += 2;
        v4 += 2;
        if ( !v6 )
        {
LABEL_7:
          v7 = 0;
          goto LABEL_9;
        }
      }
      v7 = -v5 - (v5 - 1);
LABEL_9:
      if ( !v7 )
        break;
      v2 = *(_DWORD *)(v2 + 8);
      if ( !v2 )
        goto LABEL_11;
    }
    if ( a2 )
      *a2 = 0;
    return (*(int (__fastcall **)(_BYTE *))v2)(v4);
  }
  else
  {
LABEL_11:
    if ( a2 )
      *a2 = 1;
    return 0;
  }
}
