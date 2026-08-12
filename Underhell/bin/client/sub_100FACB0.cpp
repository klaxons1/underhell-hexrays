char *__cdecl sub_100FACB0(int a1)
{
  int i; // eax

  if ( !byte_104360D0 )
  {
    byte_104360D0 = 1;
    for ( i = 0; i < 11; ++i )
      dword_104361F4[2 * i] = i;
  }
  return (char *)&unk_104361F0 + 8 * a1;
}
