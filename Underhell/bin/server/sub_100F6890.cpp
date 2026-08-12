char __stdcall sub_100F6890(int a1, int a2)
{
  int v2; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a1)
    && (v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1)) != 0
    && *(_DWORD *)(v2 + 424) )
  {
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 484))(dword_106B3CDC, v2);
  }
  else
  {
    return 0;
  }
}
