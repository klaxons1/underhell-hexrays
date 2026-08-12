int __cdecl sub_10393C60(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // [esp+4h] [ebp-8h] BYREF
  char v6; // [esp+8h] [ebp-4h]

  v2 = sub_100D6340(4664);
  v3 = v2;
  if ( v2 )
  {
    sub_102FA8F0(v2);
    *(_DWORD *)v3 = &CNPC_Mossman::`vftable';
    *(_DWORD *)(v3 + 2104) = &CNPC_Mossman::`vftable';
    *(_DWORD *)(v3 + 3620) = &CNPC_Mossman::`vftable';
    *(_DWORD *)(v3 + 3652) = &CNPC_Mossman::`vftable';
    v5 = 0;
    v6 = 0;
    sub_10057350((float *)(v3 + 4428), (float *)&v5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
