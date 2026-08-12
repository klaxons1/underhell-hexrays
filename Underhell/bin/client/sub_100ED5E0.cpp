void __userpurge sub_100ED5E0(int a1@<ecx>, int a2@<esi>, int a3, int a4)
{
  int v4; // eax
  int v5; // esi

  if ( *(char *)(a1 + 148) < 0 )
  {
    v4 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 144) + 92) + 380))(
           *(_DWORD *)(*(_DWORD *)(a1 + 144) + 92),
           a2);
    v5 = v4;
    if ( v4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 348))(v5, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, 10);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 96))(v5, a3);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 80))(v5, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 96))(v5, a4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
}
