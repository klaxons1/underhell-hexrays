void __cdecl sub_101A9AF0(float *a1)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  float v5; // [esp+4h] [ebp-38h]
  float v6; // [esp+10h] [ebp-2Ch]
  int v7[3]; // [esp+20h] [ebp-1Ch] BYREF
  int v8[3]; // [esp+2Ch] [ebp-10h] BYREF
  float v9; // [esp+38h] [ebp-4h]
  float v10; // [esp+44h] [ebp+8h]

  sub_100A5ED0(v7, (int)a1);
  v2 = a1[14];
  v10 = a1[14];
  if ( 0.0 == v2 )
    v10 = 8000.0;
  *(float *)v8 = *a1 - *(float *)v7;
  *(float *)&v8[1] = a1[1] - *(float *)&v7[1];
  *(float *)&v8[2] = a1[2] - *(float *)&v7[2];
  v3 = off_103EDFEC();
  v9 = v3;
  if ( v3 > 64.0 )
  {
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           300.0,
           400.0);
    v6 = (v4 + v9) / v10;
    v5 = v4;
    sub_1008DBD0((int)v7, (int)v8, v10, v5, v9, 5.0, v6, (int)"effects/gunshiptracer");
  }
}
