int __thiscall sub_1011D310(_DWORD *this, int *a2)
{
  int v4; // edi
  void (__thiscall *v5)(int); // edx
  int v6; // esi
  _DWORD *v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int *v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  const char **v20; // esi
  int v21; // ecx
  int i; // esi
  unsigned int v23; // kr00_4
  int v24; // ecx
  unsigned int v25; // kr04_4
  char *v26; // eax
  _BYTE *v27; // esi
  char v28; // dl
  int v29; // edi
  int v30; // esi
  int v31; // [esp+4h] [ebp-34h] BYREF
  int v32; // [esp+8h] [ebp-30h]
  int v33; // [esp+Ch] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-28h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+18h] [ebp-20h] BYREF
  int v37; // [esp+1Ch] [ebp-1Ch]
  int v38; // [esp+20h] [ebp-18h]
  int v39; // [esp+24h] [ebp-14h]
  int v40; // [esp+28h] [ebp-10h]
  int v41; // [esp+2Ch] [ebp-Ch]
  int v42; // [esp+30h] [ebp-8h]
  const char *j; // [esp+34h] [ebp-4h]

  if ( !sub_1011CD30(this) )
    return 0;
  v4 = dword_1047CA8C;
  v5 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
  v42 = dword_1047CA8C;
  v5(dword_1047CA8C);
  v6 = this[4];
  if ( !*(_DWORD *)(v6 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(v6 + 4) + 36))(v6 + 4) )
    sub_10026520(v6);
  v7 = *(_DWORD **)(v6 + 1940);
  v8 = 0;
  if ( v7 && *v7 )
  {
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    j = 0;
    if ( sub_10126D70(v7) > 0 )
    {
      do
      {
        if ( (*(_DWORD *)(sub_10127960(v8) + 12) & 0x400) == 0 )
        {
          v9 = sub_10127960(v8);
          v10 = v39;
          v41 = v9;
          v11 = v39;
          if ( v39 + 1 > v37 )
          {
            sub_1010AFF0(&v36, v39 - v37 + 1);
            v11 = v39;
          }
          v12 = v36;
          v39 = v11 + 1;
          v13 = v11 - v10;
          v40 = v36;
          if ( v13 > 0 )
            memcpy((void *)(v36 + 4 * v10 + 4), (const void *)(v36 + 4 * v10), 4 * v13);
          v14 = (int *)(v12 + 4 * v10);
          v4 = v42;
          if ( v14 )
            *v14 = v41;
          v8 = (int)j;
        }
        j = (const char *)++v8;
      }
      while ( v8 < sub_10126D70(v7) );
    }
    v15 = 0;
    if ( v39 )
    {
      sub_1011D200((int)&v36, sub_1011D070);
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v41 = 0;
      if ( v39 > 0 )
      {
        while ( 1 )
        {
          j = (const char *)(*(_DWORD *)(*(_DWORD *)(v36 + 4 * v16) + 4) + *(_DWORD *)(v36 + 4 * v16));
          if ( !j )
            j = "Unknown Sequence";
          v19 = v18;
          if ( v18 + 1 > v17 )
          {
            sub_1010AFF0(&v31, v18 - v17 + 1);
            v18 = v34;
            v15 = v31;
          }
          v34 = ++v18;
          v35 = v15;
          if ( v18 - v19 - 1 > 0 )
            memcpy((void *)(v15 + 4 * v19 + 4), (const void *)(v15 + 4 * v19), 4 * (v18 - v19 - 1));
          v20 = (const char **)(v15 + 4 * v19);
          if ( v20 )
            *v20 = j;
          v16 = v41 + 1;
          v41 = v16;
          if ( v16 >= v39 )
            break;
          v17 = v32;
        }
      }
      *a2 = sub_100DDA40((unsigned __int64)(unsigned int)v39 >> 30 != 0 ? -1 : 4 * v39);
      v21 = 0;
      for ( i = 0; v21 < v39; i += v23 + 1 )
        v23 = strlen(*(const char **)(v15 + 4 * v21++));
      *(_DWORD *)*a2 = sub_100DDA40(i);
      v24 = 0;
      for ( j = 0; v24 < v39; ++v24 )
      {
        v25 = strlen(*(const char **)(v15 + 4 * v24));
        *(_DWORD *)(*a2 + 4 * v24) = &j[*(_DWORD *)*a2];
        v26 = *(char **)(v15 + 4 * v24);
        v27 = *(_BYTE **)(*a2 + 4 * v24);
        do
        {
          v28 = *v26;
          *v27++ = *v26++;
        }
        while ( v28 );
        j += v25 + 1;
      }
      if ( v33 >= 0 && v15 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
        v15 = 0;
      }
      v29 = v38;
      v30 = v36;
      if ( v38 >= 0 && v36 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36);
        v36 = 0;
        v30 = 0;
      }
      if ( v33 >= 0 && v15 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
      if ( v29 >= 0 )
      {
        if ( v30 )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 104))(v42);
      return v39;
    }
    else
    {
      sub_1011A810(&v36);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
      return 0;
    }
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
    return 0;
  }
}
