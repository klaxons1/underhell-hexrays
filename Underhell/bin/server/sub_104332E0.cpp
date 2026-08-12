int __cdecl sub_104332E0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  result = a1[3];
  a2[3] = result;
  return result;
}
