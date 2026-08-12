void __thiscall sub_1027B490(int this)
{
  float *v2; // edi
  int v3; // eax
  const char *v4; // eax
  int v5; // eax
  int *v6; // ecx
  int v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // eax
  int v16; // eax
  int v17; // eax
  float v18; // [esp+50h] [ebp-A4h]
  float v19; // [esp+50h] [ebp-A4h]
  float v20; // [esp+50h] [ebp-A4h]
  float v21[3]; // [esp+60h] [ebp-94h] BYREF
  float v22[3]; // [esp+6Ch] [ebp-88h] BYREF
  float v23[3]; // [esp+78h] [ebp-7Ch] BYREF
  _DWORD v24[13]; // [esp+84h] [ebp-70h] BYREF
  int v25; // [esp+B8h] [ebp-3Ch]
  int v26; // [esp+BCh] [ebp-38h]
  int v27; // [esp+C0h] [ebp-34h]
  int v28; // [esp+C4h] [ebp-30h]
  float v29; // [esp+C8h] [ebp-2Ch]
  int v30; // [esp+CCh] [ebp-28h]
  int v31; // [esp+D0h] [ebp-24h]
  __int16 v32; // [esp+D4h] [ebp-20h]
  bool v33; // [esp+D7h] [ebp-1Dh]
  __int16 v34; // [esp+D8h] [ebp-1Ch]
  float v35; // [esp+DCh] [ebp-18h] BYREF
  float v36; // [esp+E0h] [ebp-14h]
  int v37; // [esp+E4h] [ebp-10h]
  float v38; // [esp+E8h] [ebp-Ch]
  double v39; // [esp+ECh] [ebp-8h] BYREF

  v2 = (float *)sub_100D1940((_DWORD *)this);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v2 + 320))(v2) )
  {
    if ( *(int *)(this + 1200) > 0 )
    {
      ++*(_DWORD *)(this + 1372);
      v4 = *(const char **)(this + 92);
      if ( !v4 )
        v4 = String;
      (*(void (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v2, 1, v4);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132))(this, 1, 0.0);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v2 + 1116))(v2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 181);
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)v2 + 1300))(v2, 5);
      v39 = *(float *)(dword_106B31C8 + 12) + 0.75;
      sub_100D2DA0((float *)(this + 1132), &v39);
      v39 = *(float *)(dword_106B31C8 + 12) + 0.75;
      sub_1016A120((float *)(this + 1136), &v39);
      v5 = *(_DWORD *)(this + 1200) - 1;
      HIDWORD(v39) = v5;
      if ( *(_DWORD *)(this + 1200) != v5 )
      {
        v38 = *(float *)&this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(this + 24);
          if ( v6 )
          {
            sub_100194B0(v6, this + 1200 - LOWORD(v38));
            v5 = HIDWORD(v39);
          }
        }
        *(_DWORD *)(this + 1200) = v5;
      }
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v2 + 968))(v2, v23);
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v2 + 1504))(v2, v21, 1.0);
      v29 = 1.0;
      v7 = *(_DWORD *)(this + 1192);
      *(float *)&v24[1] = v23[0];
      v26 = 0;
      v30 = 0;
      *(float *)&v24[2] = v23[1];
      v28 = 0;
      v32 = 1;
      *(float *)&v24[3] = v23[2];
      v27 = 0;
      v31 = 0;
      *(float *)&v24[4] = v21[0];
      v25 = 0;
      v34 = 0;
      *(float *)&v24[5] = v21[1];
      v33 = 0;
      v24[0] = 1;
      *(float *)&v24[6] = v21[2];
      v24[11] = v7;
      v24[12] = 0;
      *(float *)&v24[7] = flt_106F1CA8;
      *(float *)&v24[8] = flt_106F1CAC;
      *(float *)&v24[9] = flt_106F1CB0;
      *(float *)&v24[10] = 56755.84;
      v26 = *(_DWORD *)(dword_106D0FAC + 48);
      v30 = 0;
      v28 = 0;
      v33 = *(_DWORD *)(sub_100D0CC0((__int16 *)this) + 52) != 0;
      v25 = *(_DWORD *)(sub_100D0CC0((__int16 *)this) + 52);
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v2 + 432))(v2, v24);
      v2[1043] = *(float *)(dword_106B31C8 + 12) + 0.5;
      v8 = *(float *)(sub_100D0CC0((__int16 *)this) + 8);
      v9 = *(_DWORD *)dword_106B31E4;
      v38 = v8;
      HIDWORD(v39) = v9 + 4;
      v18 = *(float *)(sub_100D0CC0((__int16 *)this) + 20);
      v10 = sub_100D0CC0((__int16 *)this);
      v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)HIDWORD(v39))(
              dword_106B31E4,
              *(float *)(v10 + 16),
              LODWORD(v18));
      v22[0] = v38;
      v22[1] = v11;
      v22[2] = 0.0;
      sub_100F7A60(v2, v22);
      v35 = v2[182];
      v36 = v2[183];
      v37 = *((_DWORD *)v2 + 184);
      HIDWORD(v39) = *(_DWORD *)dword_106B31E4 + 4;
      v19 = *(float *)(sub_100D0CC0((__int16 *)this) + 28);
      v12 = sub_100D0CC0((__int16 *)this);
      v38 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)HIDWORD(v39))(
              dword_106B31E4,
              *(float *)(v12 + 24),
              LODWORD(v19));
      HIDWORD(v39) = *(_DWORD *)dword_106B31E4 + 4;
      v20 = *(float *)(sub_100D0CC0((__int16 *)this) + 36);
      v13 = sub_100D0CC0((__int16 *)this);
      v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)HIDWORD(v39))(
              dword_106B31E4,
              *(float *)(v13 + 32),
              LODWORD(v20));
      *((float *)&v39 + 1) = v14;
      if ( *((_BYTE *)v2 + 2272) )
      {
        v15 = sub_100D0CC0((__int16 *)this);
        v38 = *(float *)(v15 + 40) * v38;
        v16 = sub_100D0CC0((__int16 *)this);
        v14 = *(float *)(v16 + 40) * *((float *)&v39 + 1);
      }
      v35 = v35 + v38;
      v36 = v36 + v14;
      if ( 0.0 != v38 || 0.0 != v14 )
        sub_101E1CC0((int)v2, &v35, 0);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v17 = sub_100D1940((_DWORD *)this);
      sub_1023D4B0(1, (float *)(this + 580), 600, 0.2, v17, 0, 0);
      if ( !*(_DWORD *)(this + 1200) && sub_100CF5D0(v2, *(_DWORD *)(this + 1192)) <= 0 )
        sub_101E8F80((int)v2, (int)"!HEV_AMO0", 0, 0);
    }
    else
    {
      v3 = *(_DWORD *)this;
      if ( *(_BYTE *)(this + 1146) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(v3 + 1132))(this, 0, 0.0);
        v39 = 0.15;
        sub_100D2DA0((float *)(this + 1132), &v39);
      }
      else
      {
        (*(void (__thiscall **)(int))(v3 + 1064))(this);
      }
    }
  }
}
