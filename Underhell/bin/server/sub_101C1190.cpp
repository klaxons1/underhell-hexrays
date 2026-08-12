int __cdecl sub_101C1190(int a1)
{
  int result; // eax

  for ( result = dword_106E1C58; result; result = *(_DWORD *)(result + 4) )
    *(_DWORD *)(result + 12) = a1;
  return result;
}
