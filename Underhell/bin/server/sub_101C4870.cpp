void __thiscall sub_101C4870(int this)
{
  float v2; // edx
  float v3; // eax
  int v4; // ecx
  float v5; // edx
  float v6; // eax
  char v7; // cl
  int v8; // ebx
  float *v9; // ebx
  int v10; // eax
  const char *v11; // eax
  int v12; // ebx
  const char *v13; // eax
  double v14; // st7
  float v15[3]; // [esp+4h] [ebp-20h] BYREF
  float v16[3]; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+1Ch] [ebp-8h]
  float *v18; // [esp+20h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 584);
  v3 = *(float *)(this + 588);
  v16[0] = *(float *)(this + 580);
  v4 = *(_DWORD *)(this + 252) >> 12;
  v16[1] = v2;
  v16[2] = v3;
  if ( (v4 & 1) != 0 )
    sub_100DAFD0(this);
  v5 = *(float *)(this + 476);
  v6 = *(float *)(this + 480);
  v15[2] = *(float *)(this + 484);
  v7 = 0;
  v8 = 0;
  v15[0] = v5;
  v15[1] = v6;
  v17 = 0;
  do
  {
    v9 = (float *)((char *)v15 + v8);
    v10 = *(_DWORD *)v9 & 0x7F800000;
    v18 = v9;
    if ( v10 == 2139095040 )
    {
      v11 = sub_10019630((_DWORD *)this);
      Msg("Got a NaN velocity on %s\n", v11);
      *v9 = 0.0;
      v7 = 1;
    }
    v12 = v17;
    if ( (*(_DWORD *)((_BYTE *)v16 + v17) & 0x7F800000) == 0x7F800000 )
    {
      v13 = sub_10019630((_DWORD *)this);
      Msg("Got a NaN origin on %s\n", v13);
      *(float *)((char *)v16 + v12) = 0.0;
      v7 = 1;
    }
    if ( *(float *)(dword_106B73D4 + 44) >= (double)*v18 )
    {
      v14 = -*(float *)(dword_106B73D4 + 44);
      if ( v14 > *v18 )
      {
        *v18 = v14;
        v7 = 1;
      }
    }
    else
    {
      *v18 = *(float *)(dword_106B73D4 + 44);
      v7 = 1;
    }
    v8 = v12 + 4;
    v17 = v8;
  }
  while ( v8 < 12 );
  if ( v7 )
  {
    sub_100E0D20(this, v16);
    sub_100DD660(this, v15);
  }
}
