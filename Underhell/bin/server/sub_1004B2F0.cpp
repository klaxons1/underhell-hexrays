bool __thiscall sub_1004B2F0(_DWORD *this, float *a2, int a3)
{
  _BYTE *v4; // eax
  float v6; // ecx
  float v7; // ebx
  double v8; // st7
  int v9; // [esp-Ch] [ebp-7Ch]
  _BYTE v10[84]; // [esp+4h] [ebp-6Ch] BYREF
  _DWORD v11[4]; // [esp+58h] [ebp-18h] BYREF
  int v12; // [esp+68h] [ebp-8h]
  float v13; // [esp+6Ch] [ebp-4h]

  v4 = (_BYTE *)this[702];
  if ( v4 && *v4 && (!a3 || *(_BYTE **)(a3 + 824) != v4) )
    return 0;
  v6 = a2[2];
  v7 = *a2;
  v12 = *((_DWORD *)a2 + 1);
  v9 = this[419];
  v13 = v6;
  v8 = v6 - *(float *)(sub_10073710(v9) + 8);
  v11[1] = v12;
  v13 = v8;
  *(float *)&v11[2] = v8 + 0.01;
  *(float *)v11 = v7;
  sub_102659D0(this, a2, v11, 33701899, v10);
  return v10[55] == 0;
}
