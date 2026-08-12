float *__usercall sub_1007E360@<eax>(float *result@<eax>, int a2, char a3)
{
  if ( a2 == 1 )
  {
    *result = 255.0;
    result[1] = 0.0;
    result[2] = 0.0;
  }
  else if ( (a3 & 8) != 0 )
  {
    *result = 200.0;
    result[1] = 0.0;
    result[2] = 255.0;
  }
  else if ( (a3 & 1) != 0 )
  {
    *result = 0.0;
    result[1] = 200.0;
    result[2] = 255.0;
  }
  else
  {
    *result = 0.0;
    if ( (a3 & 4) != 0 )
    {
      result[1] = 0.0;
      result[2] = 255.0;
    }
    else
    {
      result[1] = 255.0;
      result[2] = 150.0;
    }
  }
  return result;
}
