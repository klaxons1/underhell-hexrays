int __usercall sub_101B01B0@<eax>(float *a1@<esi>)
{
  char v1; // cl
  int v2; // edx

  v1 = 0;
  v2 = -1;
  if ( 0.0 != *a1 )
  {
    if ( 1.0 == fabs(*a1) )
    {
      v2 = 0;
      v1 = 1;
    }
    else
    {
      v1 = 0;
    }
  }
  if ( 0.0 != a1[1] )
  {
    if ( 1.0 == fabs(a1[1]) && v2 < 0 )
    {
      v2 = 1;
      v1 = 1;
    }
    else
    {
      v1 = 0;
    }
  }
  if ( a1[2] == 0.0 )
  {
    if ( v1 )
      return v2;
  }
  else if ( fabs(a1[2]) == 1.0 && v2 < 0 )
  {
    return 2;
  }
  return -1;
}
