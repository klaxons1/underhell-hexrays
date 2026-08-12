void __cdecl sub_101A03B0(int a1, float *a2)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  float v5; // [esp+0h] [ebp-8h]

  v2 = 1.0;
  switch ( a1 )
  {
    case 0:
      v2 = -1.0;
      goto LABEL_3;
    case 1:
      *a2 = 1.0;
      a2[1] = -1.0;
      break;
    case 2:
LABEL_3:
      *a2 = v2;
      a2[1] = v2;
      break;
    case 3:
      *a2 = -1.0;
      a2[1] = 1.0;
      break;
    default:
      break;
  }
  v5 = a2[1] * a2[1] + *a2 * *a2;
  v3 = off_10689708(v5);
  if ( 0.0 == v3 )
  {
    a2[1] = 0.0;
    *a2 = 0.0;
  }
  else
  {
    v4 = 1.0 / v3;
    *a2 = *a2 * v4;
    a2[1] = v4 * a2[1];
  }
}
