int __thiscall sub_101864C0(_DWORD *this)
{
  int result; // eax
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float v7[16]; // [esp+4h] [ebp-58h] BYREF
  float v8[2]; // [esp+44h] [ebp-18h] BYREF
  float v9; // [esp+4Ch] [ebp-10h] BYREF
  float v10; // [esp+50h] [ebp-Ch]
  _BYTE v11[4]; // [esp+54h] [ebp-8h] BYREF
  _BYTE v12[4]; // [esp+58h] [ebp-4h] BYREF

  result = sub_102361D0(v11, v12);
  if ( (int)this[1577] >= 0 )
  {
    v9 = 0.0;
    v10 = 0.0;
    v3 = sub_101859B0((int)this, v8, &v9);
    v7[0] = *v3;
    v7[1] = v3[1];
    v7[2] = 0.0;
    v7[3] = 0.0;
    v9 = 1023.0;
    v10 = 0.0;
    v4 = sub_101859B0((int)this, v8, &v9);
    v7[4] = *v4;
    v7[5] = v4[1];
    v7[6] = 1.0;
    v7[7] = 0.0;
    v9 = 1023.0;
    v10 = 1023.0;
    v5 = sub_101859B0((int)this, v8, &v9);
    v7[8] = *v5;
    v7[9] = v5[1];
    v7[10] = 1.0;
    v7[11] = 1.0;
    v9 = 0.0;
    v10 = 1023.0;
    v6 = sub_101859B0((int)this, v8, &v9);
    v7[12] = *v6;
    v7[13] = v6[1];
    v7[14] = 0.0;
    v7[15] = 1.0;
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
      dword_1047CA6C,
      255,
      255,
      255,
      (int)(*(float *)(dword_1044568C + 44) * 255.0));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, this[1577]);
    return (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)dword_1047CA6C + 396))(dword_1047CA6C, 4, v7);
  }
  return result;
}
