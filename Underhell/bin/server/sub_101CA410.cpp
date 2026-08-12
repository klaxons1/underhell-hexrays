char __usercall sub_101CA410@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v3; // edx
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // ebx
  int v8; // edi
  int v9; // esi
  int v12; // [esp+4h] [ebp-10h]
  int v13; // [esp+8h] [ebp-Ch]
  char v15; // [esp+12h] [ebp-2h]
  char v16; // [esp+13h] [ebp-1h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  if ( *(_DWORD *)(a1 + 808) == -1 )
    return 0;
  if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 2] != *(_DWORD *)(a1 + 808) >> 12 )
    return 0;
  v3 = off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 1];
  v13 = v3;
  if ( !v3 )
    return 0;
  v5 = *(_DWORD *)(a1 + 812);
  if ( v5 == -1 )
    return 0;
  v6 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 812) & 0xFFF) + 1];
  if ( v6[1] != v5 >> 12 )
    return 0;
  v12 = *v6;
  if ( !*v6 )
    return 0;
  v7 = *(_DWORD *)(v3 + 424);
  v8 = *(_DWORD *)(*v6 + 424);
  if ( !v7 || !v8 )
    return 0;
  v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 316))(v8, a3, a2);
  v15 = 0;
  v16 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9) )
  {
    while ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 8))(v9, 1) != v7 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 48))(v9);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9) )
        goto LABEL_16;
    }
    v15 = 1;
    if ( sub_101C9DB0(v9, v8, v13) )
    {
      v16 = 1;
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9);
    }
  }
LABEL_16:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 44))(v9, 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 320))(v8, v9);
  if ( v16
    || ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 76))(v8) & 0x40) != 0 && sub_101CA2A0(a1, (int)&savedregs, v8, v9) )
  {
    *(float *)(v12 + 448) = 0.0;
    sub_101CA000(a1, v7, v9);
  }
  return v15;
}
