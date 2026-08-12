void __cdecl sub_1011CF30(float *a1, int a2, char a3, float a4)
{
  int v4; // edi
  double v5; // st4
  double v6; // st6
  double v7; // st7
  _BYTE v8[12]; // [esp+14h] [ebp-6Ch] BYREF
  float v9; // [esp+20h] [ebp-60h]
  float v10; // [esp+24h] [ebp-5Ch]
  float v11; // [esp+28h] [ebp-58h]
  float v12[3]; // [esp+68h] [ebp-18h] BYREF
  float v13[3]; // [esp+74h] [ebp-Ch] BYREF
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v4 = sub_1025FC50();
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v5 = *(float *)(v4 + 584) - a1[1];
    v6 = *(float *)(v4 + 588) - a1[2];
    if ( (*(float *)(v4 + 580) - *a1) * (*(float *)(v4 + 580) - *a1) + v5 * v5 + v6 * v6 <= 90000000.0 )
    {
      sub_100F5A30((_DWORD *)v4, (int)v13, 0, 0);
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      if ( (a1[2] - *(float *)(v4 + 588)) * v13[2]
         + (a1[1] - *(float *)(v4 + 584)) * v13[1]
         + (*a1 - *(float *)(v4 + 580)) * v13[0] >= 0.0 )
      {
        if ( !a3 )
          goto LABEL_12;
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(v4);
        sub_1002A5F0((int)&savedregs, (int)a1, (float *)(v4 + 580), a1, 16513, 0, 0, (int)v8);
        v12[0] = v9 - *a1;
        v12[1] = v10 - a1[1];
        v7 = v11 - a1[2];
        v12[2] = v7;
        sub_100D7A40(v12);
        if ( v7 <= 10.0 )
        {
LABEL_12:
          if ( dword_106B3200 )
            (*(void (__cdecl **)(int, float *, _DWORD, int))(*(_DWORD *)dword_106B3200 + 20))(
              dword_106B3200,
              a1,
              LODWORD(a4),
              a2);
        }
      }
    }
  }
}
