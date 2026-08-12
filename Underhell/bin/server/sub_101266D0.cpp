int __thiscall sub_101266D0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  float *v4; // edi
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // eax
  int v10; // ecx
  double v11; // st7
  double v12; // st4
  double v13; // st7
  double v14; // st6
  bool v15; // zf
  const char *v16; // ebx
  const char *v17; // eax
  int result; // eax
  float v19; // [esp+10h] [ebp-C0h]
  float v20; // [esp+10h] [ebp-C0h]
  _BYTE v21[12]; // [esp+1Ch] [ebp-B4h] BYREF
  int v22; // [esp+28h] [ebp-A8h]
  float v23; // [esp+2Ch] [ebp-A4h]
  float v24; // [esp+30h] [ebp-A0h]
  float v25; // [esp+48h] [ebp-88h]
  float v26[3]; // [esp+70h] [ebp-60h] BYREF
  _BYTE v27[12]; // [esp+7Ch] [ebp-54h] BYREF
  float v28[3]; // [esp+A0h] [ebp-30h] BYREF
  int v29; // [esp+ACh] [ebp-24h] BYREF
  float v30; // [esp+B0h] [ebp-20h]
  float v31; // [esp+B4h] [ebp-1Ch]
  float v32; // [esp+B8h] [ebp-18h]
  float v33; // [esp+BCh] [ebp-14h]
  float v34; // [esp+C0h] [ebp-10h]
  float v35; // [esp+C4h] [ebp-Ch]
  float v36; // [esp+C8h] [ebp-8h]
  float v37; // [esp+CCh] [ebp-4h]
  int savedregs; // [esp+D0h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 876);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 876) & 0xFFF) + 1], v3[1] != v2 >> 12) || !*v3 )
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  v19 = *(float *)(this + 816) + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v19, 0);
  sub_10125A30(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = (float *)(this + 580);
  v32 = *(float *)(this + 852) - *(float *)(this + 580);
  v33 = *(float *)(this + 856) - *(float *)(this + 584);
  v34 = *(float *)(this + 860) - *(float *)(this + 588);
  off_10689714();
  v26[0] = v32;
  v26[1] = v33;
  v26[2] = v34;
  sub_10421D80(v26, v27);
  v5 = sub_10022E00(v26, (float *)(this + 840), *(float *)(this + 868));
  v6 = *v5;
  v32 = *v5;
  v7 = v5[1];
  v33 = v5[1];
  v8 = v5[2];
  v9 = *(_DWORD *)(this + 252) >> 11;
  v34 = v8;
  if ( *(_BYTE *)(this + 872) )
  {
    v35 = v6 * 8192.0;
    v36 = v7 * 8192.0;
    v37 = 8192.0 * v8;
    if ( (v9 & 1) != 0 )
      sub_100DAE60(this);
    v10 = *(_DWORD *)(this + 252) >> 11;
    v28[0] = *v4 + v35;
    v28[1] = *(float *)(this + 584) + v36;
    v28[2] = *(float *)(this + 588) + v37;
    if ( (v10 & 1) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v28, 1174421507, this, 0, (int)v21);
    if ( 1.0 != v25 )
      (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)this + 436))(this, v21, 2);
    v29 = v22;
    v30 = v23;
    v11 = v24;
  }
  else
  {
    v12 = v6 * *(float *)(this + 864);
    v13 = *(float *)(this + 864);
    v35 = v12;
    v36 = v7 * v13;
    v37 = v13 * v8;
    if ( (v9 & 1) != 0 )
      sub_100DAE60(this);
    v14 = *(float *)(this + 584) + v36;
    v11 = *(float *)(this + 588) + v37;
    *(float *)&v29 = *v4 + v35;
    v30 = v14;
  }
  v15 = *(_DWORD *)(this + 824) == 0;
  v31 = v11;
  if ( v15 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_102651C0(this + 580, (int)&v29, 0, -1, 5000.0, 1, 0, 0);
  }
  else
  {
    v16 = *(const char **)(this + 824);
    if ( !v16 )
      v16 = String;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_102651C0(this + 580, (int)&v29, 0, -1, 5000.0, 1, (int)v16, 0);
  }
  v17 = *(const char **)(this + 820);
  if ( !v17 )
    v17 = String;
  result = sub_1023C380((int)v17, 0.0, 0);
  v15 = (*(_DWORD *)(this + 832))-- == 1;
  if ( v15 )
  {
    sub_101272D0(this);
    v20 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            *(float *)(this + 808),
            *(float *)(this + 812))
        + *(float *)(dword_106B31C8 + 12);
    return sub_100EC4A0((int *)this, v20, 0);
  }
  return result;
}
