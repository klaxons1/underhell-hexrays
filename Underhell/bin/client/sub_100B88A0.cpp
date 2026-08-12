int __thiscall sub_100B88A0(int this)
{
  int result; // eax
  double v3; // st7
  void (__thiscall *v4)(int, _DWORD); // edx
  double v5; // st7
  double v6; // st4
  double v7; // st6
  double v8; // st3
  double v9; // st1
  int v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st3
  double v15; // st1
  char v16; // bl
  int v17; // eax
  unsigned int v18; // eax
  char v19; // al
  char v20; // cl
  double v21; // st7
  void (__thiscall *v22)(int, int); // edx
  float v23; // [esp+8h] [ebp-54h] BYREF
  int v24; // [esp+Ch] [ebp-50h]
  float v25; // [esp+10h] [ebp-4Ch]
  float v26; // [esp+14h] [ebp-48h]
  float v27; // [esp+18h] [ebp-44h]
  int v28; // [esp+1Ch] [ebp-40h]
  float v29; // [esp+20h] [ebp-3Ch]
  float v30; // [esp+24h] [ebp-38h]
  float v31; // [esp+28h] [ebp-34h]
  float v32; // [esp+2Ch] [ebp-30h]
  float v33; // [esp+30h] [ebp-2Ch]
  float v34; // [esp+34h] [ebp-28h]
  float v35; // [esp+38h] [ebp-24h]
  float v36; // [esp+3Ch] [ebp-20h]
  float v37; // [esp+40h] [ebp-1Ch]
  float v38; // [esp+44h] [ebp-18h]
  int v39; // [esp+48h] [ebp-14h]
  int v40; // [esp+4Ch] [ebp-10h] BYREF
  int v41; // [esp+50h] [ebp-Ch] BYREF
  int v42; // [esp+54h] [ebp-8h]
  int v43; // [esp+58h] [ebp-4h] BYREF

  result = dword_1042FC9C;
  if ( *(_DWORD *)(dword_1042FC9C + 48) )
  {
    v3 = *(float *)(this + 212);
    v42 = (int)*(float *)(this + 208);
    v4 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128);
    v40 = (int)v3;
    v4(dword_1047CA6C, *(_DWORD *)(this + 232));
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
      dword_1047CA6C,
      255,
      255,
      255,
      (int)*(float *)(this + 220));
    (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
      dword_1047CA6C,
      *(_DWORD *)(this + 232),
      &v43,
      &v41);
    v5 = (double)v43;
    v6 = v5 * *(float *)(this + 224) * 0.5;
    v7 = 0.5 * ((double)v41 * *(float *)(this + 224));
    v8 = (double)v42;
    v9 = (double)v40;
    *(float *)&v42 = v9 + v7;
    v23 = v8 + v6;
    v24 = v42;
    v25 = 1.0 - 0.5 / v5;
    v26 = 0.5 / v5;
    v27 = v8 - v6;
    v28 = v42;
    v29 = v26;
    v30 = v26;
    v31 = v27;
    v32 = v9 - v7;
    v36 = v32;
    v33 = v26;
    v34 = v25;
    v37 = v25;
    v38 = v25;
    v35 = v23;
    result = (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)dword_1047CA6C + 396))(dword_1047CA6C, 4, &v23);
  }
  if ( *(_DWORD *)(dword_1042FCE4 + 48) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(this + 236));
    (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
      dword_1047CA6C,
      *(_DWORD *)(this + 236),
      &v40,
      &v41);
    v42 = sub_10076740() / 2;
    v10 = sub_10076720();
    v11 = (double)v40 * 0.5;
    v12 = 0.5 * (double)v41;
    v13 = (double)v42;
    v14 = (double)(v10 / 2);
    v43 = BYTE1(dword_1042FB88);
    *(float *)&v42 = v14 + v12;
    v24 = v42;
    v23 = v13 + v11;
    v25 = 1.0;
    v26 = 0.0;
    v27 = v13 - v11;
    v15 = *(float *)&v42;
    v42 = dword_1042FB88;
    *(float *)&v28 = v15;
    v16 = dword_1042FB88;
    v29 = 0.0;
    v30 = 0.0;
    v39 = BYTE2(dword_1042FB88);
    v31 = v27;
    v32 = v14 - v12;
    v36 = v32;
    v33 = 0.0;
    v34 = 1.0;
    v37 = 1.0;
    v38 = 1.0;
    v35 = v23;
    v17 = sub_100422D0();
    if ( v17
      && (v18 = *(_DWORD *)(v17 + 5192), v18 != -1)
      && *((_DWORD *)off_103DCD74 + 4 * (v18 & 0xFFF) + 2) == v18 >> 12
      && *((_DWORD *)off_103DCD74 + 4 * (v18 & 0xFFF) + 1) )
    {
      v16 = -6;
      v19 = -118;
      v20 = 4;
    }
    else
    {
      v19 = v43;
      v20 = v39;
    }
    v21 = *(float *)(this + 228);
    BYTE1(v42) = v19;
    v39 = HIWORD(v43) | 0xC00;
    BYTE2(v42) = v20;
    v22 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40);
    LOBYTE(v42) = v16;
    v39 = (int)v21;
    HIBYTE(v42) = (int)v21;
    v22(dword_1047CA6C, v42);
    return (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)dword_1047CA6C + 396))(dword_1047CA6C, 4, &v23);
  }
  return result;
}
