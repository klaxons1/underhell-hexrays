int __cdecl sub_102AFF50(int a1, int *a2)
{
  int result; // eax

  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    result = sub_1022F5B0(a1, "%d", a2);
    if ( result != 1 || *(_BYTE *)(a1 + 20) )
      return 0;
  }
  else
  {
    *a2 = sub_10097990((_DWORD *)a1);
    return *(_BYTE *)(a1 + 20) == 0;
  }
  return result;
}
