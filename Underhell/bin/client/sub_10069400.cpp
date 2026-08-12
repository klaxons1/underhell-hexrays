float *__stdcall sub_10069400(float *a1)
{
  int v1; // eax
  float *result; // eax
  double v3; // st6
  double v4; // st7
  float *v5; // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st5
  float *v9; // eax
  double v10; // st7
  float v11[3]; // [esp+8h] [ebp-38h] BYREF
  float v12[3]; // [esp+14h] [ebp-2Ch] BYREF
  float v13; // [esp+20h] [ebp-20h] BYREF
  float v14; // [esp+24h] [ebp-1Ch]
  float v15; // [esp+28h] [ebp-18h]
  float v16; // [esp+2Ch] [ebp-14h]
  float *v17; // [esp+30h] [ebp-10h]
  float *v18; // [esp+34h] [ebp-Ch]
  float v19; // [esp+38h] [ebp-8h] BYREF
  float v20; // [esp+3Ch] [ebp-4h] BYREF

  v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          -180.0,
          180.0);
  v17 = &v19;
  v18 = &v20;
  v19 = cos(v16);
  v20 = sin(v16);
  v1 = sub_100422D0();
  if ( v1 )
  {
    sub_100132F0(v1, v11, (int)&v13, (int)v12, 0);
    result = a1;
    v3 = (v20 * v15 + v19 * v12[2]) * 36.0;
    v4 = (v14 * v20 + v12[1] * v19) * 36.0;
    *a1 = (v13 * v20 + v12[0] * v19) * 36.0 + v11[0];
    a1[1] = v4 + v11[1];
    a1[2] = v3 + v11[2];
  }
  else
  {
    v5 = (float *)sub_101422E0();
    v13 = *v5 * v20;
    v14 = v5[1] * v20;
    v15 = v20 * v5[2];
    v6 = (float *)sub_101422F0();
    v7 = v6[1] * v19 + v14;
    v8 = v19 * v6[2] + v15;
    v13 = (v19 * *v6 + v13) * 36.0;
    v14 = v7 * 36.0;
    v15 = v8 * 36.0;
    v9 = (float *)sub_101422C0();
    *a1 = *v9 + v13;
    a1[1] = v9[1] + v14;
    v10 = v9[2];
    result = a1;
    a1[2] = v10 + v15;
  }
  return result;
}
