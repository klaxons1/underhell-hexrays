int __thiscall sub_1039B970(int *this)
{
  int *v2; // esi
  int v3; // eax
  int v4; // edx
  int result; // eax
  _DWORD *i; // ebx
  _DWORD *v7; // ecx
  int v8; // eax
  unsigned __int16 v9; // ax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  unsigned __int16 v13; // ax
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-8h]
  _DWORD *v18; // [esp+14h] [ebp-4h]

  v2 = this + 1;
  sub_10215D00((_WORD *)this + 2);
  if ( v2[2] >= 0 )
  {
    if ( *v2 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v2);
      *v2 = 0;
    }
    v2[1] = 0;
  }
  v3 = *v2;
  *((_WORD *)v2 + 8) = -1;
  *((_WORD *)v2 + 10) = -1;
  v2[6] = v3;
  v4 = *sub_10162BE0(&v16, "env_fire");
  v18 = this + 8;
  this[8] = v4;
  this[9] = *sub_10162BE0(&v16, "combine_mine");
  this[10] = *sub_10162BE0(&v16, "npc_turret_floor");
  this[11] = *sub_10162BE0(&v16, "entityflame");
  result = sub_1012BC10(&dword_1069E3E0, 0);
  for ( i = (_DWORD *)result; result; i = (_DWORD *)result )
  {
    v7 = v18;
    v8 = 0;
    while ( i[23] != *v7 )
    {
      ++v8;
      ++v7;
      if ( v8 >= 4 )
        goto LABEL_15;
    }
    v16 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*i + 8))(i);
    v9 = sub_10147EA0(v2, 0);
    v10 = v9;
    sub_10399E70(v2, v9);
    v11 = *v2;
    v12 = 8 * v10;
    *(_WORD *)(v11 + v12 + 6) = -1;
    v17 = *((unsigned __int16 *)v2 + 7);
    *(_WORD *)(v11 + v12 + 4) = *((_WORD *)v2 + 7);
    v13 = v17;
    *((_WORD *)v2 + 7) = v10;
    if ( v13 == 0xFFFF )
      *((_WORD *)v2 + 6) = v10;
    else
      *(_WORD *)(*v2 + 8 * v13 + 6) = v10;
    v14 = *v2;
    ++*((_WORD *)v2 + 9);
    v15 = (_DWORD *)(v12 + v14);
    if ( v15 )
      *v15 = v16;
LABEL_15:
    result = sub_1012BC10(&dword_1069E3E0, (int)i);
  }
  return result;
}
