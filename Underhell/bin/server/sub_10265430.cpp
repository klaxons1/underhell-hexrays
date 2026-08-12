bool __usercall sub_10265430@<al>(int a1@<ebx>, int a2, int a3)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // esi

  if ( !a3 )
    return 1;
  if ( a2 == a3 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2, a1) )
    v4 = 0;
  else
    v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a3) )
    v5 = 0;
  else
    v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 20))(a3);
  if ( !v4 || !v5 )
    return 1;
  if ( (_DWORD *)sub_10019B00(v4) == v5 )
    return 0;
  return sub_10019B00(v5) != (_DWORD)v4;
}
