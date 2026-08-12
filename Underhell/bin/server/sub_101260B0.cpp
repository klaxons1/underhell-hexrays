int __userpurge sub_101260B0@<eax>(int a1@<ecx>, int a2@<ebp>, int **a3)
{
  int v4; // ecx
  int v5; // edi
  float v6; // ecx
  float v7; // edx
  int **v8; // edi
  float *v9; // eax
  float v10; // edx
  float v11; // eax
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  double v15; // st7
  int result; // eax
  int v17; // edi
  bool v18; // zf
  int v19; // edx
  float v20; // edx
  float v21; // eax
  int v22; // [esp+Ch] [ebp-104h]
  int v23; // [esp+Ch] [ebp-104h]
  int v24; // [esp+10h] [ebp-100h]
  int v25; // [esp+10h] [ebp-100h]
  float v26[20]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v27[12]; // [esp+74h] [ebp-9Ch] BYREF
  float v28[19]; // [esp+80h] [ebp-90h] BYREF
  float v29[3]; // [esp+CCh] [ebp-44h] BYREF
  float v30[3]; // [esp+D8h] [ebp-38h] BYREF
  int v31; // [esp+E4h] [ebp-2Ch]
  float v32; // [esp+E8h] [ebp-28h] BYREF
  float v33; // [esp+ECh] [ebp-24h]
  float v34; // [esp+F0h] [ebp-20h]
  float v35; // [esp+F4h] [ebp-1Ch] BYREF
  float v36; // [esp+F8h] [ebp-18h]
  float v37; // [esp+FCh] [ebp-14h]
  float v38; // [esp+100h] [ebp-10h]
  int v39; // [esp+104h] [ebp-Ch]
  void *v40; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v39 = a2;
  v40 = retaddr;
  v4 = *(_DWORD *)(a1 + 248) >> 1;
  v38 = *(float *)(a1 + 812);
  v5 = *(_DWORD *)(a1 + 816);
  if ( (v4 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    {
      sub_1025F470(&v35);
    }
    else
    {
      v6 = *(float *)(a1 + 804);
      v7 = *(float *)(a1 + 808);
      v35 = *(float *)(a1 + 800);
      v36 = v6;
      v37 = v7;
    }
    v24 = (int)v38;
    v22 = v5;
    v8 = a3;
    v9 = sub_10125590((float *)a1, v30, *a3);
    sub_102603B0(v9, &v35, v22, v24);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    {
      sub_1025F470(&v35);
    }
    else
    {
      v10 = *(float *)(a1 + 804);
      v11 = *(float *)(a1 + 808);
      v35 = *(float *)(a1 + 800);
      v36 = v10;
      v37 = v11;
    }
    v25 = (int)v38;
    v23 = v5;
    v8 = a3;
    v12 = sub_10125590((float *)a1, v30, *a3);
    sub_10265D10(v12, &v35, v23, v25);
  }
  if ( (*(_DWORD *)(a1 + 248) & 8) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    {
      sub_1025F470(&v35);
    }
    else
    {
      v13 = *(float *)(a1 + 804);
      v14 = *(float *)(a1 + 808);
      v35 = *(float *)(a1 + 800);
      v36 = v13;
      v37 = v14;
    }
    sub_10125590((float *)a1, &v32, *v8);
    v15 = *(float *)(a1 + 812);
    v29[0] = v35 * v15 * 2.0 + v32;
    v29[1] = v36 * v15 * 2.0 + v33;
    v29[2] = v15 * v37 * 2.0 + v34;
    sub_1001F180(v26, &v32, v29);
    sub_10265570(0, 0);
    (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v26,
      16395,
      v30,
      v27);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v27, (int)v28, 255, 0, 0, 1, 5.0);
    if ( 1.0 != v28[8] )
      sub_10265C30(v27, *(_DWORD *)(a1 + 816));
  }
  result = *(_DWORD *)(a1 + 248);
  if ( (result & 0x70) != 0 )
  {
    v17 = 0;
    if ( (result & 0x10) != 0 )
      v17 = 4;
    if ( (result & 0x20) != 0 )
      v17 |= 1u;
    if ( (result & 0x40) != 0 )
      v17 |= 2u;
    v18 = (*(_BYTE *)(a1 + 248) & 1) == 0;
    v19 = *(_DWORD *)(a1 + 816);
    v38 = *(float *)(a1 + 812);
    v31 = v19;
    if ( v18 )
    {
      v20 = *(float *)(a1 + 804);
      v21 = *(float *)(a1 + 808);
      v32 = *(float *)(a1 + 800);
      v33 = v20;
      v34 = v21;
    }
    else
    {
      sub_1025F470(&v32);
    }
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    return sub_10124BC0((float *)(a1 + 580), &v32, v31, (int)v38, *(float *)&v17);
  }
  return result;
}
