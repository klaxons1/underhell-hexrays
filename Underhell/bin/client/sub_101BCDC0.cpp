double __usercall sub_101BCDC0@<st0>(float *a1@<ecx>, int a2@<esi>)
{
  double result; // st7
  double v3; // st6
  double v4; // st7
  float v5; // [esp+0h] [ebp-8h]
  float v6; // [esp+4h] [ebp-4h]

  switch ( *(_DWORD *)(a2 + 40) )
  {
    case 0:
      result = 0.0;
      if ( 0.0 == *(float *)(a2 + 60)
        || *(float *)(a2 + 60) * *(float *)(a2 + 60) >= a1[1] * a1[1] + *a1 * *a1 + a1[2] * a1[2] )
      {
        result = off_103EDFF4(a1);
      }
      break;
    case 1:
    case 2:
      v6 = a1[2] * a1[2] + *a1 * *a1 + a1[1] * a1[1];
      v4 = off_103EDFE0(v6);
      v3 = 0.0;
      if ( 0.0 != *(float *)(a2 + 60) && *(float *)(a2 + 60) < v4 )
        goto LABEL_6;
      result = 1.0 / (v4 * *(float *)(a2 + 68) + *(float *)(a2 + 64) + *(float *)(a2 + 72) * v6);
      break;
    case 4:
      v5 = a1[2] * a1[2] + *a1 * *a1 + a1[1] * a1[1];
      result = *(float *)(a2 + 68) - off_103EDFE0(v5);
      v3 = 0.0;
      if ( result < 0.0 )
LABEL_6:
        result = v3;
      break;
    default:
      result = 1.0;
      break;
  }
  return result;
}
