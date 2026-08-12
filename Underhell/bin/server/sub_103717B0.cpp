int __thiscall sub_103717B0(void *this)
{
  double v2; // st6
  double v3; // st5
  double v4; // rt0
  double v5; // st5
  float v7; // [esp+8h] [ebp-40h]
  int v8; // [esp+Ch] [ebp-3Ch]
  float v9[3]; // [esp+14h] [ebp-34h] BYREF
  float v10[3]; // [esp+20h] [ebp-28h] BYREF
  float v11; // [esp+2Ch] [ebp-1Ch] BYREF
  float v12; // [esp+30h] [ebp-18h]
  float v13; // [esp+34h] [ebp-14h]
  float v14; // [esp+38h] [ebp-10h] BYREF
  float v15; // [esp+3Ch] [ebp-Ch]
  float v16; // [esp+40h] [ebp-8h]
  int v17; // [esp+44h] [ebp-4h]

  sub_100BCCA0(this, dword_10674300, (int)v9, (int)v10);
  v17 = sub_10219A30();
  v14 = (double)v17 * 0.000030518509 + (double)v17 * 0.000030518509 - 1.0;
  v17 = sub_10219A30();
  v15 = (double)v17 * 0.000030518509 + (double)v17 * 0.000030518509 - 1.0;
  v17 = sub_10219A30();
  v16 = (double)v17 * 0.000030518509 + (double)v17 * 0.000030518509 - 1.0;
  off_10689714();
  v11 = 0.0;
  v12 = 0.0;
  v13 = 1.0;
  sub_10422620(&v14, &v11, v10);
  v2 = v14 * flt_106E8550;
  v14 = v2;
  v3 = flt_106E8550 * v15;
  v15 = v3;
  v4 = v3;
  v5 = flt_106E8550 * v16;
  v16 = v5;
  v11 = v2 + v9[0];
  v12 = v4 + v9[1];
  v13 = v5 + v9[2];
  sub_101AB000("blood_spurt_synth_01", v11, v12, v13, v10[0], v10[1], v10[2], 0);
  v8 = off_10674250;
  v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.60000002,
         1.5)
     + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v7, v8);
}
