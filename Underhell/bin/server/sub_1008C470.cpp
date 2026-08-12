int __thiscall sub_1008C470(int this)
{
  int v1; // edx
  int result; // eax
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v8; // ecx

  sub_100EC3F0(0, 0.0, 0);
  *(_DWORD *)(*(_DWORD *)(this + 804) + 8) &= ~0x10000000u;
  byte_10692E28 = 0;
  sub_1008BF10((int *)word_106936A8, *(int **)(this + 808));
  sub_10069A80();
  sub_1006A1D0();
  sub_10086690(*(_DWORD *)(this + 804), (const char *)this);
  v8 = *(_DWORD *)(this + 804);
  v1 = *(_DWORD *)(v8 + 20);
  *(_DWORD *)(v8 + 8) |= 8u;
  result = 0;
  if ( *(int *)(v1 + 4) > 0 )
  {
    do
    {
      v3 = *(_DWORD *)(v8 + 20);
      if ( result < 0 || result >= *(_DWORD *)(v3 + 4) )
      {
        ++dword_10691DE0;
        v4 = 0;
      }
      else
      {
        v4 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * result);
      }
      *(_DWORD *)(v4 + 64) &= ~0x20000000u;
      v5 = *(_DWORD *)(v8 + 20);
      if ( result < 0 || result >= *(_DWORD *)(v5 + 4) )
      {
        ++dword_10691DE0;
        v6 = 0;
      }
      else
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * result);
      }
      *(_DWORD *)(v6 + 64) &= ~0x10000000u;
      ++result;
    }
    while ( result < *(_DWORD *)(*(_DWORD *)(v8 + 20) + 4) );
  }
  return result;
}
