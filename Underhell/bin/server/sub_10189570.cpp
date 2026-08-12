int __stdcall sub_10189570(int a1)
{
  int result; // eax
  int v2; // ecx
  _DWORD *v3; // esi

  result = a1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 12);
    if ( v2 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
      v3 = (_DWORD *)result;
      if ( result )
      {
        sub_102467B0("game_playerleave", result, result, 3, 0.0);
        (*(void (__thiscall **)(_DWORD *, int))(*v3 + 1232))(v3, 1);
        result = sub_101E7FA0(v3);
        v3[1001] = 2;
      }
    }
  }
  return result;
}
