double __cdecl sub_100145F0(float a1, float a2, float a3, float a4, float a5)
{
  if ( a3 != a2 )
    return (a5 - a4) * (a1 - a2) / (a3 - a2) + a4;
  if ( a3 > (double)a1 )
    return a4;
  return a5;
}
