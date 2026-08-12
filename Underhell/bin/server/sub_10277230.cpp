int __usercall sub_10277230@<eax>(int a1@<ecx>, int a2@<ebx>)
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
  void (__thiscall *v18)(int, int *); // edx
  int v19; // ebx
  int v20; // eax
  float v21; // [esp+40h] [ebp-ACh]
  float v22; // [esp+44h] [ebp-A8h]
  _BYTE v23[12]; // [esp+4Ch] [ebp-A0h] BYREF
  _BYTE v24[12]; // [esp+58h] [ebp-94h] BYREF
  float v25[3]; // [esp+64h] [ebp-88h] BYREF
  float v26[3]; // [esp+70h] [ebp-7Ch] BYREF
  float v27[3]; // [esp+7Ch] [ebp-70h] BYREF
  float v28; // [esp+88h] [ebp-64h]
  int v29; // [esp+8Ch] [ebp-60h] BYREF
  float v30; // [esp+90h] [ebp-5Ch]
  float v31; // [esp+94h] [ebp-58h]
  float v32; // [esp+98h] [ebp-54h]
  float v33; // [esp+9Ch] [ebp-50h]
  float v34; // [esp+A0h] [ebp-4Ch]
  float v35; // [esp+A4h] [ebp-48h]
  float v36; // [esp+A8h] [ebp-44h]
  float v37; // [esp+ACh] [ebp-40h]
  float v38; // [esp+B0h] [ebp-3Ch]
  float v39; // [esp+B4h] [ebp-38h]
  int v40; // [esp+B8h] [ebp-34h]
  int v41; // [esp+BCh] [ebp-30h]
  int v42; // [esp+C0h] [ebp-2Ch]
  int v43; // [esp+C4h] [ebp-28h]
  int v44; // [esp+C8h] [ebp-24h]
  int v45; // [esp+CCh] [ebp-20h]
  float v46; // [esp+D0h] [ebp-1Ch]
  int v47; // [esp+D4h] [ebp-18h]
  int v48; // [esp+D8h] [ebp-14h]
  __int16 v49; // [esp+DCh] [ebp-10h]
  bool v50; // [esp+DFh] [ebp-Dh]
  __int16 v51; // [esp+E0h] [ebp-Ch]
  float v52; // [esp+E4h] [ebp-8h]
  int v53; // [esp+E8h] [ebp-4h] BYREF

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
  v53 = 0;
  v28 = v5(a1);
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
      v52 = v8 + v28;
      if ( LODWORD(v8) != LODWORD(v52) )
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
        *(float *)(a1 + 1132) = v52;
      }
      v10 = *(float *)(dword_106B31C8 + 12);
      ++v53;
    }
    while ( v10 >= *(float *)(a1 + 1132) );
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, float))(*(_DWORD *)a1 + 1272))(a1, COERCE_FLOAT(LODWORD(v22))) )
  {
    if ( v53 > *(_DWORD *)(a1 + 1200) )
      v53 = *(_DWORD *)(a1 + 1200);
    sub_100CBD20((int *)(a1 + 1200), &v53);
  }
  ++*(_DWORD *)(a1 + 1372);
  v11 = *(const char **)(a1 + 92);
  if ( !v11 )
    v11 = String;
  (*(void (__thiscall **)(int, int, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, v4, 1, v11);
  v36 = 0.0;
  v37 = 0.0;
  v29 = v53;
  v38 = 0.0;
  v41 = 4;
  v43 = 0;
  v39 = 8192.0;
  v44 = 0;
  v47 = 0;
  v46 = 1.0;
  v45 = 0;
  v48 = 0;
  v49 = 1;
  v42 = 0;
  v51 = 0;
  v50 = 0;
  v12 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 968))(v4, v24);
  v30 = *v12;
  v31 = v12[1];
  v32 = v12[2];
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v4 + 1504))(v4, v25, 0.087155744);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_104222B0(a1 + 704, v27, v23, v26);
  v30 = v27[0] * 2.0 + v30 - v26[0] * 4.0;
  v31 = v27[1] * 2.0 + v31 - v26[1] * 4.0;
  v32 = 2.0 * v27[2] + v32 - 4.0 * v26[2];
  v33 = v25[0];
  v34 = v25[1];
  v35 = v25[2];
  v13 = (float *)(*(int (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)v4 + 1108))(v4, v24, a1, 0);
  v36 = *v13;
  v37 = v13[1];
  v38 = v13[2];
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
      goto LABEL_33;
    v14 = *(float *)(sub_100D0CC0((__int16 *)a1) + 48);
  }
  v36 = v36 * v14;
  v37 = v37 * v14;
  v38 = v14 * v38;
LABEL_33:
  if ( *(_BYTE *)(v4 + 2272) )
  {
    v15 = *(float *)(sub_100D0CC0((__int16 *)a1) + 44);
    v36 = v36 * v15;
    v37 = v37 * v15;
    v38 = v15 * v38;
  }
  v43 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 852))(a1);
  v50 = *(_DWORD *)(sub_100D0CC0((__int16 *)a1) + 52) != 0;
  v16 = *(_DWORD *)(sub_100D0CC0((__int16 *)a1) + 52);
  v39 = 56755.84;
  v17 = *(_DWORD *)(a1 + 1192);
  v42 = v16;
  v18 = *(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 432);
  v40 = v17;
  v41 = 2;
  v18(a1, &v29);
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
