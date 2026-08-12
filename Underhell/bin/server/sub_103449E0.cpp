// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_103449E0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, float a6)
{
  double v7; // st7
  float v8; // ecx
  float v9; // edx
  double v10; // st7
  double v11; // st7
  long double v12; // st5
  long double v13; // st4
  long double v14; // rt2
  long double v15; // st5
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // edi
  char v23; // dl
  int *v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  float v28; // [esp+14h] [ebp-114h]
  float v30[22]; // [esp+2Ch] [ebp-FCh] BYREF
  float v31[3]; // [esp+84h] [ebp-A4h] BYREF
  float v32[20]; // [esp+90h] [ebp-98h] BYREF
  _DWORD v33[3]; // [esp+E0h] [ebp-48h] BYREF
  float v34[3]; // [esp+ECh] [ebp-3Ch] BYREF
  float v35; // [esp+F8h] [ebp-30h] BYREF
  float v36; // [esp+FCh] [ebp-2Ch]
  float v37; // [esp+100h] [ebp-28h]
  float v38; // [esp+104h] [ebp-24h] BYREF
  float v39; // [esp+108h] [ebp-20h]
  float v40; // [esp+10Ch] [ebp-1Ch]
  int v41; // [esp+110h] [ebp-18h]
  float v42; // [esp+114h] [ebp-14h]
  char v43; // [esp+118h] [ebp-10h]
  _DWORD v44[3]; // [esp+11Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+128h] [ebp+0h]

  v44[0] = a2;
  v44[1] = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = 0.000001;
  v8 = *(float *)(a1 + 580);
  v9 = *(float *)(a1 + 584);
  v40 = *(float *)(a1 + 588);
  v38 = v8;
  v39 = v9;
  if ( a6 > 0.000001 )
    v7 = a6;
  v42 = (sin((v7 - (*(float *)(a1 + 2820) - *(float *)(dword_106B31C8 + 12))) / v7 * 3.141592653589793 - 1.570796326794897)
       + 1.0)
      * 0.5;
  sub_103D8D50(a1, a3, a4);
  v10 = sub_10134630(v42, 0.0, 0.5, 0.0, 1.0);
  if ( v10 <= 1.0 )
  {
    if ( v10 < 0.0 )
      v10 = 0.0;
  }
  else
  {
    v10 = 1.0;
  }
  v28 = v10;
  sub_10343630(a1, a1 + 3672, a5, v28, &v35);
  if ( v42 < 0.89999998 )
  {
    if ( v42 > 0.10000002 )
      v11 = 1.0;
    else
      v11 = v42 * 9.9999981;
  }
  else
  {
    v11 = 1.0 - (v42 - 0.89999998) * 9.9999981;
  }
  v12 = sin(*(float *)(dword_106B31C8 + 12) * 9.424777960769379) * 0.0005999999999999999 * v11 + v35;
  v35 = v12;
  v13 = sin(*(float *)(dword_106B31C8 + 12) * 6.283185307179586 + 1.570796326794897) * 0.0005999999999999999 * v11 + v36;
  v36 = v13;
  v14 = v12;
  v15 = v11 * (0.0005999999999999999 * sin(*(float *)(dword_106B31C8 + 12) * 4.71238898038469 + 3.141592653589793))
      + v37;
  v37 = v15;
  v34[0] = v14 * 8192.0 + v38;
  v34[1] = v13 * 8192.0 + v39;
  v34[2] = v15 * 8192.0 + v40;
  sub_1001F180(v30, &v38, v34);
  sub_10265570(v33, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v30,
    1174421507,
    v33,
    v31);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v31, (int)v32, 255, 0, 0, 1, 5.0);
  *(float *)(a1 + 3628) = v32[0];
  *(float *)(a1 + 3632) = v32[1];
  *(float *)(a1 + 3636) = v32[2];
  v16 = *(_DWORD *)(a1 + 3644);
  if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
  sub_100F9FC0((float *)(v17 + 948), v31);
  v18 = *(_DWORD *)(a1 + 3644);
  if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
  sub_100E10C0(v19, v32);
  v20 = *(_DWORD *)(a1 + 3644);
  if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v20 >> 12 )
    v21 = 0;
  else
    v21 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
  v22 = v21 + 116;
  v41 = (int)(v42 * 255.0);
  v23 = v41;
  v43 = v41;
  if ( *(_BYTE *)(v21 + 119) != (_BYTE)v41 )
  {
    if ( *(_BYTE *)(v21 + 84) )
    {
      *(_BYTE *)(v21 + 88) |= 1u;
    }
    else
    {
      v24 = *(int **)(v21 + 24);
      if ( v24 )
      {
        sub_100194B0(v24, 116);
        v23 = v43;
      }
    }
    *(_BYTE *)(v22 + 3) = v23;
  }
  v25 = *(_DWORD *)(a1 + 3644);
  if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 2] != v25 >> 12 )
    v26 = 0;
  else
    v26 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3644) & 0xFFF) + 1];
  sub_100F9B80(v26);
  return sub_103446D0(a1, (int)v44, v42, &v38, (int)&v35);
}
