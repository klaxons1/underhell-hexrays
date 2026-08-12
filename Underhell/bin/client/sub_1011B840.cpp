void *__thiscall sub_1011B840(void **this, int a2)
{
  void (__thiscall *v4)(int *, void ***, int); // eax
  char *v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  void (__thiscall *v10)(int *, void ***, int); // eax
  void *result; // eax
  int v12; // [esp-8h] [ebp-40h]
  void *v13; // [esp+Ch] [ebp-2Ch] BYREF
  int v14; // [esp+10h] [ebp-28h]
  int v15; // [esp+14h] [ebp-24h]
  int v16; // [esp+18h] [ebp-20h]
  void *v17; // [esp+1Ch] [ebp-1Ch]
  void **v18; // [esp+20h] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-14h]
  int v20; // [esp+28h] [ebp-10h]
  int v21; // [esp+2Ch] [ebp-Ch]
  int v22; // [esp+30h] [ebp-8h] BYREF
  int v23; // [esp+34h] [ebp-4h]
  int v24; // [esp+40h] [ebp+8h]
  int v25; // [esp+40h] [ebp+8h]

  v23 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  v12 = (int)this[19];
  v22 = -1;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  v16 = 0;
  sub_1011B380((int *)&v13, 0, v12, 0);
  memset(v13, 255, 40 * v16);
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52))(a2, &v22, 1);
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52))(a2, &v22, 1);
  if ( (dword_10437588 & 1) == 0 )
  {
    dword_10437588 |= 1u;
    dword_10437584 = (int)&CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>,10>::`vftable';
  }
  v18 = &v13;
  v4 = *(void (__thiscall **)(int *, void ***, int))dword_10437584;
  v19 = 0;
  v20 = 0;
  v4(&dword_10437584, &v18, a2);
  v21 = 0;
  if ( (int)this[12] > 0 )
  {
    v24 = 0;
    do
    {
      v5 = (char *)this[16] + v24;
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
      *((_DWORD *)v5 + 8) = v6 - v23;
      v7 = v21;
      v8 = *((_DWORD *)this[9] + v21);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 12))(v8, a2);
      v24 += 40;
      v21 = v7 + 1;
    }
    while ( v7 + 1 < (int)this[12] );
  }
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  this[14] = (void *)(v9 - v23);
  v25 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 16))(a2, v23);
  (*(void (__thiscall **)(int, void **, int))(*(_DWORD *)a2 + 52))(a2, this + 14, 1);
  (*(void (__thiscall **)(int, void **, int))(*(_DWORD *)a2 + 52))(a2, this + 15, 1);
  if ( (dword_10437588 & 1) == 0 )
  {
    dword_10437588 |= 1u;
    dword_10437584 = (int)&CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>,10>::`vftable';
  }
  v10 = *(void (__thiscall **)(int *, void ***, int))dword_10437584;
  v18 = this + 16;
  v19 = 0;
  v20 = 0;
  v10(&dword_10437584, &v18, a2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 16))(a2, v25);
  result = v13;
  v16 = 0;
  if ( v15 >= 0 )
  {
    if ( v13 )
    {
      (*(void (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, v13);
      result = 0;
      v13 = 0;
    }
    v14 = 0;
  }
  v17 = result;
  if ( v15 >= 0 )
  {
    if ( result )
      return (void *)(*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
