int __usercall sub_10046010@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int result; // eax

  if ( dword_10407394 == a1 )
    sub_100446F0(a1, a2, (float *)a1);
  result = 0xFFFF;
  if ( *(_WORD *)(a1 + 118) != 0xFFFF )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1044CC48 + 52))(dword_1044CC48, a1);
    if ( (_BYTE)result )
    {
      if ( (*(_DWORD *)(a1 + 112) & 8) != 0 || sub_10037760(a1) )
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 376))(a1);
      return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1);
    }
  }
  return result;
}
