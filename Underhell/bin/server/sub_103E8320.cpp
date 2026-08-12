int __usercall sub_103E8320@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  void (__thiscall *v3)(int); // eax
  unsigned int v4; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  float v9; // [esp+0h] [ebp-Ch]

  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v9, 0);
  if ( !(**(int (__thiscall ***)(int))(a1 + 1120))(a1 + 1120) )
  {
    sub_103E7AF0(a1, 0.1);
    return sub_101BD0E0((int *)(a1 + 1540), a2, *(float *)&a1, a1);
  }
  v3 = *(void (__thiscall **)(int))(a1 + 8);
  if ( v3 )
    v3(a1);
  v4 = *(_DWORD *)(a1 + 1572);
  if ( v4 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 1572) & 0xFFF) + 2] == v4 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 1572) & 0xFFF) + 1] )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 340))(a1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 156))(v5);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( !*(_BYTE *)(a1 + 896) || !*(_BYTE *)(a1 + 1582) && !*(_BYTE *)(a1 + 1581) )
    return sub_101BD0E0((int *)(a1 + 1540), a2, *(float *)&a1, a1);
  if ( *(_BYTE *)(a1 + 1581) )
  {
    v6 = (int *)sub_1026A890((unsigned int *)(a1 + 1564));
    sub_102600F0(v6, (int)"#Valve_Hint_CraneKeys");
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 340))(a1);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 88))(v7, *(unsigned __int8 *)(a1 + 1582), 1);
  return sub_101BD0E0((int *)(a1 + 1540), a2, *(float *)&a1, a1);
}
