void __thiscall sub_100271C0(float *this, float *a2)
{
  float *v3; // ebx
  float *v4; // eax
  float *v5; // eax
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st7
  float v12; // [esp+8h] [ebp-10h]
  float v13; // [esp+Ch] [ebp-Ch]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]
  float v16; // [esp+20h] [ebp+8h]

  v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
  v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 576))(a2);
  v13 = *v4 - *v3;
  v14 = v4[1] - v3[1];
  v15 = v4[2] - v3[2];
  v5 = (float *)sub_10022D70();
  *v5 = a2[85] - a2[82];
  v5[1] = a2[86] - a2[83];
  v6 = a2[87] - a2[84];
  v5[2] = v6;
  v16 = v6;
  v7 = (float *)sub_10022D70();
  *v7 = this[85] - this[82];
  v7[1] = this[86] - this[83];
  v8 = this[87] - this[84];
  v7[2] = v8;
  v9 = (v8 + v16) * 0.5;
  v10 = v15;
  if ( v15 <= v9 )
  {
    if ( -v9 <= v10 )
      v11 = 0.0;
    else
      v11 = v9 + v10;
  }
  else
  {
    v11 = v10 - v9;
  }
  v12 = v11 * v11 + v14 * v14 + v13 * v13;
  off_10689708(v12);
}
