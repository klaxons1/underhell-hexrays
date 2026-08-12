double __thiscall sub_100AE620(char *this, int a2)
{
  double result; // st7
  float *v3; // ecx
  int v4; // edx

  result = -16000000.0;
  v3 = (float *)&this[a2 + 16];
  v4 = 100;
  do
  {
    if ( result <= *(v3 - 1) )
      result = *(v3 - 1);
    if ( result <= *v3 )
      result = *v3;
    if ( result <= v3[1] )
      result = v3[1];
    if ( result <= v3[2] )
      result = v3[2];
    if ( result <= v3[3] )
      result = v3[3];
    if ( result <= v3[4] )
      result = v3[4];
    v3 += 6;
    --v4;
  }
  while ( v4 );
  return result;
}
