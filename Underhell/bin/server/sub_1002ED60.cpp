// bad sp value at call has been detected, the output may be wrong!
bool __usercall sub_1002ED60@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<esi>)
{
  float *v4; // eax
  float *v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  float v11; // ecx
  double v12; // st7
  int v13; // eax
  int v14; // ecx
  float v15; // ecx
  double v16; // st7
  int v18; // eax
  int v19; // ecx
  double v20; // st7
  int v21; // eax
  double v22; // st7
  float v24[20]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v25[12]; // [esp+84h] [ebp-9Ch] BYREF
  float v26; // [esp+90h] [ebp-90h] BYREF
  float v27; // [esp+94h] [ebp-8Ch]
  float v28; // [esp+98h] [ebp-88h]
  _BYTE v29[12]; // [esp+DCh] [ebp-44h] BYREF
  float v30; // [esp+E8h] [ebp-38h]
  float v31; // [esp+ECh] [ebp-34h]
  float v32; // [esp+F0h] [ebp-30h]
  float v33; // [esp+F4h] [ebp-2Ch]
  float v34; // [esp+F8h] [ebp-28h]
  float v35; // [esp+FCh] [ebp-24h] BYREF
  float v36; // [esp+100h] [ebp-20h]
  float v37; // [esp+104h] [ebp-1Ch]
  float v38; // [esp+108h] [ebp-18h] BYREF
  float v39; // [esp+10Ch] [ebp-14h]
  float v40; // [esp+110h] [ebp-10h]
  _DWORD v41[3]; // [esp+114h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+120h] [ebp+0h]

  v41[0] = a2;
  v41[1] = retaddr;
  v4 = (float *)sub_10022D70();
  *v4 = *(float *)(a1 + 340) - *(float *)(a1 + 328);
  v4[1] = *(float *)(a1 + 344) - *(float *)(a1 + 332);
  v4[2] = *(float *)(a1 + 348) - *(float *)(a1 + 336);
  v33 = *v4 * 0.5;
  v5 = (float *)sub_10022D70();
  *v5 = *(float *)(a1 + 340) - *(float *)(a1 + 328);
  v5[1] = *(float *)(a1 + 344) - *(float *)(a1 + 332);
  v5[2] = *(float *)(a1 + 348) - *(float *)(a1 + 336);
  v6 = v5[1] * 0.5;
  v7 = *(_DWORD *)(a1 + 252) >> 11;
  v34 = v6;
  if ( (v7 & 1) != 0 )
    sub_100DAE60(a1);
  v8 = *(_DWORD *)(a1 + 252) >> 11;
  v38 = *(float *)(a1 + 580) + v33;
  if ( (v8 & 1) != 0 )
    sub_100DAE60(a1);
  v9 = *(_DWORD *)(a1 + 252) >> 11;
  v39 = *(float *)(a1 + 584) + v34;
  if ( (v9 & 1) != 0 )
    sub_100DAE60(a1);
  v10 = *(float *)(a1 + 588);
  v40 = *(float *)(a1 + 588);
  v35 = v38;
  v36 = v39;
  v31 = v10 - 100.0;
  v37 = v31;
  sub_1001F180(v24, &v38, &v35);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v24,
    147467,
    v29,
    v25,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v25, (int)&v26, 255, 0, 0, 1, 5.0);
  v40 = (v38 - v26) * (v38 - v26) + (v39 - v27) * (v39 - v27) + (v11 - v28) * (v11 - v28);
  v12 = off_10689708(v40);
  v13 = *(_DWORD *)(a1 + 252);
  v32 = v12;
  if ( (v13 & 0x800) != 0 )
    sub_100DAE60(a1);
  v14 = *(_DWORD *)(a1 + 252) >> 11;
  v38 = *(float *)(a1 + 580) - v33;
  if ( (v14 & 1) != 0 )
    sub_100DAE60(a1);
  v39 = *(float *)(a1 + 584) - v34;
  v35 = v38;
  v36 = v39;
  v37 = v31;
  sub_1001F180(v24, (float *)LODWORD(v39), &v35);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v24,
    147467,
    v29,
    v25);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v25, (int)&v26, 255, 0, 0, 1, 5.0);
  v40 = (v38 - v26) * (v38 - v26) + (v39 - v27) * (v39 - v27) + (v15 - v28) * (v15 - v28);
  v16 = off_10689708(v40);
  if ( v32 < v16 )
    return 0;
  v18 = *(_DWORD *)(a1 + 252);
  v32 = v16;
  if ( (v18 & 0x800) != 0 )
    sub_100DAE60(a1);
  v19 = *(_DWORD *)(a1 + 252) >> 11;
  v38 = *(float *)(a1 + 580) - v33;
  if ( (v19 & 1) != 0 )
    sub_100DAE60(a1);
  v39 = *(float *)(a1 + 584) + v34;
  sub_1002A5F0((int)v41, a1, &v38, (float *)LODWORD(v39), SLODWORD(v31), a1, SLODWORD(v39), (int)v25);
  v40 = (v38 - v26) * (v38 - v26) + (v39 - v27) * (v39 - v27) + (v40 - v28) * (v40 - v28);
  v20 = off_10689708(v40);
  v30 = v20;
  if ( v20 > v32 )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v21 = *(_DWORD *)(a1 + 252) >> 11;
  v38 = *(float *)(a1 + 580) + v33;
  if ( (v21 & 1) != 0 )
    sub_100DAE60(a1);
  v39 = *(float *)(a1 + 584) - v34;
  sub_1002A5F0((int)v41, a1, &v38, (float *)LODWORD(v39), SLODWORD(v31), a1, SLODWORD(v39), (int)v25);
  v40 = (v38 - v26) * (v38 - v26) + (v39 - v27) * (v39 - v27) + (v40 - v28) * (v40 - v28);
  v22 = off_10689708(v40);
  return v22 <= v30;
}
