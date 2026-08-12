int __stdcall sub_10449980(int a1, _DWORD *a2)
{
  int v3; // [esp-Ch] [ebp-Ch]

  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    v3 = a1;
    a1 = 0;
    sub_1042E720(v3, "%d", &a1);
  }
  else
  {
    sub_100878C0((_DWORD *)a1, &a1);
  }
  if ( a1 == -2 )
  {
    Warning("Reading externally referenced elements is not supported!\n");
    return 0;
  }
  if ( a1 < 0 || !*(_DWORD *)(*a2 + 4 * a1) )
    return 0;
  return *(_DWORD *)(*a2 + 4 * a1);
}
