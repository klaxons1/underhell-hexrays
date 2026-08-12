bool __stdcall sub_10189140(_DWORD *a1, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*a1 + 972))(a1, a2) )
    return 0;
  if ( !sub_100CF460(a1) )
    return 1;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1236))(a2) )
    return 0;
  v3 = sub_100CF460(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1240))(v3) )
    return 0;
  v4 = sub_100CF460(a1);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1232))(v4);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1232))(a2) > v5;
}
