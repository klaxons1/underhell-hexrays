double __usercall sub_100D4CC0@<st0>(int a1@<eax>, float a2, int a3, float a4)
{
  double result; // st7
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st6
  long double v9; // st4
  long double v10; // st5
  long double v11; // rt2
  double v12; // st5
  long double v13; // st6
  long double v14; // st7
  double v15; // st6
  double v16; // st6
  long double v17; // st7
  float v18; // [esp+0h] [ebp-18h]
  float v19; // [esp+4h] [ebp-14h]
  float v20; // [esp+8h] [ebp-10h]
  float v21; // [esp+Ch] [ebp-Ch]
  float v22; // [esp+10h] [ebp-8h]
  float v23; // [esp+14h] [ebp-4h]
  float v24; // [esp+14h] [ebp-4h]

  switch ( a1 )
  {
    case 1:
      result = a2 * a2 * a4;
      if ( a2 < 0.0 )
        result = -result;
      break;
    case 2:
      result = a2 * (a2 * a2) * a4;
      break;
    case 3:
      v5 = 1.0;
      v6 = a2;
      if ( fabs(a2) >= 0.94999999 )
        v5 = 1.5;
      result = v5 * v6 * v6 * a4;
      if ( v6 < 0.0 )
        result = -result;
      break;
    case 4:
      if ( a4 >= 0.0 )
        v7 = 1.0;
      else
        v7 = -1.0;
      v23 = v7;
      v8 = v7;
      v9 = fabs(a4);
      if ( v9 <= 1000.0 )
      {
        if ( v9 < 0.0000000099999999 )
          v9 = 0.0000000099999999;
      }
      else
      {
        v9 = 1000.0;
      }
      v10 = 1.0 / v9;
      if ( a2 >= 0.0 )
      {
        v13 = v10;
      }
      else
      {
        v11 = v10;
        v12 = v8;
        v13 = v11;
        v23 = -v12;
      }
      v14 = pow(fabs(a2), v13);
      v15 = 1.0;
      if ( v14 <= 1.0 && (v15 = 0.0, v14 >= 0.0) )
        result = v14 * v23;
      else
        result = v15 * v23;
      break;
    case 5:
      if ( fabs(a2) > 0.60000002 )
        result = a2 * a4;
      else
        result = a2 * 0.5 * a4;
      break;
    case 6:
      if ( a3 != 1 )
        goto LABEL_33;
      v24 = 1.0;
      v16 = 0.0;
      if ( a2 < 0.0 )
        v24 = -1.0;
      v17 = fabs(a2);
      if ( v17 > *(float *)(dword_1043209C + 44) )
      {
        v22 = 1.0;
        v21 = *(float *)(dword_104320E4 + 44);
        v20 = 1.0;
        v16 = *(float *)(dword_1043209C + 44);
      }
      else
      {
        v22 = *(float *)(dword_104320E4 + 44);
        v21 = 0.0;
        v20 = *(float *)(dword_1043209C + 44);
      }
      v19 = v16;
      v18 = v17;
      result = sub_100145F0(v18, v19, v20, v21, v22) * a4 * v24;
      break;
    default:
LABEL_33:
      result = a2 * a4;
      break;
  }
  return result;
}
