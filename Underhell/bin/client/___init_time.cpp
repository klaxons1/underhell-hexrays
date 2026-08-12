int __cdecl __init_time(int a1)
{
  int *v1; // edi
  int v3; // eax

  if ( *(_DWORD *)(a1 + 32) )
  {
    v1 = (int *)sub_100DD9C0(1, 356);
    if ( !v1 )
      return 1;
    if ( _get_lc_time(v1, a1) )
    {
      __free_lc_time(v1);
      sub_10034930((int)v1);
      return 1;
    }
    v1[45] = 1;
  }
  else
  {
    v1 = (int *)&off_103FE0A8;
  }
  v3 = *(_DWORD *)(a1 + 212);
  if ( (_UNKNOWN **)v3 != &off_103FE0A8 )
    InterlockedDecrement((volatile LONG *)(v3 + 180));
  *(_DWORD *)(a1 + 212) = v1;
  return 0;
}
