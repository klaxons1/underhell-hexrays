float *sub_100C1B60()
{
  float *result; // eax
  double v1; // st7
  float v2; // [esp+4h] [ebp-4h] BYREF

  result = (float *)sub_101C46F0(3);
  if ( result )
  {
    v1 = (*(float *)(dword_106B31C8 + 12) - result[3]) / (result[2] - result[3]);
    if ( v1 <= 1.0 )
    {
      if ( v1 < 0.0 )
        v1 = 0.0;
    }
    else
    {
      v1 = 1.0;
    }
    if ( result[2] > (double)*(float *)(dword_106B31C8 + 12) )
    {
      v2 = v1 * (result[1] - *result) + *result;
      return (float *)sub_10284260(&v2);
    }
    else
    {
      sub_10284260(result + 1);
      return (float *)sub_101C4770(3);
    }
  }
  return result;
}
