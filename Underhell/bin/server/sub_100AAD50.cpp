int __stdcall sub_100AAD50(_DWORD *a1)
{
  int v2; // eax

  if ( !*a1 )
    return 0;
  if ( *a1 == -1 || (v2 = *(_DWORD *)(sub_1023C740(*a1) + 20), v2 == -1) )
  {
    *a1 = 0;
    return 0;
  }
  *a1 = v2;
  return sub_1023C740(v2);
}
