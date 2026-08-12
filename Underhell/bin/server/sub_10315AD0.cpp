int __thiscall sub_10315AD0(_DWORD *this, float *a2)
{
  double v4; // st7
  unsigned int v5; // eax
  int v6; // ebx
  const char *v7; // eax
  int result; // eax
  float *v9; // eax
  char *v10; // [esp+18h] [ebp-8Ch]
  float v11[18]; // [esp+2Ch] [ebp-78h] BYREF
  __int16 v12; // [esp+74h] [ebp-30h]
  int v13; // [esp+78h] [ebp-2Ch]
  int v14; // [esp+7Ch] [ebp-28h]
  int v15; // [esp+80h] [ebp-24h]
  char v16; // [esp+84h] [ebp-20h]
  int v17[3]; // [esp+8Ch] [ebp-18h] BYREF
  int v18; // [esp+98h] [ebp-Ch] BYREF
  int v19; // [esp+9Ch] [ebp-8h]
  float v20; // [esp+A0h] [ebp-4h]
  int v21; // [esp+ACh] [ebp+8h]

  v11[3] = 0.0;
  v11[4] = 0.0;
  v11[5] = 0.0;
  v11[6] = 0.0;
  v11[7] = 0.0;
  v11[8] = 0.0;
  v11[9] = 0.0;
  v11[10] = 0.0;
  v11[11] = 0.0;
  v11[12] = 0.0;
  v11[14] = 1.0;
  v11[13] = 0.0;
  v11[17] = 0.0;
  v12 = 0;
  v13 = 0;
  v11[15] = 0.0;
  v14 = 0;
  v11[16] = 0.0;
  v15 = 0;
  v4 = *a2;
  v16 = 0;
  v11[0] = v4;
  v11[1] = a2[1];
  v11[2] = a2[2];
  sub_1028E890((int)"HelicopterMegaBomb", (int)v11);
  sub_1023C380(this, (int)"BaseExplosionEffect.Sound", 0.0, 0);
  sub_10261B70(a2, 25.0, 150.0, 1.0, 750.0, 0, 0);
  v5 = this[1083];
  if ( v5 != -1 && off_1061BE18[4 * (this[1083] & 0xFFF) + 2] == v5 >> 12 && off_1061BE18[4 * (this[1083] & 0xFFF) + 1] )
  {
    *(float *)&v18 = 0.0;
    *(float *)&v19 = 0.0;
    v20 = 1.0;
    sub_1013D530(a2, (float *)&v18, (int)this, 100, 128, 0, 0.0, 0, 0, -1);
  }
  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 4) )
  {
    v6 = 2;
    do
    {
      *(float *)&v18 = (double)sub_10219A30() * 0.000030518509 * 360.0;
      *(float *)&v19 = (double)sub_10219A30() * 0.000030518509 * 360.0;
      v21 = sub_10219A30();
      v17[0] = v18;
      v17[1] = v19;
      *(float *)&v17[2] = (double)v21 * 0.000030518509 * 360.0;
      v7 = sub_10215C30((int)&dword_106C29C8, "MetalChunks", -1);
      result = sub_103157F0((int)this, a2, (float *)v17, (int)v7, 1);
      --v6;
    }
    while ( v6 );
  }
  else
  {
    v10 = off_1066C8C4[(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                         dword_106B31E4,
                         0,
                         0)];
    v9 = sub_1014AE30((float *)v17, 0.0, 360.0);
    return sub_103157F0((int)this, a2, v9, (int)v10, 0);
  }
  return result;
}
