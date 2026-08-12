void __cdecl sub_101A9C90(int a1)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  float v5; // [esp+Ch] [ebp-34h]
  float v6; // [esp+18h] [ebp-28h]
  int v7[3]; // [esp+24h] [ebp-1Ch] BYREF
  int v8[3]; // [esp+30h] [ebp-10h] BYREF
  float v9; // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF
  float v11; // [esp+48h] [ebp+8h]

  sub_100A5ED0(v8, a1);
  v2 = *(float *)(a1 + 56);
  v11 = *(float *)(a1 + 56);
  if ( 0.0 == v2 )
    v11 = 8000.0;
  *(float *)v7 = *(float *)a1 - *(float *)v8;
  *(float *)&v7[1] = *(float *)(a1 + 4) - *(float *)&v8[1];
  *(float *)&v7[2] = *(float *)(a1 + 8) - *(float *)&v8[2];
  v3 = off_103EDFEC();
  v9 = v3;
  if ( v3 > 256.0 )
  {
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           256.0,
           384.0);
    v6 = (v4 + v9) / v11;
    v5 = v4;
    sub_1008DBD0((int)v8, (int)v7, v11, v5, v9, 5.0, v6, (int)"effects/gunshiptracer");
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      sub_1008DF90((int)&savedregs, (float *)v8, (float *)a1, 2);
  }
}
