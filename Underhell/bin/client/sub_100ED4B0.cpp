int __userpurge sub_100ED4B0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4, int a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  _BYTE v11[64]; // [esp+4h] [ebp-40h] BYREF

  v6 = *(_DWORD *)(a1 + 144);
  if ( *(char *)(a1 + 148) >= 0 )
  {
    sub_101F1ED0(v6 + 96);
  }
  else
  {
    v7 = (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v6 + 92) + 380))(*(_DWORD *)(v6 + 92), a3, a2);
    v8 = v7;
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 120))(v8, 0, a5);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 120))(v8, 10, a4);
    sub_101F17F0(a5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 348))(v8, 1);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 352))(v8, a5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 80))(v8, 10);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 80))(v8, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
  }
  if ( (*(_DWORD *)(a1 + 148) & 0x400) != 0 && !*(_BYTE *)(a1 + 76) )
  {
    v9 = sub_101F1AD0(v11, a1 + 12);
    sub_101F17F0(v9);
  }
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 140) + 8))(
           *(_DWORD *)(a1 + 140),
           *(_DWORD *)(a1 + 144) + 96);
}
