int sub_10189400()
{
  int result; // eax

  result = dword_106B77A4;
  if ( *(int *)(dword_106B77A4 + 48) < 0 )
    result = sub_10110F90(&dword_106B77A0);
  if ( dword_106B3CDC )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 516))(dword_106B3CDC);
  return result;
}
