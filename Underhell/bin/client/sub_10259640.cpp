int __fastcall sub_10259640(_DWORD *a1)
{
  int v1; // eax
  int v2; // ebp
  int v3; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // edi
  _WORD *v10; // eax
  _DWORD *v12; // [esp+Ch] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-18h] BYREF
  int v14; // [esp+14h] [ebp-14h] BYREF
  int v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  int v18; // [esp+24h] [ebp-4h]

  v1 = a1[76];
  v12 = a1;
  if ( v1 != -1 )
  {
    v2 = a1[77];
    if ( v2 < v1 )
    {
      v1 = a1[77];
      v2 = a1[76];
    }
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v6 = v1;
    if ( v1 <= v2 )
    {
      do
      {
        if ( v6 >= 0 )
        {
          v7 = v12;
          if ( v6 < v12[59] )
          {
            if ( *(_WORD *)(2 * v6 + v12[56]) == 10 )
            {
              v13 = 13;
              sub_10255420(&v14, v5, &v13);
              v5 = v17;
              v7 = v12;
            }
            sub_10255420(&v14, v5, (_WORD *)(2 * v6 + v7[56]));
            v5 = v17;
          }
        }
        ++v6;
      }
      while ( v6 <= v2 );
      v3 = v15;
      v4 = v14;
    }
    v8 = v5;
    if ( v5 + 1 > v3 )
    {
      sub_102532C0(&v14, v5 - v3 + 1);
      v5 = v17;
      v4 = v14;
    }
    v9 = v5 + 1;
    if ( v9 - v8 - 1 > 0 )
      memcpy((void *)(v4 + 2 * v8 + 2), (const void *)(v4 + 2 * v8), 2 * (v9 - v8 - 1));
    v10 = (_WORD *)(v4 + 2 * v8);
    if ( v10 )
      *v10 = 0;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA80 + 32))(dword_1047CA80, v4, v9 - 1);
    if ( v16 >= 0 && v4 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
    a1 = v12;
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 48))(a1, 0);
}
