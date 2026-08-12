int __cdecl sub_102AFED0(int a1, bool *a2)
{
  int v2; // esi
  int result; // eax
  char v4; // cl
  int v5; // [esp-Ch] [ebp-10h]

  v2 = a1;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    v5 = a1;
    a1 = 0;
    result = sub_1022F5B0(v5, "%d", &a1);
    *a2 = a1 != 0;
    if ( result != 1 || *(_BYTE *)(v2 + 20) )
      return 0;
  }
  else
  {
    if ( sub_1022E380(a1, 1) )
    {
      v4 = *(_BYTE *)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2);
      ++*(_DWORD *)(v2 + 12);
    }
    else
    {
      v4 = 0;
    }
    *a2 = v4 != 0;
    return *(_BYTE *)(v2 + 20) == 0;
  }
  return result;
}
