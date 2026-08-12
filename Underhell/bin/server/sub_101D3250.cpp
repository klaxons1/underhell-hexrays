char *__cdecl sub_101D3250(int a1)
{
  int i; // eax

  if ( !byte_106BAE70 )
  {
    byte_106BAE70 = 1;
    for ( i = 0; i < 11; ++i )
      dword_106BAF94[2 * i] = i;
  }
  return (char *)&unk_106BAF90 + 8 * a1;
}
