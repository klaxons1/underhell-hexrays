int sub_10073860()
{
  int result; // eax
  int i; // esi

  sub_10007D70();
  sub_1009CC00();
  sub_100026B0();
  sub_1009CE10();
  result = sub_10073770();
  for ( i = dword_1043696C; i; i = *(_DWORD *)(i + 8) )
    result = (*(int (__cdecl **)(_DWORD))i)(*(_DWORD *)(i + 4));
  return result;
}
