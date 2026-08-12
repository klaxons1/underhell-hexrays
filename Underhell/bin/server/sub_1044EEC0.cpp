int __cdecl sub_1044EEC0(int a1, int *a2)
{
  int result; // eax

  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    result = sub_1042E720(a1, "%d", a2);
    if ( result != 1 || *(_BYTE *)(a1 + 20) )
      return 0;
  }
  else
  {
    *a2 = sub_1008A260((_DWORD *)a1);
    return *(_BYTE *)(a1 + 20) == 0;
  }
  return result;
}
