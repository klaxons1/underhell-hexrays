__int16 __stdcall sub_101C7480(int a1, int a2, unsigned int a3)
{
  unsigned int i; // ecx
  double v4; // st5
  __int16 result; // ax

  if ( a1 && a2 && a3 )
  {
    for ( i = 0; i < a3; *(_WORD *)(a1 + 2 * i - 2) = result )
    {
      v4 = *(float *)(a2 + 4 * i++);
      result = (int)(v4 * 65535.0 + 0.5);
    }
  }
  return result;
}
