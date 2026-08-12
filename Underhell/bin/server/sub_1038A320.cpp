double __thiscall sub_1038A320(void *this, float a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  int v6; // esi
  int v7; // eax
  double v8; // st7
  int v9; // eax
  double v10; // st6
  float v12; // [esp+8h] [ebp+8h]

  v12 = *(float *)(dword_106E9D74 + 44) * a2;
  if ( !sub_1038A110(this) )
    return v12;
  v4 = a4 * 0.0099999998;
  v5 = a3 * 0.0020000001;
  v6 = (int)v4;
  v7 = (int)v5;
  if ( (int)v4 >= 5 || v7 >= 6 )
    return v12;
  v8 = v4 - (double)(int)v4;
  v9 = v6 + 6 * v7;
  v10 = v5 - (double)(int)v5;
  return (flt_10676690[v9] * (1.0 - v8) * (1.0 - v10)
        + (1.0 - v8) * flt_106766A8[v9] * v10
        + (1.0 - v10) * (flt_10676694[v9] * v8)
        + v10 * (v8 * flt_106766AC[v9]))
       * v12;
}
