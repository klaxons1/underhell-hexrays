char *__cdecl sub_10215420(float a1)
{
  int v1; // ecx

  v1 = 0;
  while ( a1 >= (double)flt_10645960[2 * v1] )
  {
    if ( (unsigned int)++v1 >= 0x16 )
      return off_10645A14[0];
  }
  return (&off_10645964)[2 * v1];
}
