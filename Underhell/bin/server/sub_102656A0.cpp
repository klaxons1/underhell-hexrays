bool __thiscall sub_102656A0(int *this, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  if ( !sub_10265590(this, a2, a3) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    return 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  v4 = v3;
  if ( !v3 || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 2 )
    return 0;
  return !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4);
}
