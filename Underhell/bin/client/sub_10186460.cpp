bool __stdcall sub_10186460(int a1)
{
  int v1; // esi

  v1 = sub_100422D0();
  if ( !v1 )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 296))(v1) > 1 && *(_DWORD *)(dword_1042F6CC + 48) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 296))(v1) == *(_DWORD *)(a1 + 48);
  return 1;
}
