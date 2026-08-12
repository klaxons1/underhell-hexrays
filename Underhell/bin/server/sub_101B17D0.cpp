int __thiscall sub_101B17D0(int this, int a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  bool v7; // zf
  double v8; // st4
  double v9; // st3
  double v10; // rt2
  double v11; // st6
  double v12; // st7
  double v13; // st5
  char v15[48]; // [esp+Ch] [ebp-7Ch] BYREF
  float v16; // [esp+3Ch] [ebp-4Ch]
  float v17; // [esp+40h] [ebp-48h]
  float v18; // [esp+44h] [ebp-44h]
  float v19; // [esp+48h] [ebp-40h]
  float v20; // [esp+4Ch] [ebp-3Ch]
  float v21; // [esp+50h] [ebp-38h]
  float v22; // [esp+54h] [ebp-34h]
  float v23; // [esp+58h] [ebp-30h]
  bool v24; // [esp+5Ch] [ebp-2Ch]
  float v25; // [esp+60h] [ebp-28h]
  float v26; // [esp+64h] [ebp-24h]
  float v27; // [esp+68h] [ebp-20h]
  float v28; // [esp+6Ch] [ebp-1Ch]
  float v29[3]; // [esp+70h] [ebp-18h] BYREF
  int v30; // [esp+7Ch] [ebp-Ch] BYREF
  float v31; // [esp+80h] [ebp-8h]
  float v32; // [esp+84h] [ebp-4h]

  sub_10422700(v15);
  v16 = 0.0;
  v17 = 0.0;
  v4 = *(_DWORD *)(this + 248);
  v18 = 0.0;
  v5 = *(_DWORD *)(this + 252);
  v26 = 0.0;
  v25 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v6 = *(float *)(this + 820);
  v24 = (v4 & 4) == 0;
  v20 = v6 * 0.45454544;
  v21 = 0.45454544 * *(float *)(this + 824);
  v22 = *(float *)(a3 + 36);
  v23 = *(float *)(a3 + 40);
  v19 = 1.0;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)&v30 = *(float *)(this + 864) - *(float *)(this + 580);
  v31 = *(float *)(this + 868) - *(float *)(this + 584);
  v32 = *(float *)(this + 872) - *(float *)(this + 588);
  off_10689714();
  sub_1025F3D0((int)&v30, 0.0020000001);
  sub_101B02E0(v15, *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 28), (int)&v30);
  v7 = (*(_BYTE *)(this + 248) & 2) == 0;
  v27 = *(float *)(this + 876);
  if ( !v7 )
  {
    (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(a3 + 28) + 188))(*(_DWORD *)(a3 + 28), v29, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = *(float *)(this + 588) * v32 + *(float *)(this + 584) * v31 + *(float *)&v30 * *(float *)(this + 580);
    v9 = *(float *)(this + 864) * *(float *)&v30 + v31 * *(float *)(this + 868) + *(float *)(this + 872) * v32;
    if ( v9 < v8 )
    {
      v10 = v9;
      v9 = v8;
      v8 = v10;
    }
    v11 = v9;
    v12 = v32 * v29[2] + *(float *)&v30 * v29[0] + v31 * v29[1];
    if ( v8 <= v12 )
    {
      if ( v12 > v9 )
        v11 = v12;
      v13 = v8;
    }
    else
    {
      v13 = v12;
    }
    v25 = v13 - v12;
    v26 = v11 - v12;
  }
  return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, char *))(*(_DWORD *)dword_106BAFF4 + 72))(
           dword_106BAFF4,
           *(_DWORD *)(a3 + 24),
           *(_DWORD *)(a3 + 28),
           a2,
           v15);
}
