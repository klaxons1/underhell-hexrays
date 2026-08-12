void __cdecl sub_101BC700(int a1)
{
  int v1; // ebx
  int i; // esi
  int v3; // esi
  const char *v4; // esi
  const char *v5; // edi
  const char *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // [esp+8h] [ebp-68h] BYREF
  int v11; // [esp+Ch] [ebp-64h]
  int v12; // [esp+10h] [ebp-60h]
  int v13; // [esp+14h] [ebp-5Ch]
  __int16 v14; // [esp+1Ch] [ebp-54h]
  __int16 v15; // [esp+1Eh] [ebp-52h]
  int v16; // [esp+24h] [ebp-4Ch] BYREF
  int v17; // [esp+28h] [ebp-48h]
  int v18; // [esp+2Ch] [ebp-44h]
  int v19; // [esp+34h] [ebp-3Ch]
  int v20; // [esp+38h] [ebp-38h] BYREF
  int v21; // [esp+3Ch] [ebp-34h]
  int v22; // [esp+40h] [ebp-30h]
  int v23; // [esp+44h] [ebp-2Ch]
  int v24; // [esp+48h] [ebp-28h]
  int v25; // [esp+4Ch] [ebp-24h] BYREF
  int v26; // [esp+50h] [ebp-20h]
  _DWORD *v27; // [esp+54h] [ebp-1Ch] BYREF
  _DWORD *v28; // [esp+58h] [ebp-18h]
  _BYTE v29[4]; // [esp+5Ch] [ebp-14h] BYREF
  _BYTE v30[4]; // [esp+60h] [ebp-10h] BYREF
  int v31; // [esp+64h] [ebp-Ch]
  const char *v32; // [esp+68h] [ebp-8h]
  const char *v33; // [esp+6Ch] [ebp-4h]
  int v34; // [esp+78h] [ebp+8h]

  v1 = 0;
  if ( a1 )
  {
    sub_101BC570(&v10);
    for ( i = sub_1012BC10(&dword_1069E3E0, 0); i; i = sub_1012BC10(&dword_1069E3E0, i) )
    {
      if ( sub_101B00D0(i, (int *)&v27, &v25) || (unsigned __int8)sub_101DC400(i, &v27, &v25) )
      {
        sub_101BC050((int)&v10, i, (int)v27, 1);
        sub_101BC050((int)&v10, i, (int)v28, 1);
        sub_101BC050((int)&v10, (int)v27, i, 0);
        sub_101BC050((int)&v10, (int)v28, i, 0);
      }
    }
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    sub_101B9E20((int)&v10, a1, &v20);
    v3 = 0;
    v34 = 0;
    if ( v23 > 0 )
    {
      while ( 1 )
      {
        if ( !sub_101B00D0(*(_DWORD *)(v20 + 4 * v3), (int *)&v27, &v25) )
          sub_101DC400(*(_DWORD *)(v20 + 4 * v3), &v27, &v25);
        v4 = String;
        v32 = "world";
        v33 = "world";
        v5 = String;
        v31 = 0;
        if ( v27 )
        {
          v32 = (const char *)v27[23];
          if ( !v32 )
            v32 = String;
          v5 = *(const char **)(*(int (__stdcall **)(_BYTE *))(*v27 + 28))(v30);
          if ( !v5 )
            v5 = String;
          v31 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v25 + 84))(v25);
        }
        if ( v28 )
        {
          v33 = (const char *)v28[23];
          if ( !v33 )
            v33 = String;
          v4 = *(const char **)(*(int (__stdcall **)(_BYTE *))(*v28 + 28))(v29);
          if ( !v4 )
            v4 = String;
          v1 = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v26 + 84))(v26);
        }
        v6 = *(const char **)(*(_DWORD *)(v20 + 4 * v34) + 92);
        if ( !v6 )
          v6 = String;
        Msg("**********************\n%s connects %s(%s:%d) to %s(%s:%d)\n", v6, v32, v5, v31, v33, v4, v1);
        sub_101B0160(*(_DWORD *)(v20 + 4 * v34));
        *(_DWORD *)(*(_DWORD *)(v20 + 4 * v34) + 236) |= 5u;
        v1 = 0;
        if ( ++v34 >= v23 )
          break;
        v3 = v34;
      }
    }
    v7 = v20;
    v23 = 0;
    if ( v22 >= 0 )
    {
      if ( v20 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v20);
        v7 = 0;
        v20 = 0;
      }
      v21 = 0;
    }
    v24 = v7;
    if ( v22 >= 0 )
    {
      if ( v7 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
        v20 = 0;
      }
      v21 = 0;
    }
    sub_101BB6A0(&v16);
    v8 = v16;
    if ( v18 >= 0 )
    {
      if ( v16 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
        v8 = 0;
        v16 = 0;
      }
      v17 = 0;
    }
    v19 = v8;
    if ( v18 >= 0 )
    {
      if ( v8 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
        v16 = 0;
      }
      v17 = 0;
    }
    sub_101B84F0((int)&v10);
    v9 = v11;
    v14 = -1;
    if ( v13 >= 0 )
    {
      if ( v11 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v11);
        v9 = 0;
        v11 = 0;
      }
      v12 = 0;
    }
    v15 = -1;
    if ( v13 >= 0 )
    {
      if ( v9 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v9);
    }
  }
}
