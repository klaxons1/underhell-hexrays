char __thiscall sub_1042BC60(_DWORD *this, char *a2, int a3, int a4, int a5)
{
  _BYTE *v5; // esi
  char *v6; // eax
  const char *v7; // edi
  char *v8; // eax
  char *v9; // eax
  int *v10; // eax
  int v11; // edx
  int *v12; // eax
  int *v13; // esi
  int v14; // eax
  int v15; // eax
  int *v16; // edi
  int v17; // eax
  int *v18; // ecx
  char *v19; // eax
  int *v20; // edi
  int v21; // eax
  int *v22; // eax
  int i; // esi
  int v24; // edi
  int v25; // eax
  int j; // edi
  int v27; // esi
  int v28; // eax
  int v30[2]; // [esp+Ch] [ebp-38h] BYREF
  int v31; // [esp+14h] [ebp-30h]
  int v32; // [esp+18h] [ebp-2Ch]
  int v33; // [esp+1Ch] [ebp-28h]
  int v34[2]; // [esp+20h] [ebp-24h] BYREF
  int v35; // [esp+28h] [ebp-1Ch]
  int v36; // [esp+2Ch] [ebp-18h]
  int v37; // [esp+30h] [ebp-14h]
  _DWORD *v38; // [esp+34h] [ebp-10h]
  int *v39; // [esp+38h] [ebp-Ch]
  int *v40; // [esp+3Ch] [ebp-8h]
  bool v41; // [esp+41h] [ebp-3h]
  char v42; // [esp+42h] [ebp-2h] BYREF
  char v43; // [esp+43h] [ebp-1h] BYREF

  v5 = this;
  v38 = this;
  v39 = 0;
  v40 = this;
  v30[0] = 0;
  v30[1] = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34[0] = 0;
  v34[1] = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  off_1068E270 = a2;
  dword_1068E278 = 0;
  do
  {
    v41 = 1;
    v6 = sub_1042A090(v5, a3, &v42, &v43);
    v7 = v6;
    if ( *(_BYTE *)(a3 + 20) || !v6 || !*v6 )
      break;
    if ( !_stricmp(v6, "#include") )
    {
      v8 = sub_1042A090(v5, a3, &v42, &v43);
      if ( v8 && *v8 )
        sub_1042BAD0(v5, a2, v8, a4, a5, v30);
      else
        sub_10429FD0((int)dword_1068E170, "#include is NULL ");
    }
    else if ( !_stricmp(v7, "#base") )
    {
      v9 = sub_1042A090(v5, a3, &v42, &v43);
      if ( v9 && *v9 )
        sub_1042BAD0(v5, a2, v9, a4, a5, v34);
      else
        sub_10429FD0((int)dword_1068E170, "#base is NULL ");
    }
    else
    {
      v10 = (int *)KeyValuesSystem();
      v11 = *v10;
      if ( v40 )
      {
        v17 = (*(int (__thiscall **)(int *, const char *, int))(v11 + 12))(v10, v7, 1);
        v18 = v40;
        *v40 = v17;
        v16 = v18;
      }
      else
      {
        v12 = (int *)(*(int (__thiscall **)(int *, int))(v11 + 4))(v10, 32);
        v13 = v12;
        if ( v12 )
        {
          *v12 = -1;
          v12[6] = 0;
          v12[5] = 0;
          v12[7] = 0;
          v12[1] = 0;
          v12[2] = 0;
          v12[3] = 0;
          v12[4] = 0;
          v14 = KeyValuesSystem();
          v15 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v14 + 12))(v14, v7, 1);
          v16 = v13;
          *v13 = v15;
          v40 = v13;
        }
        else
        {
          v40 = 0;
          v16 = 0;
        }
        v5 = v38;
        *((_BYTE *)v16 + 17) = *((_BYTE *)v38 + 17) != 0;
        if ( v39 )
          v39[5] = (int)v16;
      }
      v19 = sub_1042A090(v5, a3, &v42, &v43);
      if ( v43 )
      {
        v41 = _stricmp("[$WIN32]", v19) == 0;
        v19 = sub_1042A090(v5, a3, &v42, &v43);
      }
      if ( v19 && *v19 == 123 && !v42 )
        sub_1042B6F0(v16, (int)a2, a3);
      else
        sub_10429FD0((int)dword_1068E170, "LoadFromBuffer: missing {");
      if ( v41 )
      {
        v39 = v16;
        v40 = 0;
      }
      else
      {
        if ( v39 )
          v39[5] = 0;
        v20 = (int *)v16[6];
        if ( v20 )
        {
          sub_1042B290(v20);
          v21 = KeyValuesSystem();
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v21 + 8))(v21, v20);
        }
        v22 = v40;
        v40[6] = 0;
        *((_BYTE *)v22 + 16) = 0;
      }
    }
  }
  while ( !*(_BYTE *)(a3 + 20) );
  sub_1042B5A0(v5, v30);
  for ( i = v32 - 1; i > 0; --i )
  {
    v24 = *(_DWORD *)(v30[0] + 4 * i);
    if ( v24 )
    {
      sub_1042B290(*(int **)(v30[0] + 4 * i));
      v25 = KeyValuesSystem();
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 8))(v25, v24);
    }
  }
  sub_1042B5F0(v38, v34);
  for ( j = v36 - 1; j >= 0; --j )
  {
    v27 = *(_DWORD *)(v34[0] + 4 * j);
    if ( v27 )
    {
      sub_1042B290(*(int **)(v34[0] + 4 * j));
      v28 = KeyValuesSystem();
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v28 + 8))(v28, v27);
    }
  }
  off_1068E270 = (char *)String;
  dword_1068E278 = 0;
  if ( v35 >= 0 && v34[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v34[0]);
  if ( v31 >= 0 && v30[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30[0]);
  return 1;
}
