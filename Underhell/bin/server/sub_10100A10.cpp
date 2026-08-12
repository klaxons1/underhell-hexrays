double __cdecl sub_10100A10(_DWORD *a1, int a2)
{
  double result; // st7
  double v3; // st7
  int v4; // edx
  int v5; // ecx
  float *i; // esi
  double v7; // st5
  double v8; // st5
  float v9; // [esp+0h] [ebp-24h]
  float v10; // [esp+8h] [ebp-1Ch]
  int v11; // [esp+1Ch] [ebp-8h] BYREF
  float v12; // [esp+20h] [ebp-4h]

  result = 0.0;
  v12 = 0.0;
  if ( *(float *)&a2 > 0.0 )
  {
    v3 = *(float *)&a2;
    v4 = a1[5];
    v5 = 0;
    if ( v4 <= 0 )
    {
      return 1.0;
    }
    else
    {
      for ( i = (float *)((char *)a1 + a1[6]); ; i += 11 )
      {
        v7 = (i[3] + i[2]) * 0.5;
        if ( v7 >= v3 )
          break;
        v3 = v3 - v7;
        ++v5;
        v8 = (double)*(int *)i;
        v12 = v8;
        if ( v5 >= v4 )
          return 1.0;
      }
      v10 = -v3;
      v9 = 0.5 * (i[3] - i[2]);
      if ( (unsigned __int8)sub_10422A40(v9, i[2], v10, (int)&v11, (int)&a2) )
      {
        a2 = a1[4] - 1;
        return 1.0 / (double)a2 * (v12 + ((double)*(int *)i - v12) * *(float *)&v11);
      }
      else
      {
        return 0.0;
      }
    }
  }
  return result;
}
