char __thiscall sub_1021BC90(int this)
{
  unsigned int *v1; // edi
  unsigned int v2; // esi
  int *v3; // ecx
  int v4; // ebx
  const char *v5; // ecx
  const char *v6; // eax
  unsigned int v7; // esi
  int *v8; // ecx
  int v9; // esi
  int v10; // eax

  v1 = (unsigned int *)(this + 848);
  v2 = *(_DWORD *)(this + 848) & 0xFFFFFFFE;
  if ( *(_DWORD *)(this + 848) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 848);
    }
    *v1 = v2;
  }
  v4 = sub_1021A870(&dword_1069E3E0, 0);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(const char **)(this + 260);
      if ( !v5 )
        v5 = String;
      v6 = *(const char **)(v4 + 808);
      if ( !v6 )
        v6 = String;
      if ( !_stricmp(v6, v5) )
      {
        v7 = *(_DWORD *)(v4 + 848) & 0xFFFFFFFD;
        if ( *(_DWORD *)(v4 + 848) != v7 )
        {
          if ( *(_BYTE *)(v4 + 84) )
          {
            *(_BYTE *)(v4 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v4 + 24);
            if ( v8 )
              sub_100194B0(v8, 848);
          }
          *(_DWORD *)(v4 + 848) = v7;
        }
      }
      v9 = sub_1012BC10(&dword_1069E3E0, v4);
      if ( !v9 )
        break;
      while ( 1 )
      {
        v10 = __RTDynamicCast(
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CRopeKeyframe `RTTI Type Descriptor',
                0);
        if ( v10 )
          break;
        v9 = sub_1012BC10(&dword_1069E3E0, v9);
        if ( !v9 )
          return 1;
      }
      v4 = v10;
    }
  }
  return 1;
}
