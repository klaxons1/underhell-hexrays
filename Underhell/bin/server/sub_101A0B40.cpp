int sub_101A0B40()
{
  int result; // eax

  for ( result = sub_1012BC10(&dword_1069E3E0, 0); result; result = sub_1012BC10(&dword_1069E3E0, result) )
    *(_DWORD *)(result + 236) = 0;
  if ( dword_106B3200 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3200 + 56))(dword_106B3200);
  return result;
}
