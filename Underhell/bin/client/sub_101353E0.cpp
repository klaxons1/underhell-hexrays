void __thiscall sub_101353E0(void *this)
{
  int v1; // edi
  int v2; // eax
  _DWORD *v3; // esi
  char *v4; // eax
  char v5; // cl
  int *v6; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int *v12; // eax
  int v13; // ebx
  int v14; // eax
  const char *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  _BYTE v25[256]; // [esp+4h] [ebp-10Ch] BYREF
  _DWORD *v26; // [esp+104h] [ebp-Ch]
  int v27; // [esp+108h] [ebp-8h]
  int v28; // [esp+10Ch] [ebp-4h]

  v1 = (int)this;
  v28 = (int)this;
  nullsub_4();
  if ( dword_104110E8 > 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *(_DWORD **)(dword_104110DC + 4 * v2);
      v26 = v3;
      if ( v3 )
      {
        if ( *((_BYTE *)v3 + 1192) )
          break;
      }
      if ( ++v2 >= dword_104110E8 )
      {
        if ( *(_BYTE *)(v1 + 292) )
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 124))(v1, 0);
          *(_BYTE *)(v1 + 292) = 0;
        }
        return;
      }
    }
    if ( !*(_BYTE *)(v1 + 292) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 124))(v1, 1);
      *(_BYTE *)(v1 + 292) = 1;
    }
    v4 = (char *)v3 + 1193;
    do
    {
      v5 = *v4;
      v4[v25 - ((char *)v3 + 1193)] = *v4;
      ++v4;
    }
    while ( v5 );
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v1 + 256) + 772))(*(_DWORD *)(v1 + 256), v25);
    if ( !*(_DWORD *)(v1 + 272) )
    {
      v27 = 0;
      if ( sub_10068650(v3) > 0 )
      {
        v6 = (int *)(v1 + 260);
        do
        {
          if ( sub_100DDA40(236) )
            v7 = sub_10249210(v1, "SlideshowImage");
          else
            v7 = 0;
          sub_10236050(v7);
          v8 = v6[3];
          v9 = v6[1];
          if ( v8 + 1 > v9 )
            sub_1010AFF0(v6, v8 - v9 + 1);
          ++v6[3];
          v10 = *v6;
          v11 = v6[3] - v8 - 1;
          v6[4] = *v6;
          if ( v11 > 0 )
            memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * v11);
          v12 = (int *)(*v6 + 4 * v8);
          if ( v12 )
            *v12 = v7;
          v13 = v27;
          v14 = sub_10068620(v26, v27);
          if ( v14 > 0 )
          {
            v15 = (const char *)sub_100744B0(v14);
            if ( v15 )
            {
              v16 = sub_102280D0(v15, 47, strlen(v15));
              if ( v16 )
              {
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(4 * v13 + *v6) + 768))(
                  *(_DWORD *)(4 * v13 + *v6),
                  v16 + 1);
                (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * v13 + *v6) + 124))(
                  *(_DWORD *)(4 * v13 + *v6),
                  0);
                sub_102366C0(-3);
                v17 = sub_102374C0(v28);
                sub_10239D70(v17);
                v18 = sub_102374F0(v28);
                sub_10237520(v18);
                v13 = v27;
              }
            }
          }
          v19 = v13 + 1;
          v27 = v19;
          v20 = sub_10068650(v26);
          v1 = v28;
        }
        while ( v19 < v20 );
        v3 = v26;
      }
    }
    v21 = v3[373];
    v22 = *(_DWORD *)(v1 + 280);
    if ( v21 != v22 )
    {
      v23 = *(_DWORD *)(*(_DWORD *)(v1 + 260) + 4 * v22);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 124))(v23, 0);
      v24 = *(_DWORD *)(*(_DWORD *)(v1 + 260) + 4 * v21);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 124))(v24, 1);
      *(_DWORD *)(v1 + 280) = v21;
    }
  }
}
