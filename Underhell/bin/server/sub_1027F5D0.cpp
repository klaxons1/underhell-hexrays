int __thiscall sub_1027F5D0(int this)
{
  int result; // eax
  float *v3; // edi
  int v4; // ecx
  int *v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int v8; // eax
  int v9; // edx
  int (__thiscall *v10)(int); // edx
  float *v11; // eax
  double v12; // st7
  int v13; // eax
  int v14; // eax
  int v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // eax
  const char *v23; // esi
  float v24; // [esp+4Ch] [ebp-A0h]
  float v25; // [esp+4Ch] [ebp-A0h]
  float v26; // [esp+4Ch] [ebp-A0h]
  float v27; // [esp+4Ch] [ebp-A0h]
  float v28[3]; // [esp+5Ch] [ebp-90h] BYREF
  float v29[3]; // [esp+68h] [ebp-84h] BYREF
  float v30[3]; // [esp+74h] [ebp-78h] BYREF
  _DWORD v31[7]; // [esp+80h] [ebp-6Ch] BYREF
  float v32; // [esp+9Ch] [ebp-50h]
  float v33; // [esp+A0h] [ebp-4Ch]
  float v34; // [esp+A4h] [ebp-48h]
  float v35; // [esp+A8h] [ebp-44h]
  int v36; // [esp+ACh] [ebp-40h]
  int v37; // [esp+B0h] [ebp-3Ch]
  int v38; // [esp+B4h] [ebp-38h]
  int v39; // [esp+B8h] [ebp-34h]
  int v40; // [esp+BCh] [ebp-30h]
  int v41; // [esp+C0h] [ebp-2Ch]
  float v42; // [esp+C4h] [ebp-28h]
  int v43; // [esp+C8h] [ebp-24h]
  int v44; // [esp+CCh] [ebp-20h]
  __int16 v45; // [esp+D0h] [ebp-1Ch]
  bool v46; // [esp+D3h] [ebp-19h]
  __int16 v47; // [esp+D4h] [ebp-18h]
  float v48; // [esp+D8h] [ebp-14h] BYREF
  float v49; // [esp+DCh] [ebp-10h]
  int v50; // [esp+E0h] [ebp-Ch]
  int v51; // [esp+E4h] [ebp-8h]
  int v52; // [esp+E8h] [ebp-4h]

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
      *(float *)&v52 = *(float *)(dword_106B31C8 + 12) + 0.0;
      if ( v4 != v52 )
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
        *(float *)(this + 1132) = *(float *)&v52;
      }
      v6 = *(_DWORD *)(this + 1200) - 1;
      v52 = v6;
      if ( *(_DWORD *)(this + 1200) != v6 )
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
          v6 = v52;
        }
        *(_DWORD *)(this + 1200) = v6;
      }
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v3 + 968))(v3, v30);
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v3 + 1504))(v3, v28, 1.0);
      v3[1043] = *(float *)(dword_106B31C8 + 12) + 1.0;
      v8 = *(_DWORD *)this;
      v32 = 0.0;
      v31[0] = 1;
      v33 = 0.0;
      v37 = 4;
      v34 = 0.0;
      v39 = 0;
      v40 = 0;
      v35 = 8192.0;
      v43 = 0;
      v41 = 0;
      v44 = 0;
      v42 = 1.0;
      v45 = 1;
      v38 = 0;
      v47 = 0;
      v46 = 0;
      v9 = *(_DWORD *)(dword_106DF3E4 + 48);
      *(float *)&v31[1] = v30[0];
      v31[0] = v9;
      v10 = *(int (__thiscall **)(int))(v8 + 1100);
      *(float *)&v31[2] = v30[1];
      *(float *)&v31[3] = v30[2];
      *(float *)&v31[4] = v28[0];
      *(float *)&v31[5] = v28[1];
      *(float *)&v31[6] = v28[2];
      v11 = (float *)v10(this);
      v32 = *v11;
      v33 = v11[1];
      v12 = v11[2];
      v13 = *(_DWORD *)(this + 1192);
      v34 = v12;
      v36 = v13;
      v37 = 0;
      v35 = 56755.84;
      v39 = *(_DWORD *)(dword_106D1A5C + 48);
      v43 = 0;
      v41 = 0;
      LOBYTE(v45) = 1;
      v46 = *(_DWORD *)(sub_100D0CC0((__int16 *)this) + 52) != 0;
      v38 = *(_DWORD *)(sub_100D0CC0((__int16 *)this) + 52);
      v41 = 1;
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v3 + 432))(v3, v31);
      v52 = *(_DWORD *)dword_106B31E4 + 4;
      v24 = *(float *)(sub_100D0CC0((__int16 *)this) + 12);
      v14 = sub_100D0CC0((__int16 *)this);
      *(float *)&v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)v52)(
                         dword_106B31E4,
                         *(float *)(v14 + 8),
                         LODWORD(v24));
      v52 = *(_DWORD *)dword_106B31E4 + 4;
      v25 = *(float *)(sub_100D0CC0((__int16 *)this) + 20);
      v15 = sub_100D0CC0((__int16 *)this);
      v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)v52)(
              dword_106B31E4,
              *(float *)(v15 + 16),
              LODWORD(v25));
      v29[0] = *(float *)&v51;
      v29[1] = v16;
      v29[2] = 0.0;
      sub_100F7A60(v3, v29);
      v48 = v3[182];
      v49 = v3[183];
      v50 = *((_DWORD *)v3 + 184);
      v51 = *(_DWORD *)dword_106B31E4 + 4;
      v26 = *(float *)(sub_100D0CC0((__int16 *)this) + 28);
      v17 = sub_100D0CC0((__int16 *)this);
      *(float *)&v52 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)v51)(
                         dword_106B31E4,
                         *(float *)(v17 + 24),
                         LODWORD(v26));
      v51 = *(_DWORD *)dword_106B31E4 + 4;
      v27 = *(float *)(sub_100D0CC0((__int16 *)this) + 36);
      v18 = sub_100D0CC0((__int16 *)this);
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)v51)(
              dword_106B31E4,
              *(float *)(v18 + 32),
              LODWORD(v27));
      *(float *)&v51 = v19;
      if ( *((_BYTE *)v3 + 2272) )
      {
        v20 = sub_100D0CC0((__int16 *)this);
        *(float *)&v52 = *(float *)(v20 + 40) * *(float *)&v52;
        v21 = sub_100D0CC0((__int16 *)this);
        v19 = *(float *)(v21 + 40) * *(float *)&v51;
      }
      v48 = v48 + *(float *)&v52;
      v49 = v49 + v19;
      if ( 0.0 != *(float *)&v52 || 0.0 != v19 )
        sub_101E1CC0((int)v3, &v48, 0);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v22 = sub_100D1940((_DWORD *)this);
      sub_1023D4B0(1, (float *)(this + 580), 1700, 0.2, v22, 0, 0);
      if ( !*(_DWORD *)(this + 1200) && sub_100CF5D0(v3, *(_DWORD *)(this + 1192)) <= 0 )
        sub_101E8F80((int)v3, (int)"!HEV_AMO0", 0, 0);
      ++*(_DWORD *)(this + 1372);
      v23 = *(const char **)(this + 92);
      if ( !v23 )
        v23 = String;
      return (*(int (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
               off_10627F88,
               v3,
               1,
               v23);
    }
  }
  return result;
}
