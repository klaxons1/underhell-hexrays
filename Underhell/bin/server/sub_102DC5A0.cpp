bool __userpurge sub_102DC5A0@<al>(float *a1@<ecx>, int a2@<edi>, int a3, float *a4)
{
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st7
  int v13; // eax
  float v14; // ecx
  float v15; // edx
  int (__thiscall *v16)(float *, _BYTE *); // edx
  float *v17; // eax
  double v18; // st7
  double v19; // st6
  double v20; // st5
  float *v21; // eax
  double v22; // st7
  _BYTE v24[12]; // [esp+4h] [ebp-48h] BYREF
  float v25[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v26[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v27; // [esp+28h] [ebp-24h]
  float v28; // [esp+2Ch] [ebp-20h]
  float v29; // [esp+30h] [ebp-1Ch]
  float v30; // [esp+34h] [ebp-18h]
  float v31; // [esp+38h] [ebp-14h]
  float v32; // [esp+3Ch] [ebp-10h]
  float v33; // [esp+40h] [ebp-Ch]
  float v34; // [esp+44h] [ebp-8h]
  float v35; // [esp+48h] [ebp-4h]
  float v36; // [esp+54h] [ebp+8h]

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1264))(a1) )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 220))(a3) == 5
    && (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 368))(a3) == a1 )
  {
    return 1;
  }
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v7 = a1[146] - *(float *)(a3 + 584);
  v8 = v7 * v7;
  v9 = a1[145] - *(float *)(a3 + 580);
  v10 = v8;
  v11 = a1[147] - *(float *)(a3 + 588);
  v12 = v9 * v9 + v10 + v11 * v11;
  if ( v12 > 360000.0 )
    return 0;
  v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 576))(a3, a2);
  v14 = *(float *)v13;
  v15 = *(float *)(v13 + 4);
  v32 = *(float *)(v13 + 8);
  v30 = v14;
  v31 = v15;
  v36 = v12;
  if ( v36 >= 16384.0 )
  {
    v21 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 504))(a1, v24);
    v18 = v30 - *v21;
    v19 = v31 - v21[1];
    v20 = v32 - v21[2];
  }
  else
  {
    sub_100F5A30(a1, (int)v26, 0, 0);
    v16 = *(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 504);
    v27 = v26[0] * 128.0;
    v28 = v26[1] * 128.0;
    v29 = 128.0 * v26[2];
    v17 = (float *)v16(a1, v24);
    v18 = v30 - (*v17 - v27);
    v19 = v31 - (v17[1] - v28);
    v20 = v32 - (v17[2] - v29);
  }
  v33 = v18;
  v34 = v19;
  v35 = v20;
  off_10689714();
  (*(void (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 924))(a1, v25);
  v22 = v25[1] * v34 + v25[0] * v33 + v25[2] * v35;
  if ( a4 )
    *a4 = v22;
  return v22 >= 0.92387003
      && (*(unsigned __int8 (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)a1 + 548))(a1, a3, 16449, 0) != 0;
}
