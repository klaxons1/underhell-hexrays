void __thiscall sub_10080AC0(int (__cdecl **this)(_DWORD), int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  int i; // eax
  __int16 v8; // bx
  unsigned int v9; // ebx
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  int *v13; // eax
  unsigned __int16 v14; // cx
  int v15; // ebx
  _DWORD *v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // esi
  int v23; // edx
  _DWORD *v24; // ecx
  int v25; // eax
  __int32 v26; // ecx
  int v27; // edx
  unsigned int v28; // ecx
  _DWORD v29[3]; // [esp+Ch] [ebp-28h] BYREF
  __int32 v30[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v31; // [esp+20h] [ebp-14h]
  unsigned int v32; // [esp+24h] [ebp-10h]
  int v33; // [esp+28h] [ebp-Ch]
  int (__cdecl **v34)(_DWORD); // [esp+2Ch] [ebp-8h]
  char v35; // [esp+33h] [ebp-1h]

  v34 = this;
  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CClientLeafSystem::ComputeTranslucentRenderLeaf",
    0,
    "ComputeTranslucentRenderLeaf",
    0,
    4);
  if ( !*(_DWORD *)(dword_1042BAB4 + 48)
    || (v6 = (*(int (__thiscall **)(_DWORD))(*g_pThreadPool + 28))(g_pThreadPool), v35 = 1, !v6) )
  {
    v35 = 0;
  }
  v31 = *((_DWORD *)off_103DC81C + 1);
  if ( (dword_1042B9BC & 1) == 0 )
  {
    dword_1042B9BC |= 1u;
    dword_1042B9A8 = 0;
    dword_1042B9AC = 0;
    dword_1042B9B0 = 0;
    dword_1042B9B4 = 0;
    dword_1042B9B8 = 0;
    atexit(sub_102C9310);
  }
  if ( (dword_1042B9BC & 2) == 0 )
  {
    dword_1042B9BC |= 2u;
    dword_1042B994 = 0;
    dword_1042B998 = 0;
    dword_1042B99C = 0;
    dword_1042B9A0 = 0;
    dword_1042B9A4 = 0;
    atexit(sub_102C9300);
  }
  i = dword_1042B9B4;
  v8 = 0;
  v33 = 0;
  if ( a2 > 0 )
  {
    do
    {
      v9 = *(unsigned __int16 *)(a3 + 2 * v33);
      v32 = v9;
      v10 = i;
      if ( i + 1 > dword_1042B9AC )
      {
        sub_1010AFF0(i - dword_1042B9AC + 1);
        i = dword_1042B9B4;
      }
      v11 = dword_1042B9A8;
      dword_1042B9B4 = i + 1;
      v12 = i - v10;
      dword_1042B9B8 = dword_1042B9A8;
      if ( v12 > 0 )
      {
        memcpy((void *)(dword_1042B9A8 + 4 * v10 + 4), (const void *)(dword_1042B9A8 + 4 * v10), 4 * v12);
        v11 = dword_1042B9A8;
      }
      v13 = (int *)(v11 + 4 * v10);
      if ( v13 )
        *v13 = (2 * v9) | 1;
      v14 = *(_WORD *)v34[45](v9);
      for ( i = dword_1042B9B4; v14 != 0xFFFF; v14 = *(_WORD *)((char *)v34[26] + v15 + 6) )
      {
        v15 = 8 * v14;
        v16 = (_DWORD *)((char *)v34[8] + 36 * *(unsigned __int16 *)((char *)v34[26] + v15));
        if ( v16[4] != v31 || *((char *)v16 + 30) != a6 )
        {
          if ( v35 )
          {
            v17 = dword_1042B9A0;
            v18 = dword_1042B9A0;
            if ( dword_1042B9A0 + 1 > dword_1042B998 )
            {
              sub_1010AFF0(dword_1042B9A0 - dword_1042B998 + 1);
              v17 = dword_1042B9A0;
            }
            v19 = dword_1042B994;
            dword_1042B9A0 = v17 + 1;
            v20 = v17 - v18;
            dword_1042B9A4 = dword_1042B994;
            if ( v20 > 0 )
            {
              memcpy((void *)(dword_1042B994 + 4 * v18 + 4), (const void *)(dword_1042B994 + 4 * v18), 4 * v20);
              v19 = dword_1042B994;
            }
            v21 = (_DWORD *)(v19 + 4 * v18);
            if ( v21 )
              *v21 = *v16;
          }
          else
          {
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v16 + 48))(*v16);
          }
          v16[4] = v31;
          *((_BYTE *)v16 + 30) = a6;
          i = dword_1042B9B4;
        }
        v22 = i;
        if ( i + 1 > dword_1042B9AC )
        {
          sub_1010AFF0(i - dword_1042B9AC + 1);
          i = dword_1042B9B4;
        }
        v23 = dword_1042B9A8;
        dword_1042B9B4 = ++i;
        dword_1042B9B8 = dword_1042B9A8;
        if ( i - v22 - 1 > 0 )
        {
          memcpy((void *)(dword_1042B9A8 + 4 * v22 + 4), (const void *)(dword_1042B9A8 + 4 * v22), 4 * (i - v22 - 1));
          i = dword_1042B9B4;
          v23 = dword_1042B9A8;
        }
        v24 = (_DWORD *)(v23 + 4 * v22);
        if ( v24 )
        {
          *v24 = v16;
          i = dword_1042B9B4;
        }
      }
      ++v33;
    }
    while ( v33 < a2 );
    v8 = v32;
  }
  if ( v35 )
  {
    v25 = dword_1042B9A0;
    v26 = dword_1042B994;
    v30[0] = 0;
    v30[1] = 0;
    _InterlockedExchange(v30, 0);
    v29[0] = sub_1007CE30;
    v29[1] = sub_1007CE40;
    v29[2] = sub_1007CE20;
    sub_1007FA10((int)v29, v26, v25, 0x7FFFFFFF, 0);
    i = dword_1042B9B4;
    dword_1042B9A0 = 0;
  }
  v27 = 0;
  if ( i )
  {
    do
    {
      v28 = *(_DWORD *)(dword_1042B9A8 + 4 * v27);
      if ( (v28 & 1) != 0 )
      {
        v32 = v28 >> 1;
        v8 = v28 >> 1;
      }
      else if ( *(_DWORD *)(v28 + 4) == a5 )
      {
        if ( (*(_BYTE *)(v28 + 24) & 0x20) != 0 && *(_BYTE *)(v28 + 25) == 8 )
        {
          *(_WORD *)(v28 + 22) = v8;
          i = dword_1042B9B4;
        }
      }
      else
      {
        if ( *(_BYTE *)(v28 + 25) == 8 )
          *(_WORD *)(v28 + 22) = v8;
        *(_DWORD *)(v28 + 4) = a5;
        i = dword_1042B9B4;
      }
      ++v27;
    }
    while ( v27 != i );
  }
  dword_1042B9B4 = 0;
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
