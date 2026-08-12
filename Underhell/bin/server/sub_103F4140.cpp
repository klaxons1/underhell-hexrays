void __thiscall sub_103F4140(int this)
{
  float *v2; // esi
  int v3; // eax
  const char *v4; // eax
  int v5; // eax
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  void (__thiscall *v9)(float *, _DWORD *); // edx
  float v10; // ecx
  double v11; // st7
  int v12; // eax
  _DWORD v13[20]; // [esp+60h] [ebp-8Ch] BYREF
  __int16 v14; // [esp+B0h] [ebp-3Ch]
  char v15; // [esp+B3h] [ebp-39h]
  __int16 v16; // [esp+B4h] [ebp-38h]
  float v17[3]; // [esp+B8h] [ebp-34h] BYREF
  float v18[3]; // [esp+C4h] [ebp-28h] BYREF
  int v19; // [esp+D0h] [ebp-1Ch]
  float v20; // [esp+D4h] [ebp-18h] BYREF
  float v21; // [esp+D8h] [ebp-14h]
  float v22; // [esp+DCh] [ebp-10h]
  float v23; // [esp+E0h] [ebp-Ch] BYREF
  double v24; // [esp+E4h] [ebp-8h] BYREF

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
      v24 = *(float *)(dword_106B31C8 + 12) + 0.75;
      sub_100D2DA0((float *)(this + 1132), &v24);
      v24 = *(float *)(dword_106B31C8 + 12) + 0.75;
      sub_1016A120((float *)(this + 1136), &v24);
      v5 = *(_DWORD *)(this + 1200) - 1;
      HIDWORD(v24) = v5;
      if ( *(_DWORD *)(this + 1200) != v5 )
      {
        v19 = this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(this + 24);
          if ( v6 )
          {
            sub_100194B0(v6, this + 1200 - v19);
            v5 = HIDWORD(v24);
          }
        }
        *(_DWORD *)(this + 1200) = v5;
      }
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v2 + 968))(v2, v18);
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v2 + 1504))(v2, v17, 1.0);
      *(float *)&v13[17] = 1.0;
      v7 = *(_DWORD *)(this + 1192);
      v8 = *(_DWORD *)v2;
      *(float *)&v13[1] = v18[0];
      v9 = *(void (__thiscall **)(float *, _DWORD *))(v8 + 432);
      v13[11] = v7;
      *(float *)&v13[2] = v18[1];
      *(float *)&v13[3] = v18[2];
      *(float *)&v13[4] = v17[0];
      v13[19] = 0;
      *(float *)&v13[5] = v17[1];
      v16 = 0;
      v15 = 0;
      *(float *)&v13[6] = v17[2];
      v13[0] = 1;
      memset(&v13[12], 0, 20);
      *(float *)&v13[7] = flt_106F1CA8;
      v13[18] = 0;
      *(float *)&v13[8] = flt_106F1CAC;
      v14 = 1;
      *(float *)&v13[9] = flt_106F1CB0;
      *(float *)&v13[10] = 56755.84;
      v9(v2, v13);
      v10 = v2[182];
      v2[1043] = *(float *)(dword_106B31C8 + 12) + 0.5;
      v20 = v10;
      v21 = v2[183];
      v22 = v2[184];
      HIDWORD(v24) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
      v20 = (double)SHIDWORD(v24) + v20;
      HIDWORD(v24) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
      v21 = (double)SHIDWORD(v24) + v21;
      v22 = 0.0;
      sub_101E1CC0((int)v2, &v20, 0);
      v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -2.0,
              2.0);
      v23 = -8.0;
      *(float *)&v24 = v11;
      *((float *)&v24 + 1) = 0.0;
      sub_100F7A60(v2, &v23);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v12 = sub_100D1940((_DWORD *)this);
      sub_1023D4B0(1, (float *)(this + 580), 600, 0.2, v12, 0, 0);
      if ( !*(_DWORD *)(this + 1200) && sub_100CF5D0(v2, *(_DWORD *)(this + 1192)) <= 0 )
        sub_101E8F80((int)v2, (int)"!HEV_AMO0", 0, 0);
    }
    else
    {
      v3 = *(_DWORD *)this;
      if ( *(_BYTE *)(this + 1146) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(v3 + 1132))(this, 0, 0.0);
        v24 = 0.15;
        sub_100D2DA0((float *)(this + 1132), &v24);
      }
      else
      {
        (*(void (__thiscall **)(int))(v3 + 1064))(this);
      }
    }
  }
}
