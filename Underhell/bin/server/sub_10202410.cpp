void __thiscall sub_10202410(_DWORD *this)
{
  _DWORD *v1; // esi
  char **v2; // edi
  _DWORD *v3; // ebx
  char *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  const char *v11; // ecx
  const char *v12; // eax
  bool v13; // zf
  int v14; // [esp+Ch] [ebp-10h]
  int v15; // [esp+10h] [ebp-Ch]
  char **v16; // [esp+14h] [ebp-8h]

  v1 = this;
  v2 = (char **)(this + 200);
  v16 = (char **)(this + 200);
  v15 = 16;
  do
  {
    if ( *v2 )
    {
      v3 = 0;
      v14 = v1[219];
      while ( 1 )
      {
        v2 = v16;
        v4 = *v16;
        if ( !*v16 )
          v4 = (char *)String;
        v3 = sub_1012BF20(&dword_1069E3E0, (int)v3, v4, 0, 0, 0, 0);
        if ( !v3 )
          break;
        v5 = v1[219];
        v6 = v1[217];
        if ( v5 + 1 > v6 )
          sub_102ABFC0(v5 - v6 + 1);
        ++v1[219];
        v7 = v1[216];
        v8 = v1[219] - v5 - 1;
        v1[220] = v7;
        if ( v8 > 0 )
          memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
        v9 = v1[216];
        v1 = this;
        v10 = (_DWORD *)(v9 + 4 * v5);
        if ( v10 )
          *v10 = v3;
      }
      if ( v14 == v1[219] )
      {
        v11 = (const char *)v1[65];
        if ( !v11 )
          v11 = String;
        v12 = *v16;
        if ( !*v16 )
          v12 = String;
        Warning("Couldn't find any entities named %s, which point_template %s is specifying.\n", v12, v11);
      }
    }
    ++v2;
    v13 = v15-- == 1;
    v16 = v2;
  }
  while ( !v13 );
}
