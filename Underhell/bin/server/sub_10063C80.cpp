int sub_10063C80()
{
  int v0; // ecx
  int result; // eax
  int i; // esi
  int v3; // edx
  int v4; // eax
  int v5; // ecx

  v0 = dword_106935D8;
  result = *(_DWORD *)(dword_106935D8 + 4);
  for ( i = 0; i < result; ++i )
  {
    if ( i < 0 || i >= result )
    {
      ++dword_10691DE0;
      v3 = 0;
    }
    else
    {
      v3 = *(_DWORD *)(*(_DWORD *)(v0 + 8) + 4 * i);
    }
    v4 = 0;
    if ( *(int *)(v3 + 84) > 0 )
    {
      do
      {
        v5 = *(_DWORD *)(*(_DWORD *)(v3 + 72) + 4 * v4);
        *(_BYTE *)(v5 + 14) &= ~1u;
        ++v4;
      }
      while ( v4 < *(_DWORD *)(v3 + 84) );
      v0 = dword_106935D8;
    }
    result = *(_DWORD *)(v0 + 4);
  }
  return result;
}
