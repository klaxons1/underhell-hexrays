char *sub_1000ED40()
{
  int v0; // eax
  int v1; // edx
  unsigned __int16 v2; // cx
  int v3; // edx

  v0 = dword_10401F84;
  if ( (dword_10401F84 & 1) == 0 )
  {
    v0 = dword_10401F84 | 1;
    dword_10401F84 |= 1u;
  }
  if ( (v0 & 2) == 0 )
  {
    dword_10401F84 = v0 | 2;
    dword_10401F80 = 0;
  }
  v1 = dword_10401F80;
  v2 = ((_BYTE)dword_10401F80 + 1) & 0x7F;
  if ( _InterlockedCompareExchange(&dword_10401F80, ((_BYTE)dword_10401F80 + 1) & 0x7F, dword_10401F80) != v1 )
  {
    do
    {
      _mm_pause();
      v3 = dword_10401F80;
      v2 = ((_BYTE)dword_10401F80 + 1) & 0x7F;
    }
    while ( _InterlockedCompareExchange(&dword_10401F80, ((_BYTE)dword_10401F80 + 1) & 0x7F, dword_10401F80) != v3 );
  }
  return (char *)&unk_10401980 + 12 * v2;
}
