double __stdcall sub_10021210(int a1, int a2)
{
  int v3; // ecx
  double result; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st4
  double v9; // st5
  float v10; // [esp+14h] [ebp+Ch]

  v10 = sub_100C8390(a1, a2);
  v3 = sub_100773C0(a2, 0);
  if ( 1.0 == *(float *)(dword_10690BEC + 44) )
    result = v10;
  else
    result = *(float *)(dword_10690BEC + 44);
  if ( v3 )
  {
    v5 = *(float *)(dword_10690CC4 + 44);
    v6 = 0.0;
    if ( v5 > 0.0 )
    {
      v7 = *(float *)(dword_106B31C8 + 12) - *(float *)(v3 + 40);
      if ( v7 >= 0.0 )
        v6 = v7;
      v8 = v6;
      v9 = *(float *)(dword_106B31C8 + 12) - *(float *)(v3 + 36);
      if ( v8 < v5 )
      {
        v9 = v8;
        return result * (v9 / v5);
      }
      if ( v9 < v5 )
        return result * (v9 / v5);
    }
  }
  return result;
}
