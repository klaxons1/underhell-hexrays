int __usercall sub_101F42B0@<eax>(int a1@<edi>, int a2, int a3)
{
  int v3; // esi
  int (__cdecl *v4)(int, _DWORD); // eax
  int result; // eax

  v3 = 0;
  if ( a1 <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(int (__cdecl **)(int, _DWORD))(a3 + 4 * v3);
    if ( v4 )
    {
      result = v4(a2, 0);
      if ( result )
        break;
    }
    if ( ++v3 >= a1 )
      return 0;
  }
  return result;
}
