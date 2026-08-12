int __thiscall sub_1040AD70(int this)
{
  int v2; // ebx
  char *v3; // esi
  int v4; // ebx
  float *v5; // esi
  int v6; // eax
  double v7; // st6
  double v8; // st7
  long double v9; // st7
  float v11; // [esp+30h] [ebp-74h] BYREF
  float v12; // [esp+34h] [ebp-70h]
  float v13; // [esp+38h] [ebp-6Ch]
  float v14; // [esp+3Ch] [ebp-68h]
  float v15; // [esp+40h] [ebp-64h]
  float v16; // [esp+44h] [ebp-60h]
  float v17; // [esp+48h] [ebp-5Ch]
  float v18; // [esp+4Ch] [ebp-58h]
  float v19; // [esp+50h] [ebp-54h]
  float v20; // [esp+54h] [ebp-50h]
  float v21; // [esp+58h] [ebp-4Ch]
  float v22; // [esp+5Ch] [ebp-48h]
  int v23; // [esp+60h] [ebp-44h]
  int v24; // [esp+64h] [ebp-40h]
  float v25; // [esp+68h] [ebp-3Ch]
  float v26; // [esp+6Ch] [ebp-38h]
  float v27; // [esp+70h] [ebp-34h]
  int v28; // [esp+74h] [ebp-30h]
  __int16 v29; // [esp+78h] [ebp-2Ch]
  int v30; // [esp+7Ch] [ebp-28h]
  int v31; // [esp+80h] [ebp-24h]
  int v32; // [esp+84h] [ebp-20h]
  char v33; // [esp+88h] [ebp-1Ch]
  float v34; // [esp+90h] [ebp-14h]
  float v35; // [esp+94h] [ebp-10h]
  float v36; // [esp+98h] [ebp-Ch]
  int v37; // [esp+9Ch] [ebp-8h]
  int v38; // [esp+A0h] [ebp-4h]

  sub_101AB0C0(this);
  v2 = 3;
  do
  {
    v3 = (char *)sub_101811E0("sparktrail", -1);
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 76))(v3, this);
    sub_10260750(v3);
    --v2;
  }
  while ( v2 );
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = 0;
  v5 = (float *)(this + 580);
  sub_101AB000(
    "striderbuster_explode_core",
    *(float *)(this + 580),
    *(float *)(this + 584),
    *(float *)(this + 588),
    *(float *)(this + 704),
    *(float *)(this + 708),
    *(float *)(this + 712),
    0);
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v23 = 0;
  v14 = 0.0;
  v24 = 0;
  v15 = 0.0;
  v28 = 0;
  v16 = 0.0;
  v29 = 0;
  v17 = 0.0;
  v30 = 0;
  v18 = 0.0;
  v31 = 0;
  v19 = 0.0;
  v32 = 0;
  v20 = 0.0;
  v33 = 0;
  v21 = 0.0;
  v38 = 0;
  v22 = 0.0;
  v25 = 1.0;
  v26 = 0.0;
  v27 = 0.0;
  do
  {
    v37 = sub_10219A30();
    v34 = (double)v37 * 0.000030518509 * 64.0 - 32.0;
    v37 = sub_10219A30();
    v35 = (double)v37 * 0.000030518509 * 64.0 - 32.0;
    v37 = sub_10219A30();
    v6 = *(_DWORD *)(this + 252) >> 11;
    v36 = (double)v37 * 0.000030518509 * 64.0 - 32.0;
    if ( (v6 & 1) != 0 )
      sub_100DAE60(this);
    v7 = *(float *)(this + 584);
    v8 = *(float *)(this + 588) + v36;
    v11 = v34 + *v5;
    v12 = v7 + v35;
    v13 = v8;
    v9 = (double)v38 * 1.0471976;
    v17 = cos(v9);
    v18 = sin(v9);
    v19 = 0.0;
    v37 = ((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 5) != 0) + 1;
    v25 = (float)v37;
    sub_1028E890((int)"StriderBlood", (int)&v11);
    v38 = ++v4;
  }
  while ( v4 < 6 );
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10261B70((float *)(this + 580), 20.0, 150.0, 1.0, 1250.0, 0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v11 = *v5;
  v12 = *(float *)(this + 584);
  v13 = *(float *)(this + 588);
  return sub_1028E890((int)"cball_explode", (int)&v11);
}
