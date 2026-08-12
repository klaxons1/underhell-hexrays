int __cdecl sub_10070A20(int *a1)
{
  int v1; // eax

  if ( *a1 == -1 )
    return 0;
  v1 = *a1 + 1;
  if ( dword_10607410 <= v1 )
  {
    *a1 = -1;
    return 0;
  }
  *a1 = v1;
  return *(_DWORD *)(dword_10607404 + 4 * v1);
}
