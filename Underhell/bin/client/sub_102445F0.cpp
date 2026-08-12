float *__stdcall sub_102445F0(float *a1, int a2, float a3, float a4, float a5, float a6, float *a7, float *a8)
{
  long double v8; // st7
  float *result; // eax

  v8 = (a4 - a5) / (a6 - a5);
  switch ( a2 )
  {
    case 1:
      v8 = v8 * v8;
      break;
    case 2:
      v8 = sqrt(v8);
      break;
    case 3:
      v8 = (cos((v8 + v8) * a3 * 3.141592653589793) + 1.0) * 0.5;
      break;
    case 4:
      if ( RandomFloat(0.0, 1.0) >= a3 )
        v8 = 0.0;
      else
        v8 = 1.0;
      break;
    case 5:
      v8 = 3.0 * (v8 * v8) - (v8 * (v8 * v8) + v8 * (v8 * v8));
      break;
    default:
      break;
  }
  result = a1;
  *a1 = (*a8 - *a7) * v8 + *a7;
  a1[1] = (a8[1] - a7[1]) * v8 + a7[1];
  a1[2] = (a8[2] - a7[2]) * v8 + a7[2];
  a1[3] = v8 * (a8[3] - a7[3]) + a7[3];
  return result;
}
