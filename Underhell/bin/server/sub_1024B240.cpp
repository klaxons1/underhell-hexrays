int sub_1024B240()
{
  unsigned int v0; // kr00_4
  double v1; // st7
  unsigned int v2; // eax
  double v3; // st5
  double v4; // st7
  int result; // eax

  ++dword_106C6870;
  v0 = strlen(off_1064F858);
  v1 = 10.0;
  v2 = v0 - 1;
  if ( (int)(v0 - 1) < 0 )
    v2 = 1 - v0;
  v3 = 1.0;
  while ( 1 )
  {
    if ( (v2 & 1) != 0 )
      v3 = v3 * v1;
    v2 >>= 1;
    if ( !v2 )
      break;
    v1 = v1 * v1;
  }
  v4 = v3;
  if ( (int)(v0 - 1) < 0 )
    v4 = 1.0 / v3;
  result = (int)v4;
  if ( dword_106C6870 >= (int)v4 )
    dword_106C6870 = 0;
  return result;
}
