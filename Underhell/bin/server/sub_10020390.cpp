int __stdcall sub_10020390(float a1, float a2)
{
  int result; // eax

  if ( a2 < 64.0 )
    return 38;
  if ( a2 > 512.0 )
    return 39;
  result = 40;
  if ( a1 >= 0.5 )
    return 22;
  return result;
}
