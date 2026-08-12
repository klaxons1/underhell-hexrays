char __stdcall sub_101C75A0(int a1, int a2, unsigned int a3)
{
  unsigned int i; // ecx
  double v4; // st5
  char result; // al

  if ( a1 && a2 && a3 )
  {
    for ( i = 0; i < a3; *(_BYTE *)(i + a1 - 1) = result )
    {
      v4 = *(double *)(a2 + 8 * i++);
      result = (int)(v4 * 255.0 + 0.5);
    }
  }
  return result;
}
