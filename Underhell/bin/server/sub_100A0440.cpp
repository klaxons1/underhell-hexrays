int __thiscall sub_100A0440(__int16 *this)
{
  __int16 *v1; // edi
  int result; // eax
  int v3; // esi
  int v4; // eax
  bool v5; // zf
  int v6; // edx
  int i; // [esp+8h] [ebp-8h]

  v1 = this;
  result = this[11];
  v3 = 0;
  for ( i = result; v3 < i; ++v3 )
  {
    v4 = *((_DWORD *)v1 + 2);
    v5 = (*(_BYTE *)(v4 + 60 * (__int16)v3 + 56) & 1) == 0;
    result = v4 + 60 * (__int16)v3 + 12;
    if ( !v5 )
      ++*(_BYTE *)(result + 43);
    v6 = 0;
    *(_WORD *)(result + 41) = 1;
    *(_BYTE *)(result + 43) = 1;
    if ( *(int *)(result + 12) > 0 )
    {
      do
        *(_BYTE *)(*(_DWORD *)result + 8 * v6++ + 6) = 0;
      while ( v6 < *(_DWORD *)(result + 12) );
      v1 = this;
    }
  }
  return result;
}
