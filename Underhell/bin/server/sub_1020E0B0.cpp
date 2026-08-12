char __cdecl sub_1020E0B0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // esi
  char v10; // bl
  int v11; // eax
  float v13; // [esp+0h] [ebp-28h]
  int v14; // [esp+4h] [ebp-24h]
  int v15; // [esp+14h] [ebp-14h] BYREF
  int v16; // [esp+18h] [ebp-10h]
  int v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]
  int v19; // [esp+24h] [ebp-4h]

  v14 = *(_DWORD *)(a3 + 24);
  v5 = 0;
  v13 = *(float *)(a3 + 20);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  sub_10216470((int)&v15, a1, v13, v14);
  v6 = a5;
  v7 = 0;
  if ( a5 != -1 )
  {
LABEL_13:
    v7 = v6;
    goto LABEL_14;
  }
  if ( !v18 )
  {
    if ( !a4 )
      goto LABEL_17;
    v9 = __RTDynamicCast(
           a4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&IBreakableWithPropData `RTTI Type Descriptor',
           0);
    if ( !v9
      || !*(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v9 + 52))(v9, &a3)
      || !(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 68))(v9) )
    {
      goto LABEL_17;
    }
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 68))(v9);
    goto LABEL_13;
  }
  v8 = 0;
  if ( v18 <= 0 )
    goto LABEL_17;
  do
  {
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, v5 + v15 + 12) > 0 )
      ++v7;
    ++v8;
    v5 += 1068;
  }
  while ( v8 < v18 );
LABEL_14:
  if ( v7 && (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 68))(dword_106B31D0) + v7 + 64 >= 2048 )
  {
    v10 = 0;
    goto LABEL_18;
  }
LABEL_17:
  v10 = 1;
LABEL_18:
  v11 = v15;
  v18 = 0;
  if ( v17 >= 0 )
  {
    if ( v15 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
      v11 = 0;
      v15 = 0;
    }
    v16 = 0;
  }
  v19 = v11;
  if ( v17 >= 0 && v11 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v11);
  return v10;
}
