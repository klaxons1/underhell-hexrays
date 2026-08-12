int __cdecl sub_101EDDA0(float *a1, float *a2, int a3)
{
  unsigned __int8 v3; // al
  int v4; // edx
  double v6; // st7
  double v7; // st6
  float *v8; // eax
  float *v9; // edx
  double v10; // st6
  char v11; // fps^1
  double v12; // st5
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  BOOL v16; // edx

  v3 = *(_BYTE *)(a3 + 16);
  if ( v3 >= 3u )
  {
    switch ( *(_BYTE *)(a3 + 17) )
    {
      case 0:
        v6 = a2[2] * *(float *)(a3 + 8) + a2[1] * *(float *)(a3 + 4) + *a2 * *(float *)a3;
        v7 = a1[2] * *(float *)(a3 + 8) + a1[1] * *(float *)(a3 + 4) + *a1 * *(float *)a3;
        break;
      case 1:
        v8 = a2;
        v9 = a1;
        goto LABEL_10;
      case 2:
        v8 = a1;
        v9 = a2;
        v6 = a1[1] * *(float *)(a3 + 4) + a2[2] * *(float *)(a3 + 8) + *a2 * *(float *)a3;
        v10 = a1[2];
        goto LABEL_11;
      case 3:
        v6 = a1[1] * *(float *)(a3 + 4) + a2[2] * *(float *)(a3 + 8) + *a1 * *(float *)a3;
        v7 = a1[2] * *(float *)(a3 + 8) + a2[1] * *(float *)(a3 + 4) + *a2 * *(float *)a3;
        break;
      case 4:
        v6 = a1[2] * *(float *)(a3 + 8) + a2[1] * *(float *)(a3 + 4) + *a2 * *(float *)a3;
        v7 = a1[1] * *(float *)(a3 + 4) + a2[2] * *(float *)(a3 + 8) + *a1 * *(float *)a3;
        break;
      case 5:
        v6 = a1[2] * *(float *)(a3 + 8) + a2[1] * *(float *)(a3 + 4) + *a1 * *(float *)a3;
        v7 = a1[1] * *(float *)(a3 + 4) + a2[2] * *(float *)(a3 + 8) + *a2 * *(float *)a3;
        break;
      case 6:
        v8 = a1;
        v9 = a2;
LABEL_10:
        v6 = v8[2] * *(float *)(a3 + 8) + v8[1] * *(float *)(a3 + 4) + *v9 * *(float *)a3;
        v10 = v9[2];
LABEL_11:
        v7 = v10 * *(float *)(a3 + 8) + v9[1] * *(float *)(a3 + 4) + *v8 * *(float *)a3;
        break;
      case 7:
        v6 = a1[2] * *(float *)(a3 + 8) + a1[1] * *(float *)(a3 + 4) + *a1 * *(float *)a3;
        v7 = a2[2] * *(float *)(a3 + 8) + a2[1] * *(float *)(a3 + 4) + *a2 * *(float *)a3;
        break;
      default:
        v6 = 0.0;
        v7 = 0.0;
        break;
    }
    v12 = *(float *)(a3 + 12);
    v13 = v12 < v6;
    v14 = 0;
    v15 = v12 == v6;
    v16 = !__SETP__(v11 & 0x41, 0);
    if ( v7 < v12 )
      return v16 | 2;
    return v16;
  }
  else
  {
    v4 = v3;
    if ( a1[v4] < (double)*(float *)(a3 + 12) )
    {
      if ( a2[v4] > (double)*(float *)(a3 + 12) )
        return 3;
      else
        return 2;
    }
    else
    {
      return 1;
    }
  }
}
