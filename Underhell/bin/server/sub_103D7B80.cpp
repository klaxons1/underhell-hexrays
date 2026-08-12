void __thiscall sub_103D7B80(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edx
  double v6; // st7
  float v7; // [esp+4h] [ebp-9Ch]
  float v8; // [esp+Ch] [ebp-94h]
  float v9; // [esp+10h] [ebp-90h]
  __int64 v10; // [esp+10h] [ebp-90h]
  float v11; // [esp+14h] [ebp-8Ch]
  int v12; // [esp+24h] [ebp-7Ch] BYREF
  float v13; // [esp+28h] [ebp-78h]
  float v14; // [esp+2Ch] [ebp-74h]
  float v15; // [esp+30h] [ebp-70h]
  float v16; // [esp+34h] [ebp-6Ch]
  float v17; // [esp+38h] [ebp-68h]
  float v18; // [esp+3Ch] [ebp-64h]
  float v19; // [esp+40h] [ebp-60h]
  float v20; // [esp+44h] [ebp-5Ch]
  float v21; // [esp+48h] [ebp-58h]
  float v22; // [esp+4Ch] [ebp-54h]
  float v23; // [esp+50h] [ebp-50h]
  int v24; // [esp+54h] [ebp-4Ch]
  int v25; // [esp+58h] [ebp-48h]
  float v26; // [esp+5Ch] [ebp-44h]
  float v27; // [esp+60h] [ebp-40h]
  float v28; // [esp+64h] [ebp-3Ch]
  int v29; // [esp+68h] [ebp-38h]
  __int16 v30; // [esp+6Ch] [ebp-34h]
  int v31; // [esp+70h] [ebp-30h]
  int v32; // [esp+74h] [ebp-2Ch]
  int v33; // [esp+78h] [ebp-28h]
  char v34; // [esp+7Ch] [ebp-24h]
  int v35[3]; // [esp+84h] [ebp-1Ch] BYREF
  int v36; // [esp+90h] [ebp-10h] BYREF
  float v37; // [esp+94h] [ebp-Ch]
  float v38; // [esp+98h] [ebp-8h]
  int v39; // [esp+9Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 1124);
  if ( v2 != -1 )
  {
    sub_100BD6D0((void *)this, v2, (int)&v36, 0, 0, 0);
    v3 = *(_DWORD *)(this + 24);
    *(float *)&v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
    v24 = 0;
    v16 = 0.0;
    v25 = 0;
    v17 = 0.0;
    v29 = 0;
    v18 = 0.0;
    v30 = 0;
    v19 = 0.0;
    v31 = 0;
    v20 = 0.0;
    v32 = 0;
    v21 = 0.0;
    v33 = 0;
    v22 = 0.0;
    v34 = 0;
    v23 = 0.0;
    v26 = 1.0;
    v27 = 0.0;
    v28 = 0.0;
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3);
    v12 = v36;
    v13 = v37;
    v25 = v4;
    v14 = v38;
    v26 = (double)*(int *)(this + 1136) * *(float *)(this + 864);
    sub_1028E890((int)"ThumperDust", (int)&v12);
    v9 = (double)*(int *)(this + 1164) * *(float *)(this + 864);
    v8 = *(float *)(this + 864) * 0.5;
    v7 = *(float *)(this + 864) * 10.0;
    sub_10261B70((float *)&v36, v7, *(float *)(this + 864), v8, v9, 0, 0);
  }
  sub_1023C380((_DWORD *)this, (int)"coast.thumper_dust", 0.0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_1023D4B0(
    256,
    (float *)(this + 580),
    (int)((double)*(int *)(this + 1164) * *(float *)(this + 864)),
    1.5,
    this,
    0,
    0);
  if ( *(_DWORD *)(dword_106ED164 + 48) )
  {
    v5 = *(_DWORD *)(this + 252);
    v39 = *(_DWORD *)(this + 1164);
    v6 = (double)v39;
    v39 = -v39;
    *(float *)&v36 = v6;
    v37 = v6;
    v38 = v6;
    *(float *)v35 = (float)v39;
    v35[1] = v35[0];
    v35[2] = v35[0];
    if ( (v5 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BB20(this + 580, (int)v35, (int)&v36, 255, 64, 64, 255, 1.5);
  }
  if ( *(float *)(this + 864) >= 0.69999999 )
  {
    v11 = 0.0;
    if ( *(_DWORD *)(this + 1136) == 128 )
      sub_1023C380((_DWORD *)this, (int)"coast.thumper_hit", v11, 0);
    else
      sub_1023C380((_DWORD *)this, (int)"coast.thumper_large_hit", v11, 0);
    HIDWORD(v10) = this;
    LODWORD(v10) = this;
    sub_1010DD80((_DWORD *)(this + 1140), v10, 0.0);
  }
}
