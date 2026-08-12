void __cdecl sub_101DAB60(int a1, int a2)
{
  if ( a1 && a2 )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_106BAFFC + 4))(dword_106BAFFC, a1, a2);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1) )
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 104))(a1);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2) )
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 104))(a2);
  }
}
