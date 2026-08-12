bool __usercall sub_101B66B0@<al>(int a1@<eax>, int a2@<ecx>)
{
  bool result; // al
  char v3; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 420) != 3 )
  {
    v3 = *(_BYTE *)(a1 + 306);
    if ( v3 == 7 || v3 == 6 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2) )
      return 1;
  }
  return result;
}
