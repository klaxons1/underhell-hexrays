void __thiscall sub_1015C720(int this)
{
  int v2; // esi
  double v3; // st7
  float *v4; // esi
  bool v5; // c3
  double v6; // st7
  double v7; // st6
  double v8; // st6
  double v9; // st7
  float v10; // [esp+4h] [ebp-10h]
  float v11; // [esp+4h] [ebp-10h]

  v2 = *(_DWORD *)(this + 4);
  v3 = *(float *)(v2 + 2280);
  v4 = (float *)(v2 + 2280);
  v5 = 0.0 == v3;
  v6 = 0.0;
  if ( !v5 )
  {
    v7 = 1000.0 - *v4;
    if ( v7 < 0.0 )
      v7 = 0.0;
    v8 = v7 * 0.001;
    if ( v8 <= 0.2 )
    {
      v9 = 1.0 - v8 * 5.0;
      v11 = 3.0 * (v9 * v9) - v9 * (v9 * v9 + v9 * v9);
      sub_10157520((_DWORD **)this, v11);
    }
    else
    {
      if ( *(_DWORD *)v4 != COERCE_INT(0.0) )
      {
        (**((void (__thiscall ***)(int, float *))v4 - 22))((int)(v4 - 22), v4);
        v6 = 0.0;
        *v4 = 0.0;
      }
      v10 = v6;
      sub_10157520((_DWORD **)this, v10);
    }
  }
}
