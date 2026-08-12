void *__cdecl sub_10433070(_DWORD *a1, char *Src, size_t Size)
{
  size_t v4; // eax
  size_t v5; // edi
  size_t v6; // ecx
  int v7; // eax
  size_t v8; // esi
  int v10; // [esp+14h] [ebp+8h]

  v4 = a1[4];
  v5 = Size;
  v6 = v4 + 8 * Size;
  a1[4] = v6;
  if ( v6 < v4 )
    ++a1[5];
  a1[5] += Size >> 29;
  v7 = (v4 >> 3) & 0x3F;
  if ( v7 )
  {
    v8 = 64 - v7;
    if ( Size < 64 - v7 )
      return memcpy_0((char *)a1 + v7 + 24, Src, Size);
    memcpy_0((char *)a1 + v7 + 24, Src, v8);
    sub_104329F0(a1 + 6, a1);
    Src += v8;
    v5 = Size - v8;
    Size -= v8;
  }
  if ( v5 >= 0x40 )
  {
    v10 = v5 >> 6;
    do
    {
      qmemcpy(a1 + 6, Src, 0x40u);
      sub_104329F0(a1 + 6, a1);
      Src += 64;
      Size -= 64;
      --v10;
    }
    while ( v10 );
    v5 = Size;
  }
  return memcpy_0(a1 + 6, Src, v5);
}
