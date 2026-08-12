int __stdcall sub_103EA9C0(float *a1)
{
  double v1; // st5
  float v3[6]; // [esp+8h] [ebp-60h] BYREF
  float v4[3]; // [esp+20h] [ebp-48h] BYREF
  float v5[5]; // [esp+2Ch] [ebp-3Ch] BYREF
  float v6; // [esp+40h] [ebp-28h]
  float v7; // [esp+44h] [ebp-24h]
  float v8; // [esp+48h] [ebp-20h]
  int v9; // [esp+4Ch] [ebp-1Ch]
  __int16 v10; // [esp+50h] [ebp-18h]
  int v11; // [esp+54h] [ebp-14h]
  int v12; // [esp+58h] [ebp-10h]
  int v13; // [esp+5Ch] [ebp-Ch]
  char v14; // [esp+60h] [ebp-8h]

  v3[3] = 0.0;
  v5[4] = 0.0;
  v3[4] = 0.0;
  v9 = 0;
  v3[5] = 0.0;
  v11 = 0;
  v5[0] = 0.0;
  v12 = 0;
  v5[1] = 0.0;
  v13 = 0;
  v5[2] = 0.0;
  v14 = 0;
  v5[3] = 0.0;
  v6 = 1.0;
  v7 = 0.0;
  v8 = 0.0;
  v1 = *a1;
  v10 = 0;
  v3[0] = v1;
  v3[1] = a1[1];
  v3[2] = a1[2];
  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 1.0;
  sub_10422540(v4, v5);
  v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         2.0)
     + 10.0;
  return sub_1028E890((int)"watersplash", (int)v3);
}
