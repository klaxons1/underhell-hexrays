char __thiscall sub_100C3F80(_DWORD *this, _DWORD *a2, char *Source)
{
  unsigned int v3; // edi
  void *v4; // esp
  int v5; // esi
  signed int v6; // ebx
  int i; // edi
  char **v9; // eax
  char **v10; // ebx
  char *v11; // eax
  unsigned int v12; // edx
  _DWORD *v13; // esi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  char ***v18; // edi
  char v19[12]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v20[3]; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v21; // [esp+18h] [ebp-Ch]
  int v22; // [esp+1Ch] [ebp-8h]
  unsigned int v23; // [esp+20h] [ebp-4h] BYREF

  v21 = this;
  v3 = strlen(Source);
  v4 = alloca(v3 + 1);
  sub_102282F0(v19, Source, v3 + 1);
  _strlwr(v19);
  sub_1022FAE0(&v23);
  sub_1022FB00(&v23, v19, v3);
  sub_1022FAF0(&v23);
  v5 = a2[3];
  v6 = 0;
  v20[0] = v23;
  if ( v5 <= 0 )
    return 0;
  for ( i = 0; ; i += 84 )
  {
    v22 = sub_100C0AE0((_BYTE *)(*a2 + i + 28), v20);
    if ( v22 != -1 )
      break;
    if ( ++v6 >= v5 )
      return 0;
  }
  v23 = v6;
  if ( v6 >= v5 )
    return 0;
  v9 = (char **)sub_100DDA40(16);
  v10 = 0;
  if ( v9 )
  {
    *v9 = 0;
    v9[3] = 0;
    v9[1] = (char *)-1;
    v9[2] = (char *)-1;
    v10 = v9;
  }
  if ( Source
    && (v11 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(Source) + 1)) != 0 )
  {
    strcpy(v11, Source);
  }
  else
  {
    v11 = 0;
  }
  v12 = v23;
  v13 = v21;
  v10[1] = (char *)v22;
  *v10 = v11;
  v10[3] = 0;
  v10[2] = (char *)v12;
  v14 = v13[5];
  v15 = v13[3];
  if ( v14 + 1 > v15 )
    sub_1010AFF0(v14 - v15 + 1);
  ++v13[5];
  v16 = v13[2];
  v17 = v13[5] - v14 - 1;
  v13[6] = v16;
  if ( v17 > 0 )
    memcpy((void *)(v16 + 4 * v14 + 4), (const void *)(v16 + 4 * v14), 4 * v17);
  v18 = (char ***)(v13[2] + 4 * v14);
  if ( v18 )
    *v18 = v10;
  return 1;
}
