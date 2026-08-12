int __thiscall sub_1008BDA0(int this)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int16 v7; // ax
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int i; // esi
  int result; // eax
  unsigned __int16 v14; // [esp+8h] [ebp-Ch]
  int v15; // [esp+Ch] [ebp-8h]
  _WORD *v16; // [esp+10h] [ebp-4h]

  sub_10089D70(this);
  if ( *(int *)(this + 8) < 256 && *(int *)(this + 12) >= 0 )
  {
    v2 = *(_DWORD *)(this + 4);
    *(_DWORD *)(this + 8) = 256;
    v3 = *g_pMemAlloc;
    if ( v2 )
      v4 = (*(int (__stdcall **)(int, int))(v3 + 12))(v2, 2560);
    else
      v4 = (*(int (__stdcall **)(int))(v3 + 4))(2560);
    *(_DWORD *)(this + 4) = v4;
  }
  *(_DWORD *)(this + 28) = *(_DWORD *)(this + 4);
  if ( *(int *)(this + 36) < 256 && *(int *)(this + 40) >= 0 )
  {
    v5 = *(_DWORD *)(this + 32);
    *(_DWORD *)(this + 36) = 256;
    if ( v5 )
      v6 = (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v5, 4096);
    else
      v6 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 4096);
    *(_DWORD *)(this + 32) = v6;
  }
  *(_DWORD *)(this + 84) = *(_DWORD *)(this + 32);
  *(_DWORD *)(this + 106) = 327684;
  *(_DWORD *)(this + 110) = 393222;
  *(_DWORD *)(this + 114) = 458759;
  *(_DWORD *)(this + 118) = 458759;
  *(_DWORD *)(this + 122) = 458759;
  *(_DWORD *)(this + 126) = 524296;
  *(_DWORD *)(this + 130) = 524296;
  *(_DWORD *)(this + 134) = 524296;
  v16 = (_WORD *)(this + 88);
  v15 = 9;
  do
  {
    v7 = sub_100849E0((int *)(this + 44), 0);
    v8 = v7;
    sub_1005A8B0((int *)(this + 44), v7);
    v9 = *(_DWORD *)(this + 44);
    v10 = 10 * v8;
    *(_WORD *)(v9 + v10 + 8) = -1;
    v14 = *(_WORD *)(this + 58);
    *(_WORD *)(v9 + v10 + 6) = v14;
    *(_WORD *)(this + 58) = v8;
    if ( v14 == 0xFFFF )
      *(_WORD *)(this + 56) = v8;
    else
      *(_WORD *)(*(_DWORD *)(this + 44) + 10 * v14 + 8) = v8;
    ++*(_WORD *)(this + 62);
    *(_WORD *)(*(_DWORD *)(this + 44) + v10 + 2) = -1;
    *(_WORD *)(v10 + *(_DWORD *)(this + 44)) = -1;
    *(_WORD *)(*(_DWORD *)(this + 44) + v10 + 4) = 0;
    *v16 = v8;
    v11 = v15-- == 1;
    ++v16;
  }
  while ( !v11 );
  for ( i = 0; i < 16; ++i )
    result = sub_10089DF0(this, i);
  *(_DWORD *)(this + 140) = 0;
  return result;
}
