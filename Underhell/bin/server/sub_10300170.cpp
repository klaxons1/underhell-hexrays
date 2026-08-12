char __usercall sub_10300170@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  double v5; // st7
  int *v6; // eax
  float *v7; // eax
  double v8; // st3
  double v9; // st1
  double v10; // st5
  double v11; // st1
  char result; // al
  double v13; // st4
  double v14; // st7
  double v15; // st4
  double v16; // st5
  float *v17; // eax
  double v18; // st7
  _DWORD *v19; // eax
  char *v20; // eax
  float *v21; // eax
  double v22; // st7
  char *v23; // eax
  float *v24; // eax
  char *v25; // [esp+8h] [ebp-94h]
  char *v26; // [esp+8h] [ebp-94h]
  float v27; // [esp+18h] [ebp-84h]
  int v28; // [esp+18h] [ebp-84h]
  _DWORD v29[14]; // [esp+28h] [ebp-74h] BYREF
  float v30[3]; // [esp+60h] [ebp-3Ch] BYREF
  float v31[3]; // [esp+6Ch] [ebp-30h] BYREF
  float v32; // [esp+78h] [ebp-24h]
  float v33; // [esp+7Ch] [ebp-20h]
  float v34; // [esp+80h] [ebp-1Ch]
  int v35; // [esp+84h] [ebp-18h] BYREF
  float v36; // [esp+88h] [ebp-14h]
  float v37; // [esp+8Ch] [ebp-10h]
  int v38; // [esp+90h] [ebp-Ch] BYREF
  float v39; // [esp+94h] [ebp-8h]
  float v40; // [esp+98h] [ebp-4h]

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(a1 + 3668)
    || (*(_BYTE *)(a1 + 256) & 1) == 0
    || sub_100223E0((_DWORD *)a1) == 1
    || ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1672))(a1) & 2) == 0 )
  {
    return 0;
  }
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v4 + 528))(v4, v30, 0, 0);
  (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)a1 + 528))(a1, v31, 0, 0);
  v5 = v31[1] * v30[1] + v30[0] * v31[0] + v31[2] * v30[2];
  if ( v5 < 0.5 )
    v5 = 0.5;
  v27 = v5 * 2.5;
  v6 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  sub_10260A10(a2, a3, v6, v27, (float *)&v35);
  v7 = (float *)sub_10019640((_DWORD *)a1);
  v8 = v7[2] - v37;
  v9 = v7[1] - v36;
  v10 = v9 * v9;
  v11 = *v7 - *(float *)&v35;
  if ( v11 * v11 + v10 + v8 * v8 < 262144.0 )
    return 0;
  v13 = *(float *)(a1 + 4056) - v36;
  v14 = v13 * v13;
  v15 = *(float *)(a1 + 4052) - *(float *)&v35;
  v16 = *(float *)(a1 + 4060) - v37;
  if ( v16 * v16 + v15 * v15 + v14 < 16384.0 )
  {
    *(float *)(a1 + 3668) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              1.0,
                              2.0)
                          + *(float *)(dword_106B31C8 + 12);
    return 0;
  }
  v17 = (float *)sub_10019640((_DWORD *)a1);
  v32 = *(float *)&v35 - *v17;
  v33 = v36 - v17[1];
  v34 = v37 - v17[2];
  if ( off_10689714() < 128.0 )
    return 0;
  v18 = sub_100737B0(*(_DWORD *)(a1 + 1676)) * 4.0;
  *(float *)&v38 = v32 * v18 + *(float *)&v35;
  v39 = v33 * v18 + v36;
  v40 = v18 * v34 + v37;
  if ( !sub_102FF260(*(float *)&v38, v39, v40) )
    return 0;
  memset(v29, 0, sizeof(v29));
  v28 = sub_100209E0((_DWORD *)a1);
  v19 = sub_10019640((_DWORD *)a1);
  sub_10060730(1, (int)v19, (int)&v38, 33701899, v28, (int)v29);
  if ( v29[0] >= 0 )
  {
    if ( *(_DWORD *)(dword_106E2A04 + 48) == 2 )
    {
      v26 = sub_10073730(*(_DWORD *)(a1 + 1676));
      v23 = sub_10073710(*(_DWORD *)(a1 + 1676));
      sub_1011BB20((int)&v38, (int)v23, (int)v26, 0, 255, 0, 0, 5.0);
      v24 = (float *)sub_10019640((_DWORD *)a1);
      sub_1011BC50(v24, (float *)&v38, 0, 255, 0, 0, 5.0);
    }
    *(float *)(a1 + 4040) = *(float *)&v29[10];
    result = 1;
    *(float *)(a1 + 4044) = *(float *)&v29[11];
    *(float *)(a1 + 4048) = *(float *)&v29[12];
    *(float *)(a1 + 4052) = *(float *)&v38;
    *(float *)(a1 + 4056) = v39;
    *(float *)(a1 + 4060) = v40;
  }
  else
  {
    if ( *(_DWORD *)(dword_106E2A04 + 48) == 2 )
    {
      v25 = sub_10073730(*(_DWORD *)(a1 + 1676));
      v20 = sub_10073710(*(_DWORD *)(a1 + 1676));
      sub_1011BB20((int)&v38, (int)v20, (int)v25, 255, 0, 0, 0, 5.0);
      v21 = (float *)sub_10019640((_DWORD *)a1);
      sub_1011BC50(v21, (float *)&v38, 255, 0, 0, 0, 5.0);
    }
    v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            1.0,
            2.0);
    result = 0;
    *(float *)(a1 + 3668) = v22 + *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
