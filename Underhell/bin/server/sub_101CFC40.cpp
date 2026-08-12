int __thiscall sub_101CFC40(_DWORD *this, int a2)
{
  bool v3; // zf
  int *v4; // ecx
  int v5; // edi
  float v6; // edx
  float v7; // ecx
  float v8; // eax
  double v9; // st7
  float v10; // edx
  float v11; // ecx
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // st3
  double v16; // st7
  int v17; // eax
  unsigned int v18; // eax
  int v19; // edi
  float v20; // ecx
  float v21; // edx
  unsigned int v22; // eax
  int v23; // edi
  float v24; // ecx
  float v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // eax
  int *v28; // ecx
  _BYTE v30[4]; // [esp+8h] [ebp-78h] BYREF
  _DWORD v31[13]; // [esp+Ch] [ebp-74h] BYREF
  float v32; // [esp+40h] [ebp-40h]
  int v33; // [esp+4Ch] [ebp-34h]
  int v34; // [esp+54h] [ebp-2Ch]
  float v35; // [esp+5Ch] [ebp-24h] BYREF
  float v36; // [esp+60h] [ebp-20h]
  float v37; // [esp+64h] [ebp-1Ch]
  float v38; // [esp+68h] [ebp-18h] BYREF
  float v39; // [esp+6Ch] [ebp-14h]
  float v40; // [esp+70h] [ebp-10h]
  float v41; // [esp+74h] [ebp-Ch] BYREF
  float v42; // [esp+78h] [ebp-8h]
  float v43; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 628))(this) )
    return sub_100DC590((int)this, a2);
  if ( *(_DWORD *)(a2 + 64) == 1 && *(float *)(a2 + 52) > 300.0 )
  {
    sub_1001E4E0(v31, a2);
    v3 = *(_DWORD *)(dword_106DEAE4 + 48) == 0;
    v32 = v32 + 100.0;
    if ( v3 )
    {
      sub_101CE6F0((int)this, 12, (int)v31);
      sub_101CE6F0((int)this, 7, (int)v31);
      sub_101CE6F0((int)this, 9, (int)v31);
      sub_101CE6F0((int)this, 1, (int)v31);
      sub_101CE6F0((int)this, 3, (int)v31);
      sub_101CE6F0((int)this, 6, (int)v31);
    }
    else
    {
      v33 = 64;
      sub_101CE6F0((int)this, 20000, (int)v31);
    }
  }
  if ( *(_DWORD *)(a2 + 40) != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1],
        off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == *(_DWORD *)(a2 + 40) >> 12)
    && (v5 = *v4) != 0 )
  {
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(*v4);
    v6 = *(float *)(v5 + 588);
    v7 = *(float *)(v5 + 584);
    v38 = *(float *)(v5 + 580);
    v8 = *(float *)(a2 + 16);
    v40 = v6;
    v9 = v6 + 64.0;
    v10 = *(float *)(a2 + 24);
    v39 = v7;
    v11 = *(float *)(a2 + 20);
    v41 = v8;
    v12 = v8 - v38;
    v42 = v11;
    v43 = v10;
    v13 = v11 - v39;
    v14 = v10 - v9;
    v15 = (v13 + v12) * 0.0 + v14;
    v35 = 0.0 * v15 - v12;
    v36 = 0.0 * v15 - v13;
    v16 = v15 + v15 - v14;
  }
  else
  {
    v8 = *(float *)(a2 + 16);
    v11 = *(float *)(a2 + 20);
    v35 = 0.0;
    v10 = *(float *)(a2 + 24);
    v36 = 0.0;
    v16 = 1.0;
  }
  v38 = v8;
  v37 = v16;
  v17 = this[465];
  v39 = v11;
  v40 = v10;
  sub_10265D10(&v38, &v35, v17, 1);
  v18 = *(_DWORD *)(a2 + 40);
  if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
    sub_100DAE60(v19);
  if ( *(float *)(v19 + 580) != 0.0 || *(float *)(v19 + 584) != 0.0 || *(float *)(v19 + 588) != 0.0 )
  {
    v20 = *(float *)(a2 + 16);
    v21 = *(float *)(a2 + 20);
    v43 = *(float *)(a2 + 24);
    v22 = *(_DWORD *)(a2 + 40);
    v41 = v20;
    v42 = v21;
    if ( v22 == -1 || off_1061BE18[4 * (v22 & 0xFFF) + 2] != v22 >> 12 )
      v23 = 0;
    else
      v23 = off_1061BE18[4 * (v22 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v23 + 252) & 0x800) != 0 )
      sub_100DAE60(v23);
    v24 = *(float *)(v23 + 580);
    v25 = *(float *)(v23 + 584);
    v37 = *(float *)(v23 + 588);
    v35 = v24;
    v36 = v25;
    v38 = v41 - v24;
    v39 = v42 - v25;
    v40 = v43 - (v37 + 64.0);
    off_10689714();
    v35 = v38 * 128.0 + v41;
    v36 = v39 * 128.0 + v42;
    v37 = 128.0 * v40 + v43;
    sub_1002A5F0((int)&savedregs, a2, &v41, &v35, 1174421507, (int)this, 0, (int)v30);
    if ( v34 )
      (*(void (__thiscall **)(_DWORD *, _BYTE *, const char *))(*this + 304))(this, v30, "Blood");
  }
  v26 = this[1258];
  if ( v26 == -1
    || off_1061BE18[4 * (this[1258] & 0xFFF) + 2] != v26 >> 12
    || !off_1061BE18[4 * (this[1258] & 0xFFF) + 1] )
  {
    return sub_100DC590((int)this, a2);
  }
  sub_1001E4E0(v31, a2);
  v27 = this[1258];
  v33 |= 0x400000u;
  if ( v27 == -1 || off_1061BE18[4 * (v27 & 0xFFF) + 2] != v27 >> 12 )
    return (*(int (__stdcall **)(_DWORD *))(MEMORY[0] + 256))(v31);
  v28 = &off_1061BE18[4 * (v27 & 0xFFF) + 1];
  return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)*v28 + 256))(*v28, v31);
}
