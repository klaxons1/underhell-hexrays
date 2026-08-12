float *__cdecl sub_100DA000(int a1, float *a2, float *a3, float *a4)
{
  float *result; // eax

  if ( a1 == 7 )
  {
    result = a2;
    *a2 = 0.76999998;
    *a3 = 0.0;
    *a4 = 0.76999998;
  }
  else if ( a1 == 8 )
  {
    result = a2;
    *a2 = 0.76999998;
    *a3 = -1.0;
    *a4 = 0.76999998;
  }
  else
  {
    result = a2;
    if ( a1 == 9 )
    {
      *a2 = 0.76999998;
      *a3 = 1.0;
      *a4 = 0.76999998;
    }
    else
    {
      *a2 = 0.0;
      *a3 = 0.0;
      *a4 = 0.0;
    }
  }
  return result;
}
