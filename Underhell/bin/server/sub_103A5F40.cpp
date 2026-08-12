char __thiscall sub_103A5F40(float *this, int a2, float *a3, int a4)
{
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  float v14; // [esp+0h] [ebp-24h]
  float v15; // [esp+0h] [ebp-24h]
  float v16; // [esp+0h] [ebp-24h]
  int v17[3]; // [esp+Ch] [ebp-18h] BYREF
  float v18[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( a2 != dword_106EAAA8 )
  {
    if ( a2 == dword_106EAAAC
      && !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
      && !sub_103A5070((int)this) )
    {
      v10 = *a3;
      v17[0] = *(int *)a3;
      v11 = a3[1];
      v17[1] = *((int *)a3 + 1);
      v12 = a3[2];
      v17[2] = *((int *)a3 + 2);
      v18[0] = v10 - this[179];
      v18[1] = v11 - this[180];
      v13 = v12 - this[181];
      v18[2] = v13;
      sub_100D7A40(v18);
      if ( v13 < 4000.0 )
      {
        v16 = *(float *)(a4 + 3868) - *(float *)(dword_106B31C8 + 12);
        sub_103A4FF0((int)this, (float *)v17, v16);
        goto LABEL_6;
      }
    }
    return 0;
  }
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    return 0;
  if ( sub_103A5070((int)this) )
    return 0;
  v5 = a3[179] - this[179];
  v6 = v5 * v5;
  v7 = a3[180] - this[180];
  v8 = a3[181] - this[181];
  v14 = v8 * v8 + v7 * v7 + v6;
  if ( off_10689708(v14) >= 4000.0 )
    return 0;
  v15 = *(float *)(a4 + 3868) - *(float *)(dword_106B31C8 + 12);
  sub_103A4F80((int)this, (int)a3, v15);
LABEL_6:
  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2) )
    sub_100457E0(this, 96);
  else
    sub_100457E0(this, 99);
  return 1;
}
