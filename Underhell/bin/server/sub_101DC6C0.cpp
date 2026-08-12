bool __fastcall sub_101DC6C0(int a1, int a2)
{
  double v2; // st7
  int v3; // ecx
  double v4; // st6
  double v5; // st5
  double v6; // rt1
  double v7; // st6
  double v8; // st7
  float v10; // [esp+14h] [ebp-2Ch]
  float v11[3]; // [esp+18h] [ebp-28h] BYREF
  float v12[3]; // [esp+24h] [ebp-1Ch] BYREF
  float v13; // [esp+30h] [ebp-10h]
  float v14; // [esp+34h] [ebp-Ch]
  float v15; // [esp+38h] [ebp-8h]
  float v16; // [esp+3Ch] [ebp-4h]

  (*(void (__thiscall **)(int, float *, float *, int, float *, float *))(*(_DWORD *)dword_106BAFF0 + 92))(
    dword_106BAFF0,
    v11,
    v12,
    a2,
    &flt_106F1CA8,
    &flt_106F1CB4);
  v2 = v12[0] - v11[0];
  v3 = 0;
  v13 = v2;
  v4 = v12[1] - v11[1];
  v14 = v4;
  v5 = v12[2] - v11[2];
  v15 = v5;
  v16 = v2;
  if ( v2 >= v4 )
  {
    v7 = v5;
  }
  else
  {
    v3 = 1;
    v16 = v4;
    v6 = v4;
    v7 = v5;
    v2 = v6;
  }
  if ( v7 > v2 )
  {
    v16 = v7;
    v3 = 2;
  }
  *(&v13 + v3) = 0.0;
  v10 = v13 * v13 + v14 * v14 + v15 * v15;
  v8 = off_10689708(v10);
  return v8 > 0.0 && v16 / v8 > 9.0;
}
