int __userpurge sub_100498A0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3, int a4, char a5, float a6)
{
  unsigned int v7; // eax
  int v8; // edi
  int v9; // esi
  double v10; // st7
  double v11; // st5
  double v12; // st7
  double v13; // st2
  double v14; // rt2
  double v15; // st2
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // esi
  double v20; // st7
  double v21; // st5
  double v22; // st4
  char v23; // al
  _BYTE v25[12]; // [esp+2Ch] [ebp-124h] BYREF
  float v26[8]; // [esp+38h] [ebp-118h] BYREF
  float v27; // [esp+58h] [ebp-F8h]
  int v28; // [esp+88h] [ebp-C8h] BYREF
  float v29[16]; // [esp+94h] [ebp-BCh] BYREF
  char v30; // [esp+D4h] [ebp-7Ch]
  bool v31; // [esp+D5h] [ebp-7Bh]
  float v32; // [esp+E4h] [ebp-6Ch] BYREF
  float v33; // [esp+E8h] [ebp-68h]
  float v34; // [esp+ECh] [ebp-64h]
  float v35[3]; // [esp+F0h] [ebp-60h] BYREF
  float v36; // [esp+FCh] [ebp-54h] BYREF
  float v37; // [esp+100h] [ebp-50h]
  float v38; // [esp+104h] [ebp-4Ch]
  _DWORD v39[3]; // [esp+108h] [ebp-48h] BYREF
  _DWORD v40[3]; // [esp+114h] [ebp-3Ch] BYREF
  float v41; // [esp+120h] [ebp-30h] BYREF
  float v42; // [esp+124h] [ebp-2Ch]
  float v43; // [esp+128h] [ebp-28h]
  float v44; // [esp+12Ch] [ebp-24h] BYREF
  float v45; // [esp+130h] [ebp-20h]
  float v46; // [esp+134h] [ebp-1Ch]
  int v47; // [esp+138h] [ebp-18h] BYREF
  int v48; // [esp+13Ch] [ebp-14h]
  int v49; // [esp+144h] [ebp-Ch]
  void *v50; // [esp+148h] [ebp-8h]
  void *retaddr; // [esp+150h] [ebp+0h]

  v49 = a2;
  v50 = retaddr;
  sub_101EDA00(a4, 3, &v36);
  sub_101ED7B0(a4, v39);
  v7 = *(_DWORD *)(a1 + 324);
  if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 324) & 0xFFF) + 2) != v7 >> 12 )
  {
    v8 = 0;
    v9 = -1;
  }
  else
  {
    v8 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 324) & 0xFFF) + 1);
    v9 = -1;
  }
  do
  {
    ++v9;
    if ( a5 )
    {
      v47 = sub_10115FB0();
      v44 = (double)v47 * 0.000030518509 + (double)v47 * 0.000030518509 - 1.0;
      v47 = sub_10115FB0();
      v45 = (double)v47 * 0.000030518509 + (double)v47 * 0.000030518509 - 1.0;
      v47 = sub_10115FB0();
      v10 = (double)v47 * 0.000030518509 + (double)v47 * 0.000030518509 - 1.0;
      v41 = v44;
      v42 = v45;
    }
    else
    {
      v40[0] = v39[0];
      *(float *)&v40[1] = *(float *)&v39[1] + a6;
      v40[2] = v39[2];
      sub_101EDFB0(v40, &v41);
      v10 = RandomFloat(-1.0, 1.0);
    }
    v43 = v10;
    v11 = 192.0 * v10;
    v12 = v42 * 192.0 + v37;
    v13 = v41 * 192.0 + v36 - v36;
    v29[4] = v13;
    v14 = v13;
    v29[5] = v12 - v37;
    v15 = v11 + v38 - v38;
    v29[6] = v15;
    v31 = 0.0 != v15 * v15 + v14 * v14 + (v12 - v37) * (v12 - v37);
    v29[14] = 0.0;
    v29[13] = 0.0;
    v29[12] = 0.0;
    v30 = 1;
    v29[10] = 0.0;
    v29[9] = 0.0;
    v29[8] = 0.0;
    v29[0] = v36;
    v29[1] = v37;
    v29[2] = v38;
    sub_1012D400(v8, 0);
    (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
      dword_104131A0,
      v29,
      1174421507,
      &v28,
      v25);
    if ( *(_DWORD *)(dword_10439134 + 48) )
      sub_10130AC0((int)v25, (int)v26, 255, 0, 0, 1, 5.0);
  }
  while ( v27 >= 1.0 && v9 < 3 );
  if ( v27 < 1.0 && !(unsigned __int8)sub_1017AD20(v26, 0) )
  {
    v44 = v26[0];
    v45 = v26[1];
    v46 = v26[2];
    v16 = sub_101356E0();
    sub_101EDFB0(v16, &v32);
    v44 = v44 - v32 * 8.0;
    v45 = v45 - v33 * 8.0;
    v46 = v46 - 8.0 * v34;
    v35[0] = -v32;
    v35[1] = -v33;
    v35[2] = -v34;
    ((void (__thiscall *)(int (__stdcall ***)(char), float *, float *, _DWORD))(*off_103DFD80)[7])(
      off_103DFD80,
      &v44,
      v35,
      0);
    sub_100F32D0(&v47, "dust");
    sub_100F3060(&v44);
    v17 = sub_100F29B0("effects/tesla_glow_noz");
    v18 = sub_100F2B60(60, v17, &v44);
    v19 = v18;
    if ( v18 )
    {
      *(float *)(v18 + 44) = 0.0;
      *(float *)(v18 + 40) = RandomFloat(0.5, 1.0);
      *(float *)(v19 + 24) = flt_10459240;
      *(float *)(v19 + 28) = flt_10459244;
      *(float *)(v19 + 32) = flt_10459248;
      v20 = RandomFloat(0.75, 1.25);
      if ( v20 <= 1.0 )
        v21 = v20;
      else
        v21 = 1.0;
      v48 = (int)(v21 * 255.0);
      *(_BYTE *)(v19 + 48) = v48;
      if ( v20 <= 1.0 )
        v22 = v20;
      else
        v22 = 1.0;
      v48 = (int)(v22 * 255.0);
      *(_BYTE *)(v19 + 49) = v48;
      if ( v20 > 1.0 )
        v20 = 1.0;
      v48 = (int)(v20 * 255.0);
      *(_BYTE *)(v19 + 50) = v48;
      v48 = (int)RandomFloat(6.0, 13.0);
      v23 = v48;
      *(_BYTE *)(v19 + 53) = v48;
      *(_BYTE *)(v19 + 54) = v23 - 2;
      *(_WORD *)(v19 + 51) = 2815;
      *(float *)(v19 + 36) = RandomFloat(0.0, 360.0);
      *(float *)(v19 + 56) = 0.0;
    }
    if ( v47 )
      sub_100F2FF0();
  }
  return sub_10049350(v26, &v36, v8);
}
