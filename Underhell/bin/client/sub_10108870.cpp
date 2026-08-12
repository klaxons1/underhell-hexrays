float *__stdcall sub_10108870(float *a1)
{
  float *result; // eax

  result = (float *)sub_100422D0();
  if ( result )
  {
    *a1 = result[992];
    a1[1] = result[993];
    a1[2] = result[994];
  }
  else
  {
    result = a1;
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
  }
  return result;
}
