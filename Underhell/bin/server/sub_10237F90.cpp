void __thiscall sub_10237F90(int this)
{
  const char *v2; // edi
  int v3; // esi
  _DWORD *v4; // ecx
  const char *v5; // eax
  int v6; // esi
  char v7; // cl
  int *v8; // ecx
  int *v9; // ecx
  int i; // edi
  int *v11; // ecx

  v2 = *(const char **)(this + 1060);
  if ( !v2 )
    v2 = String;
  v3 = this + 929;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v4 = *(_DWORD **)(this + 24);
    if ( v4 )
    {
      *v4 |= 0x101u;
      *(_WORD *)(sub_10153460(v4) + 2) = 0;
    }
  }
  v5 = v2;
  v6 = v3 - (_DWORD)v2;
  do
  {
    v7 = *v5;
    v5[v6] = *v5;
    ++v5;
  }
  while ( v7 );
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  nullsub_4();
  if ( *(_BYTE *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 800);
    }
    *(_BYTE *)(this + 800) = 0;
  }
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v9 = *(int **)(this + 24);
    if ( v9 )
      sub_100194B0(v9, 1084);
  }
  *(_BYTE *)(this + 1084) = 0;
  for ( i = 1; i < 16; ++i )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, i + 1084);
    }
    *(_BYTE *)(this + i + 1084) = -1;
  }
  sub_10237910((_DWORD *)this);
  sub_10237770((_DWORD *)this, *(_BYTE *)(this + 800));
  *(_BYTE *)(this + 1124) = 1;
}
