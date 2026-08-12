int __usercall sub_10083A20@<eax>(float *a1@<eax>, _DWORD *a2@<ecx>)
{
  long double v2; // st7
  long double v3; // st6
  long double v4; // st5
  int v5; // edx
  int result; // eax
  float v7[3]; // [esp+0h] [ebp-Ch]

  v2 = fabs(*a1);
  v7[0] = v2;
  v3 = fabs(a1[1]);
  v7[1] = v3;
  v4 = fabs(a1[2]);
  v7[2] = v4;
  v5 = v2 <= v3;
  if ( v4 > v7[v5] )
    v5 = 2;
  result = v5;
  if ( v5 )
  {
    result = v5 - 1;
    if ( v5 == 1 )
    {
      *a2 = 2;
      a2[1] = 0;
      a2[2] = 1;
    }
    else
    {
      result = v5 - 2;
      *a2 = 0;
      a2[1] = 1;
      a2[2] = 2;
    }
  }
  else
  {
    *a2 = 1;
    a2[1] = 2;
    a2[2] = 0;
  }
  return result;
}
