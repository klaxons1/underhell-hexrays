void *__thiscall sub_10232B50(void *this)
{
  int v1; // esi
  int *v2; // edx
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // esi
  int v6; // eax
  bool v7; // zf
  unsigned int i; // edx
  int v11; // [esp+10h] [ebp-4h]

  v1 = 0;
  v2 = (int *)&unk_1047B83C;
  v11 = 32;
  do
  {
    v3 = v1 + 1;
    v4 = dword_103FC2B0[v1 & 0x1F] - 1;
    v5 = v1 + 1;
    v6 = 11;
    do
    {
      *(v2 - 1) = v4;
      if ( v5 - 1 < 0x20 )
        *(v2 - 1) = v4 | ~(dword_103FC2B0[((_BYTE)v5 - 1) & 0x1F] - 1);
      *v2 = v4;
      if ( v5 < 0x20 )
        *v2 = v4 | ~(dword_103FC2B0[v5 & 0x1F] - 1);
      v2[1] = v4;
      if ( v5 + 1 < 0x20 )
        v2[1] = v4 | ~(dword_103FC2B0[((_BYTE)v5 + 1) & 0x1F] - 1);
      v2 += 3;
      v5 += 3;
      --v6;
    }
    while ( v6 );
    v7 = v11-- == 1;
    v1 = v3;
  }
  while ( !v7 );
  for ( i = 0; i < 0x20; ++i )
    dword_1047C8B8[i] = dword_103FC2B0[i & 0x1F] - 1;
  return this;
}
