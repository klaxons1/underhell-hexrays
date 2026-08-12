void __userpurge sub_100E8C80(int a1@<ecx>, int a2@<ebp>, float *a3, float *a4, float a5, float a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v10; // st4
  int v11; // esi
  double v12; // st4
  double v13; // st2
  double v14; // st1
  double v15; // rt1
  double v16; // st1
  _BYTE v17[12]; // [esp+24h] [ebp-ECh] BYREF
  int v18; // [esp+30h] [ebp-E0h] BYREF
  float v19[18]; // [esp+3Ch] [ebp-D4h] BYREF
  float v20; // [esp+84h] [ebp-8Ch]
  int v21; // [esp+88h] [ebp-88h] BYREF
  float v22[16]; // [esp+94h] [ebp-7Ch] BYREF
  char v23; // [esp+D4h] [ebp-3Ch]
  bool v24; // [esp+D5h] [ebp-3Bh]
  int v25; // [esp+E4h] [ebp-2Ch]
  float v26; // [esp+E8h] [ebp-28h]
  float v27; // [esp+ECh] [ebp-24h]
  float v28; // [esp+F0h] [ebp-20h]
  float v29; // [esp+F4h] [ebp-1Ch]
  float v30; // [esp+F8h] [ebp-18h]
  float v31; // [esp+FCh] [ebp-14h]
  float v32; // [esp+100h] [ebp-10h]
  int v33; // [esp+104h] [ebp-Ch]
  void *v34; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v33 = a2;
  v34 = retaddr;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v10 = a5 * 0.25;
  v11 = 1;
  v27 = *a4 * v10;
  v28 = a4[1] * v10;
  v29 = v10 * a4[2];
  v26 = 0.25 * a6;
  v12 = 1.0;
  while ( 1 )
  {
    v13 = v27 + v6;
    v30 = v13;
    v14 = v28 + v7;
    v31 = v14;
    v32 = v29 + v8;
    v15 = v14;
    v16 = v32 - v12 * 0.25 * (0.5 * (v12 * 0.25)) * v26;
    v20 = v16;
    v22[4] = v13 - v6;
    v22[5] = v15 - v7;
    v22[6] = v16 - v8;
    v24 = 0.0 != (v13 - v6) * (v13 - v6) + (v15 - v7) * (v15 - v7) + (v16 - v8) * (v16 - v8);
    v22[14] = 0.0;
    v22[13] = 0.0;
    v23 = 1;
    v22[12] = 0.0;
    v22[10] = 0.0;
    v22[9] = 0.0;
    v22[8] = 0.0;
    v22[0] = v6;
    v22[1] = v7;
    v22[2] = v8;
    sub_1012D400(0, 0);
    (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
      dword_104131A0,
      v22,
      16395,
      &v21,
      v17);
    if ( *(_DWORD *)(dword_10439134 + 48) )
      sub_10130AC0((int)v17, (int)&v18, 255, 0, 0, 1, 5.0);
    if ( 1.0 != v19[5] )
      break;
    v6 = v30;
    ++v11;
    v7 = v31;
    v25 = v11;
    v8 = v20;
    v12 = (double)v11;
    if ( v12 > 8.0 )
      return;
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 12))(a1, v19);
}
