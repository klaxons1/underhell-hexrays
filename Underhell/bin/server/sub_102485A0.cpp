void __cdecl sub_102485A0(float *a1, float *a2, float *a3, float a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st4
  float v8; // [esp+Ch] [ebp-Ch]
  float v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]
  int v11; // [esp+20h] [ebp+8h]
  float v12; // [esp+20h] [ebp+8h]

  a1[4] = *a3;
  a1[5] = a3[1];
  a1[6] = a3[2];
  if ( 3.4028235e38 == a1[15] )
    v5 = a1[13];
  else
    v5 = a1[15];
  v6 = v5 * 300.0;
  *(float *)&v11 = v6;
  if ( v6 > 30000.0 )
    *(float *)&v11 = 30000.0;
  v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.85000002,
          1.15)
      * *(float *)&v11;
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  off_10689714();
  v7 = *(float *)(dword_106C629C + 44);
  a1[1] = v8 * v12 * v7 * a4;
  a1[2] = v9 * v12 * v7 * a4;
  a1[3] = v12 * v10 * v7 * a4;
}
