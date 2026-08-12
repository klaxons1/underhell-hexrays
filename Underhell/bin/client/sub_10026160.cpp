int __thiscall sub_10026160(_DWORD *this, float *a2, int a3, int a4)
{
  int v5; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int result; // eax
  double v10; // st4
  double v11; // st7
  float v12[3]; // [esp+8h] [ebp-18h] BYREF
  float v13; // [esp+14h] [ebp-Ch] BYREF
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]

  v5 = this[46];
  if ( v5 )
  {
    v6 = a2[3] - *a2;
    v13 = v6;
    v7 = a2[4] - a2[1];
    v14 = v7;
    v8 = a2[5] - a2[2];
    v15 = v8;
    if ( a3 == 64 )
    {
      v13 = v6 * 500.0;
      v14 = v7 * 500.0;
      v15 = 500.0 * v8;
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 236))(v5, &v13);
      return sub_1010E940(this[298]);
    }
    else
    {
      v10 = v6 * a2[11];
      v11 = a2[11];
      v12[0] = v10 + *a2;
      v12[1] = v7 * v11 + a2[1];
      v12[2] = v11 * v8 + a2[2];
      off_103EDFEC();
      v13 = v13 * 4000.0;
      v14 = v14 * 4000.0;
      v15 = 4000.0 * v15;
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 240))(v5, &v13, v12);
      return sub_1010E940(this[298]);
    }
  }
  return result;
}
