int __thiscall sub_10409B80(int this)
{
  int result; // eax
  float *v3; // esi
  int v4; // ecx
  int *v5; // ecx
  float v6; // ecx
  int *v7; // ecx
  float v8; // eax
  int v9; // edx
  float *v10; // eax
  double v11; // st7
  double v12; // st7
  int v13; // eax
  void (__thiscall *v14)(float *, _DWORD *); // edx
  double v15; // st7
  int v16; // eax
  const char *v17; // edi
  _DWORD v18[20]; // [esp+4Ch] [ebp-84h] BYREF
  __int16 v19; // [esp+9Ch] [ebp-34h]
  char v20; // [esp+9Fh] [ebp-31h]
  __int16 v21; // [esp+A0h] [ebp-30h]
  float v22[3]; // [esp+A4h] [ebp-2Ch] BYREF
  float v23[3]; // [esp+B0h] [ebp-20h] BYREF
  float v24[3]; // [esp+BCh] [ebp-14h] BYREF
  float v25; // [esp+C8h] [ebp-8h]
  float v26; // [esp+CCh] [ebp-4h]

  result = sub_100D1940((_DWORD *)this);
  v3 = (float *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132))(this, 1, 0.0);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v3 + 1116))(v3);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 181);
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)v3 + 1300))(v3, 5);
      sub_100D18C0(this);
      v4 = *(_DWORD *)(this + 1132);
      v26 = *(float *)(dword_106B31C8 + 12) + 0.0;
      if ( v4 != LODWORD(v26) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v5 = *(int **)(this + 24);
          if ( v5 )
            sub_100194B0(v5, 1132);
        }
        *(float *)(this + 1132) = v26;
      }
      LODWORD(v6) = *(_DWORD *)(this + 1200) - 1;
      v26 = v6;
      if ( *(_DWORD *)(this + 1200) != LODWORD(v6) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v7 = *(int **)(this + 24);
          if ( v7 )
            sub_100194B0(v7, 1200);
          v6 = v26;
        }
        *(float *)(this + 1200) = v6;
      }
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v3 + 968))(v3, v24);
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v3 + 1504))(v3, v22, 1.0);
      v3[1043] = *(float *)(dword_106B31C8 + 12) + 1.0;
      v8 = *(float *)(this + 1192);
      v26 = *(float *)(dword_106DF3E4 + 48);
      v9 = *(_DWORD *)this;
      v25 = v8;
      v10 = (float *)(*(int (__thiscall **)(int))(v9 + 1100))(this);
      *(float *)&v18[17] = 1.0;
      *(float *)&v18[1] = v24[0];
      *(float *)v18 = v26;
      *(float *)&v18[2] = v24[1];
      *(float *)&v18[11] = v25;
      *(float *)&v18[3] = v24[2];
      *(float *)&v18[4] = v22[0];
      v18[19] = 0;
      *(float *)&v18[5] = v22[1];
      v21 = 0;
      v20 = 0;
      *(float *)&v18[6] = v22[2];
      memset(&v18[12], 0, 16);
      *(float *)&v18[7] = *v10;
      v18[18] = 0;
      v11 = v10[1];
      v18[16] = 1;
      *(float *)&v18[8] = v11;
      v19 = 1;
      v12 = v10[2];
      v13 = *(_DWORD *)v3;
      *(float *)&v18[9] = v12;
      v14 = *(void (__thiscall **)(float *, _DWORD *))(v13 + 432);
      *(float *)&v18[10] = 56755.84;
      v14(v3, v18);
      v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -2.0,
              -1.0);
      v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -2.0,
              2.0);
      v23[0] = v25;
      v23[1] = v15;
      v23[2] = 0.0;
      sub_100F7A60(v3, v23);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v16 = sub_100D1940((_DWORD *)this);
      sub_1023D4B0(1, (float *)(this + 580), 1700, 0.2, v16, 0, 0);
      if ( *(_DWORD *)(this + 1200) )
        goto LABEL_22;
      if ( sub_100CF5D0(v3, *(_DWORD *)(this + 1192)) <= 0 )
        sub_101E8F80((int)v3, (int)"!HEV_AMO0", 0, 0);
      if ( *(_DWORD *)(this + 1200) )
LABEL_22:
        *(_BYTE *)(this + 1392) = 1;
      ++*(_DWORD *)(this + 1372);
      v17 = *(const char **)(this + 92);
      if ( !v17 )
        v17 = String;
      return (*(int (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
               off_10627F88,
               v3,
               1,
               v17);
    }
  }
  return result;
}
