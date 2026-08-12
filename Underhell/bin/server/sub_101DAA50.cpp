void __cdecl sub_101DAA50(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax

  if ( a1 && a2 )
  {
    v2 = *(_DWORD *)dword_106BAFFC;
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 68))(a1, v3);
    (*(void (__thiscall **)(int, int))(v2 + 4))(dword_106BAFFC, v4);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1) )
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 104))(a1);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2) )
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 104))(a2);
  }
}
