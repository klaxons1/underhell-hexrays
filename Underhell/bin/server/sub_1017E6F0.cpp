char *__thiscall sub_1017E6F0(char *this)
{
  float *v1; // esi
  _DWORD *v2; // ebx
  char *v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // edi
  const char *v12; // eax
  const char *v14; // [esp-4h] [ebp-20h]
  int v15; // [esp+Ch] [ebp-10h]
  int v16; // [esp+10h] [ebp-Ch]
  char **v18; // [esp+18h] [ebp-4h]

  v1 = (float *)this;
  v18 = (char **)(this + 800);
  v16 = 16;
  do
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *v18;
      if ( !*v18 )
        v3 = (char *)String;
      v4 = sub_1012C5B0((int)v2, v3, (int)v1, 0, 0);
      v2 = v4;
      if ( !v4 )
        break;
      if ( (char *)v4[23] == "logic_branch" || sub_100D6240(v4, "logic_branch") )
      {
        sub_1017E630(v2, (int)v1);
        v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v2 + 8))(v2);
        v6 = *((_DWORD *)v1 + 219);
        v7 = *((_DWORD *)v1 + 217);
        v15 = v5;
        if ( v6 + 1 > v7 )
          sub_102ABFC0(v6 - v7 + 1);
        ++*((_DWORD *)v1 + 219);
        v8 = *((_DWORD *)v1 + 216);
        v9 = *((_DWORD *)v1 + 219) - v6 - 1;
        *((_DWORD *)v1 + 220) = v8;
        if ( v9 > 0 )
          memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
        v10 = *((_DWORD *)v1 + 216);
        v1 = (float *)this;
        v11 = (_DWORD *)(v10 + 4 * v6);
        if ( v11 )
          *v11 = v15;
      }
      else
      {
        v14 = sub_100D6390(v2);
        v12 = sub_100D6390(v1);
        DevWarning("logic_branchlist %s refers to entity %s, which is not a logic_branch\n", v12, v14);
      }
    }
    ++v18;
    --v16;
  }
  while ( v16 );
  return sub_100E38F0(v1);
}
