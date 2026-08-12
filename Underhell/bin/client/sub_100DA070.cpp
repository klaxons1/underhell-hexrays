void __cdecl sub_100DA070(int a1, int a2, float *a3, float *a4, int a5, float a6, float *a7)
{
  int v7; // eax
  float *v8; // esi
  long double v9; // st7
  float *v10; // ebx
  float *v11; // edi
  double v12; // st6
  float v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+18h] [ebp-14h]
  float v15; // [esp+1Ch] [ebp-10h]
  float v16; // [esp+1Ch] [ebp-10h]
  float v17; // [esp+1Ch] [ebp-10h]
  float v18; // [esp+28h] [ebp-4h] BYREF

  v7 = a1;
  v8 = a7;
  *a7 = 0.0;
  v8[1] = 0.0;
  v8[2] = 0.0;
  switch ( v7 )
  {
    case 0:
    case 1:
      goto LABEL_18;
    case 2:
      v9 = sin(a6 * 3.141592653589793 * 0.5);
      goto LABEL_6;
    case 3:
      v16 = 1.0 - sin(a6 * 3.141592653589793 * 0.5 + 1.570796326794897);
      sub_1000E380(a3, a4, v16, v8);
      return;
    case 4:
      v17 = 3.0 * (a6 * a6) - a6 * (a6 * a6 + a6 * a6);
      sub_1000E380(a3, a4, v17, v8);
      return;
    case 5:
      sub_101EFE50(a2, (int)a3, (int)a4, a5, a6, (int)v8);
      return;
    case 6:
      v9 = a6;
LABEL_6:
      v15 = v9;
      sub_1000E380(a3, a4, v15, v8);
      break;
    case 7:
    case 8:
    case 9:
      sub_100DA000(v7, &v18, (float *)&a1, (float *)&a7);
      sub_101EFCB0(v18, *(float *)&a1, *(float *)&a7, a2, (int)a3, (int)a4, a5, a6, (int)v8);
      break;
    case 10:
      sub_101EFDF0(a2, (int)a3, (int)a4, a5, a6, (int)v8);
      break;
    case 11:
      sub_101EF230(a2, (int)a3, (int)a4, a5, a6, (int)v8);
      break;
    case 12:
      sub_101EF5C0(a2, (int)a3, (int)a4, a5, a6, (int)v8);
      break;
    case 13:
      sub_101EF410(a2, (int)a3, (int)a4, a5, a6, (int)v8);
      break;
    case 14:
      v10 = a4;
      v11 = a3;
      v12 = *a4 - *a3;
      if ( v12 <= 0.0 )
      {
        v8[1] = a3[1];
      }
      else
      {
        v14 = a6 * v12;
        v13 = v12;
        v8[1] = (1.0 - sub_1003E590(0.001, v13, v14)) * (v10[1] - v11[1]) + v11[1];
      }
      break;
    case 15:
      v8[1] = a3[1];
      break;
    default:
      Warning("Unknown interpolation type %d\n", v7);
LABEL_18:
      sub_101EF6D0(a2, (int)a3, (int)a4, a5, a6, (int)v8);
      break;
  }
}
