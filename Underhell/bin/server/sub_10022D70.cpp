char *sub_10022D70()
{
  int v0; // eax
  int v1; // edx
  unsigned __int16 v2; // cx
  int v3; // edx

  v0 = dword_106916D4;
  if ( (dword_106916D4 & 1) == 0 )
  {
    v0 = dword_106916D4 | 1;
    dword_106916D4 |= 1u;
  }
  if ( (v0 & 2) == 0 )
  {
    dword_106916D4 = v0 | 2;
    dword_106916D0 = 0;
  }
  v1 = dword_106916D0;
  v2 = ((_BYTE)dword_106916D0 + 1) & 0x7F;
  if ( _InterlockedCompareExchange(&dword_106916D0, ((_BYTE)dword_106916D0 + 1) & 0x7F, dword_106916D0) != v1 )
  {
    do
    {
      _mm_pause();
      v3 = dword_106916D0;
      v2 = ((_BYTE)dword_106916D0 + 1) & 0x7F;
    }
    while ( _InterlockedCompareExchange(&dword_106916D0, ((_BYTE)dword_106916D0 + 1) & 0x7F, dword_106916D0) != v3 );
  }
  return (char *)&unk_106910D0 + 12 * v2;
}
