char __stdcall sub_10151C60(_DWORD *a1)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  char v7; // [esp+17h] [ebp+Bh]

  v2 = 0;
  v7 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 8))(a1, 0x2000);
  if ( v7 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 4))(a1) )
    v2 = sub_1042C810(a1);
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)cvar + 24))(cvar, a1);
  v3 = *(_DWORD *)cvar;
  v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 16))(a1);
  v5 = (*(int (__thiscall **)(int, int))(v3 + 36))(cvar, v4);
  if ( v5 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 4))(a1) )
    {
      (*(void (__thiscall **)(_DWORD *, int))(a1[6] + 8))(a1 + 6, v5);
      return 1;
    }
  }
  else if ( v7 && v2 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 4))(a1) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(a1[6] + 8))(a1 + 6, v2);
  }
  return 1;
}
