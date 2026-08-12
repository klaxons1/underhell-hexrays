int __fastcall sub_10034240(int a1)
{
  int result; // eax

  result = 0xFFFF;
  if ( *(_WORD *)(a1 + 296) == 0xFFFF )
  {
    result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413160 + 12))(
               dword_10413160,
               a1 != 4 ? a1 : 0,
               0);
    *(_WORD *)(a1 + 296) = result;
  }
  return result;
}
