bool __stdcall sub_100BCC10(int a1, int a2)
{
  int v2; // eax

  if ( !(unsigned __int8)sub_10265590(a1, a2) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a1) )
    v2 = 0;
  else
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
  return (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 284))(v2) == 0;
}
