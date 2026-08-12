void __thiscall sub_1022B4F0(_DWORD *this, int ArgList)
{
  _DWORD *v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  int *v10; // eax
  int v11; // ecx
  const char *v12; // eax
  const char **v13; // ecx
  float *v14; // esi
  const char *v15; // eax
  _DWORD *v16; // eax
  int *v17; // edi
  _DWORD *v18; // eax
  double v19; // st7
  int v20; // esi
  int v21; // edi
  const char *v22; // eax
  int v23; // ebx
  int v24; // esi
  int v25; // eax
  int v26; // esi
  char *v27; // [esp+0h] [ebp-24Ch]
  float v28; // [esp+4h] [ebp-248h]
  char Buffer[512]; // [esp+14h] [ebp-238h] BYREF
  _DWORD v30[2]; // [esp+214h] [ebp-38h] BYREF
  int v31[2]; // [esp+21Ch] [ebp-30h] BYREF
  int v32; // [esp+224h] [ebp-28h]
  int v33; // [esp+228h] [ebp-24h]
  int v34; // [esp+22Ch] [ebp-20h]
  int v35; // [esp+230h] [ebp-1Ch] BYREF
  int v36; // [esp+234h] [ebp-18h]
  int v37; // [esp+238h] [ebp-14h]
  int v38; // [esp+23Ch] [ebp-10h]
  int v39; // [esp+240h] [ebp-Ch]
  _DWORD *i; // [esp+244h] [ebp-8h]
  int v41; // [esp+248h] [ebp-4h]
  const char *ArgLista; // [esp+254h] [ebp+8h]

  v2 = this;
  v3 = this[244];
  v4 = 0;
  v41 = (int)v2;
  if ( !v3 )
    return;
  v5 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  i = 0;
  if ( sub_1041CB40(v3) <= 0 )
    goto LABEL_14;
  do
  {
    v6 = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 896))(v2, v4);
    if ( v6 )
    {
      v7 = __RTDynamicCast(
             v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseFlex `RTTI Type Descriptor',
             (int)&CAI_BaseActor `RTTI Type Descriptor',
             0);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 264))(v7) )
        {
          v8 = v5;
          if ( v5 + 1 > v36 )
          {
            sub_102ABFC0(v5 - v36 + 1);
            v5 = v38;
          }
          v9 = v35;
          v38 = ++v5;
          v39 = v35;
          if ( v5 - v8 - 1 > 0 )
          {
            memcpy((void *)(v35 + 4 * v8 + 4), (const void *)(v35 + 4 * v8), 4 * (v5 - v8 - 1));
            v9 = v35;
          }
          v10 = (int *)(v9 + 4 * v8);
          v2 = (_DWORD *)v41;
          if ( v10 )
            *v10 = v7;
        }
      }
    }
    v11 = v2[244];
    i = (_DWORD *)((char *)i + 1);
    v4 = (int)i;
  }
  while ( (int)i < sub_1041CB40(v11) );
  if ( !v5 )
  {
LABEL_14:
    sub_102375F0(&v35);
    return;
  }
  if ( *((_BYTE *)v2 + 884) )
  {
    v12 = (const char *)v2[65];
    v31[0] = 0;
    v31[1] = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    if ( !v12 )
      v12 = String;
    sub_10429A00(Buffer, 0x200u, "scene:%s", (char)v12);
    v41 = 0;
    if ( v5 <= 0 )
      goto LABEL_45;
    v13 = (const char **)(ArgList + 8);
    for ( i = (_DWORD *)(ArgList + 8); ; v13 = (const char **)i )
    {
      v14 = *(float **)(v35 + 4 * v41);
      if ( v13[4] == (const char *)2 )
      {
        v15 = *v13;
        if ( !*v13 )
          v15 = String;
      }
      else
      {
        v15 = sub_1010D460((int)v13);
      }
      v27 = (char *)v15;
      v16 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v14 + 1656))(v14);
      v17 = sub_100AD3C0(v16, (int)v14, v27, Buffer);
      if ( v17 )
      {
        v18 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)v14 + 1656))(v14);
        v19 = sub_100AD780(v18, (char *)v17);
        if ( v19 > 0.0 )
        {
          v28 = v19;
          if ( sub_100ECD20(v14, v28) )
          {
            v30[0] = v17;
            v30[1] = v14;
            sub_10229160(v31, v33, v30);
          }
          else
          {
            sub_10068150(v17);
            sub_10184660((int)v17);
          }
        }
      }
      if ( ++v41 >= v5 )
        break;
    }
    v20 = v33;
    if ( v33 < 1 || (v21 = 0, v41 = RandomInt(0, v33 - 1), v20 <= 0) )
    {
LABEL_45:
      if ( v32 >= 0 && v31[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31[0]);
      goto LABEL_48;
    }
    while ( 1 )
    {
      if ( v21 != v41 )
      {
        v26 = *(_DWORD *)(v31[0] + 8 * v21);
        if ( v26 )
        {
          sub_10068150(*(int **)(v31[0] + 8 * v21));
          sub_10184660(v26);
        }
        goto LABEL_44;
      }
      if ( i[4] == 2 )
      {
        v22 = (const char *)*i;
        if ( !*i )
        {
          ArgLista = String;
          goto LABEL_40;
        }
      }
      else
      {
        v22 = sub_1010D460((int)i);
      }
      ArgLista = v22;
LABEL_40:
      v23 = *(_DWORD *)(v31[0] + 8 * v21);
      v24 = *(_DWORD *)(v31[0] + 8 * v21 + 4);
      v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 1656))(v24);
      if ( sub_100B0150(v25, ArgLista, v23, 0) )
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v24 + 2248))(v24, ArgLista, v23);
LABEL_44:
      if ( ++v21 >= v33 )
        goto LABEL_45;
    }
  }
  RandomInt(0, v5 - 1);
LABEL_48:
  if ( v37 >= 0 )
  {
    if ( v35 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v35);
  }
}
