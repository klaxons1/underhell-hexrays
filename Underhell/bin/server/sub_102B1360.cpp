int __usercall sub_102B1360@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int result; // eax
  int v4; // edi
  double (__thiscall *v5)(int); // eax
  bool v6; // zf
  void (__stdcall *v7)(int); // eax
  float v8; // ecx
  int *v9; // ecx
  double v10; // st7
  const char *v11; // eax
  float *v12; // eax
  float *v13; // eax
  double v14; // st7
  double v15; // st7
  int v16; // edx
  int v17; // eax
  void (__thiscall *v18)(int, _DWORD *); // edx
  int v19; // ebx
  int v20; // eax
  float v21; // [esp+40h] [ebp-88h]
  float v22; // [esp+44h] [ebp-84h]
  _DWORD v23[7]; // [esp+4Ch] [ebp-7Ch] BYREF
  float v24; // [esp+68h] [ebp-60h]
  float v25; // [esp+6Ch] [ebp-5Ch]
  float v26; // [esp+70h] [ebp-58h]
  float v27; // [esp+74h] [ebp-54h]
  int v28; // [esp+78h] [ebp-50h]
  int v29; // [esp+7Ch] [ebp-4Ch]
  int v30; // [esp+80h] [ebp-48h]
  int v31; // [esp+84h] [ebp-44h]
  int v32; // [esp+88h] [ebp-40h]
  int v33; // [esp+8Ch] [ebp-3Ch]
  float v34; // [esp+90h] [ebp-38h]
  int v35; // [esp+94h] [ebp-34h]
  int v36; // [esp+98h] [ebp-30h]
  __int16 v37; // [esp+9Ch] [ebp-2Ch]
  bool v38; // [esp+9Fh] [ebp-29h]
  __int16 v39; // [esp+A0h] [ebp-28h]
  _BYTE v40[12]; // [esp+A4h] [ebp-24h] BYREF
  float v41[3]; // [esp+B0h] [ebp-18h] BYREF
  float v42; // [esp+BCh] [ebp-Ch]
  float v43; // [esp+C0h] [ebp-8h]
  int v44; // [esp+C4h] [ebp-4h] BYREF

  result = sub_100D1940((_DWORD *)a1);
  v4 = result;
  if ( !result )
    return result;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
  if ( !(_BYTE)result )
    return result;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1);
  if ( (_BYTE)result )
  {
    if ( !*(_DWORD *)(a1 + 1200) )
      return result;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1) )
  {
    result = sub_100CF5D0((_DWORD *)v4, *(_DWORD *)(a1 + 1192));
    if ( !result )
      return result;
  }
  ++*(_DWORD *)(a1 + 1392);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1116))(v4, a2);
  v5 = *(double (__thiscall **)(int))(*(_DWORD *)a1 + 1108);
  v44 = 0;
  v42 = v5(a1);
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 1132) )
  {
    do
    {
      v6 = (*(unsigned __int8 (__thiscall **)(int, float))(*(_DWORD *)a1 + 876))(a1, COERCE_FLOAT(LODWORD(v22))) == 0;
      v22 = *(float *)(a1 + 1132);
      v7 = *(void (__stdcall **)(int))(*(_DWORD *)a1 + 1132);
      if ( v6 )
        v7(1);
      else
        v7(2);
      v8 = *(float *)(a1 + 1132);
      v43 = v8 + v42;
      if ( LODWORD(v8) != LODWORD(v43) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v9 = *(int **)(a1 + 24);
          if ( v9 )
            sub_100194B0(v9, 1132);
        }
        *(float *)(a1 + 1132) = v43;
      }
      v10 = *(float *)(dword_106B31C8 + 12);
      ++v44;
    }
    while ( v10 >= *(float *)(a1 + 1132) );
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, float))(*(_DWORD *)a1 + 1272))(a1, COERCE_FLOAT(LODWORD(v22))) )
  {
    if ( v44 > *(_DWORD *)(a1 + 1200) )
      v44 = *(_DWORD *)(a1 + 1200);
    sub_100CBD20((int *)(a1 + 1200), &v44);
  }
  ++*(_DWORD *)(a1 + 1372);
  v11 = *(const char **)(a1 + 92);
  if ( !v11 )
    v11 = String;
  (*(void (__thiscall **)(int, int, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v4, 1, v11);
  v24 = 0.0;
  v25 = 0.0;
  v23[0] = v44;
  v26 = 0.0;
  v29 = 4;
  v31 = 0;
  v27 = 8192.0;
  v32 = 0;
  v35 = 0;
  v34 = 1.0;
  v33 = 0;
  v36 = 0;
  v37 = 1;
  v30 = 0;
  v39 = 0;
  v38 = 0;
  v12 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 968))(v4, v40);
  *(float *)&v23[1] = *v12;
  *(float *)&v23[2] = v12[1];
  *(float *)&v23[3] = v12[2];
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v4 + 1504))(v4, v41, 0.087155744);
  *(float *)&v23[4] = v41[0];
  *(float *)&v23[5] = v41[1];
  *(float *)&v23[6] = v41[2];
  v13 = (float *)(*(int (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)v4 + 1108))(v4, v40, a1, 0);
  v24 = *v13;
  v25 = v13[1];
  v26 = v13[2];
  if ( *(_BYTE *)(v4 + 2137) )
  {
    v14 = *(float *)(sub_100D0CC0((__int16 *)a1) + 84);
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 252) & 0x1000) != 0 )
      sub_100DAFD0(v4);
    v21 = *(float *)(v4 + 480) * *(float *)(v4 + 480) + *(float *)(v4 + 476) * *(float *)(v4 + 476);
    if ( off_10689708(v21) < 175.0 )
      goto LABEL_31;
    v14 = *(float *)(sub_100D0CC0((__int16 *)a1) + 48);
  }
  v24 = v24 * v14;
  v25 = v25 * v14;
  v26 = v14 * v26;
LABEL_31:
  if ( *(_BYTE *)(v4 + 2272) )
  {
    v15 = *(float *)(sub_100D0CC0((__int16 *)a1) + 44);
    v24 = v24 * v15;
    v25 = v25 * v15;
    v26 = v15 * v26;
  }
  v31 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 852))(a1);
  v38 = *(_DWORD *)(sub_100D0CC0((__int16 *)a1) + 52) != 0;
  v16 = *(_DWORD *)(sub_100D0CC0((__int16 *)a1) + 52);
  v27 = 56755.84;
  v17 = *(_DWORD *)(a1 + 1192);
  v30 = v16;
  v18 = *(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 432);
  v28 = v17;
  v29 = 2;
  v18(a1, v23);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1168))(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 876))(a1) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1023D4B0(1, (float *)(a1 + 580), 196, 0.2, v4, 0, 0);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1023D4B0(1, (float *)(a1 + 580), 1500, 0.2, v4, 0, 0);
  }
  if ( !*(_DWORD *)(a1 + 1200) && sub_100CF5D0((_DWORD *)v4, *(_DWORD *)(a1 + 1192)) <= 0 )
    sub_101E8F80(v4, (int)"!HEV_AMO0", 0, 0);
  v19 = *(_DWORD *)a1;
  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1076))(a1);
  (*(void (__thiscall **)(int, int))(v19 + 944))(a1, v20);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 1300))(v4, 5);
  *(float *)(v4 + 4172) = *(float *)(dword_106B31C8 + 12) + 0.5;
  return result;
}
