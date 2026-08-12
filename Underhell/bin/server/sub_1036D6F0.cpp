void __thiscall sub_1036D6F0(_BYTE *this, int *a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax
  float *v6; // edi
  double v7; // st7
  float *v8; // edi
  float *v9; // edi
  _DWORD *v10; // eax
  float *v11; // eax
  double v12; // st7
  int v13; // eax
  float *v14; // edi
  double v15; // st7
  float *v16; // edi
  float v17; // [esp+0h] [ebp-38h]
  float v18; // [esp+0h] [ebp-38h]
  float v19[3]; // [esp+14h] [ebp-24h] BYREF
  float v20[3]; // [esp+20h] [ebp-18h] BYREF
  float v21[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = *a2;
  v3 = (int)this;
  if ( *a2 < 74 )
    goto LABEL_22;
  if ( v2 <= 75 )
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this) )
    {
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
      v14 = (float *)v13;
      if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
        sub_100DAE60(v13);
      v19[0] = v14[145] - *(float *)(v3 + 580);
      v19[1] = v14[146] - *(float *)(v3 + 584);
      v15 = v14[147];
      v16 = *(float **)(v3 + 2604);
      v19[2] = v15 - *(float *)(v3 + 588);
      v18 = sub_10265030(v19);
      sub_10078210(v16, v18, -2.0);
    }
    this = (_BYTE *)v3;
    goto LABEL_22;
  }
  if ( v2 != 150 )
  {
LABEL_22:
    sub_1036CDE0(this, (int)a2);
    return;
  }
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this) )
  {
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
    v6 = (float *)v5;
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    v21[0] = v6[145] - *(float *)(v3 + 580);
    v21[1] = v6[146] - *(float *)(v3 + 584);
    v7 = v6[147];
    v8 = *(float **)(v3 + 2604);
    v21[2] = v7 - *(float *)(v3 + 588);
    v17 = sub_10265030(v21);
    sub_10078210(v8, v17, -2.0);
  }
  if ( (*(_BYTE *)(v3 + 256) & 1) != 0 )
  {
    *(float *)(v3 + 552) = 1.0;
    sub_100E0970(v3, v4, 3, 0);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3) )
    {
      v9 = (float *)sub_10019640((_DWORD *)v3);
      v10 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
      v11 = (float *)sub_10019640(v10);
      v20[0] = *v11 - *v9;
      v20[1] = v11[1] - v9[1];
      v12 = v11[2] - v9[2];
      v20[2] = v12;
      sub_100D7A40(v20);
      if ( v12 > 256.0 )
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 1312))(v3, String);
    }
    sub_10027CD0((_DWORD *)v3, 0);
  }
}
