int __stdcall sub_101F8B20(int a1)
{
  unsigned int v1; // esi
  int *v2; // ecx
  int result; // eax

LABEL_1:
  v1 = 0;
  v2 = dword_104656C0;
  while ( *v2 || _InterlockedCompareExchange(v2, 1, 0) )
  {
    ++v1;
    ++v2;
    if ( v1 >= 0x10 )
    {
      ThreadSleep(0);
      goto LABEL_1;
    }
  }
  if ( dword_10465680[v1] )
  {
    result = a1;
    *(_DWORD *)(a1 + 6668) = dword_10465680[v1];
  }
  else
  {
    result = sub_100DDA40(20000);
    dword_10465680[v1] = result;
    *(_DWORD *)(a1 + 6668) = result;
  }
  return result;
}
