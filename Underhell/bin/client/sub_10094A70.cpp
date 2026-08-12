int __fastcall sub_10094A70(int a1, int a2, int a3)
{
  int v3; // edx

  if ( *(_BYTE *)(a1 + 33) && (v3 = *(_DWORD *)(a1 + 36)) != 0 )
    return (**(int (__thiscall ***)(int, int, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))dword_10413160)(
             dword_10413160,
             a3,
             a1 != 4 ? a1 : 0,
             0xFFFF,
             -1,
             v3,
             a1 + 4,
             a1 + 16,
             0,
             0,
             0,
             0,
             0);
  else
    return 0;
}
