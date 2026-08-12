// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_103E3DC0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  double v5; // st7
  int v6; // edi
  double v7; // st7
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st7
  double v12; // st6
  double v13; // st7
  bool v14; // zf
  double v15; // st6
  double v16; // st4
  double v17; // st2
  char v18; // cl
  double v19; // st7
  double v20; // st7
  int v21; // eax
  int v22; // esi
  float v24; // [esp+24h] [ebp-140h]
  float v25; // [esp+24h] [ebp-140h]
  float v28; // [esp+38h] [ebp-12Ch] BYREF
  float v29; // [esp+44h] [ebp-120h] BYREF
  _BYTE v30[12]; // [esp+50h] [ebp-114h] BYREF
  float v31[10]; // [esp+5Ch] [ebp-108h] BYREF
  char v32; // [esp+86h] [ebp-DEh]
  char v33; // [esp+92h] [ebp-D2h]
  float v34[16]; // [esp+A8h] [ebp-BCh] BYREF
  char v35; // [esp+E8h] [ebp-7Ch]
  bool v36; // [esp+E9h] [ebp-7Bh]
  float v37[3]; // [esp+F8h] [ebp-6Ch] BYREF
  float v38[3]; // [esp+104h] [ebp-60h] BYREF
  _DWORD v39[3]; // [esp+110h] [ebp-54h] BYREF
  float v40[3]; // [esp+11Ch] [ebp-48h] BYREF
  float v41; // [esp+128h] [ebp-3Ch]
  float v42; // [esp+12Ch] [ebp-38h] BYREF
  float v43; // [esp+130h] [ebp-34h]
  float v44; // [esp+134h] [ebp-30h]
  float v45; // [esp+138h] [ebp-2Ch]
  float v46; // [esp+13Ch] [ebp-28h]
  float v47; // [esp+140h] [ebp-24h]
  float v48; // [esp+144h] [ebp-20h]
  float v49; // [esp+148h] [ebp-1Ch] BYREF
  float v50; // [esp+14Ch] [ebp-18h]
  float v51; // [esp+150h] [ebp-14h]
  char v52; // [esp+157h] [ebp-Dh]
  int v53; // [esp+158h] [ebp-Ch]
  void *v54; // [esp+15Ch] [ebp-8h]
  void *retaddr; // [esp+164h] [ebp+0h]

  v53 = a2;
  v54 = retaddr;
  sub_100BF1B0((void *)a1, "cable_tip", (int)v39, &v28, v38, &v29);
  v5 = *(float *)(dword_106B31C8 + 16) * -600.0;
  v52 = 0;
  v41 = v5;
  v49 = *(float *)v39;
  v50 = *(float *)&v39[1];
  v51 = *(float *)&v39[2];
  v6 = 0;
  v45 = v38[0] * 2500.0;
  v46 = v38[1] * 2500.0;
  v7 = 2500.0 * v38[2];
  v47 = v7;
  v48 = 0.0;
  while ( v6 < 100000 )
  {
    v42 = v49;
    v43 = v50;
    v44 = v51;
    v8 = *(float *)(dword_106B31C8 + 16);
    v9 = v7;
    v10 = v45 * v8 + v49;
    v11 = v46 * v8 + v50;
    v12 = v8 * v9 + v51;
    v49 = v10;
    v50 = v11;
    v51 = v12;
    v24 = (v12 - v44) * (v12 - v44) + (v10 - v42) * (v10 - v42) + (v11 - v43) * (v11 - v43);
    v13 = off_10689708(v24);
    v14 = *(_DWORD *)(dword_106EE25C + 48) == 0;
    v48 = v13 + v48;
    if ( !v14 )
      sub_1011BC50(&v42, &v49, 0, 255, 0, 1, 5.0);
    v15 = v49 - v42;
    v34[4] = v15;
    v16 = v50 - v43;
    v34[5] = v16;
    v17 = v51 - v44;
    v34[6] = v17;
    v36 = 0.0 != v17 * v17 + v15 * v15 + v16 * v16;
    v34[14] = 0.0;
    v34[13] = 0.0;
    v34[12] = 0.0;
    v34[10] = 0.0;
    v35 = 1;
    v34[9] = 0.0;
    v34[8] = 0.0;
    v34[0] = v42;
    v34[1] = v43;
    v34[2] = v44;
    sub_10265570(v40, a1, 0);
    (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v34,
      33570827,
      v40,
      v30);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v30, (int)v31, 255, 0, 0, 1, 5.0);
    if ( (v33 & 4) != 0 || v32 == 1 )
    {
      v18 = 1;
      ++v6;
    }
    else
    {
      v18 = 0;
    }
    ++v6;
    if ( 1.0 != v31[8] && !v18 )
    {
      v49 = v31[0];
      v52 = 1;
      v50 = v31[1];
      v51 = v31[2];
      if ( *(_DWORD *)(dword_106EE25C + 48) )
      {
        v37[0] = -256.0;
        v37[1] = -256.0;
        v37[2] = -256.0;
        v40[0] = 256.0;
        v40[1] = 256.0;
        v40[2] = 256.0;
        sub_1011BB20((int)&v49, (int)v40, (int)v37, 255, 0, 0, 0, 5.0);
      }
      v7 = v47;
      break;
    }
    v7 = v47 + v41;
    v47 = v7;
  }
  v25 = v7 * v7 + v46 * v46 + v45 * v45;
  v19 = off_10689708(v25);
  v20 = v48 / v19;
  if ( v20 > *(float *)(dword_106EE214 + 44) )
  {
    v20 = *(float *)(dword_106EE214 + 44);
    if ( !v52 )
    {
      v49 = flt_106F1CA8;
      v50 = flt_106F1CAC;
      v51 = flt_106F1CB0;
    }
  }
  *(float *)(a1 + 1240) = v20 + *(float *)(dword_106B31C8 + 12);
  *(float *)(a1 + 1244) = v49;
  *(float *)(a1 + 1248) = v50;
  *(float *)(a1 + 1252) = v51;
  *(float *)(a1 + 1256) = *(float *)(dword_106EE1CC + 44) + *(float *)(dword_106B31C8 + 12);
  sub_1023C380((_DWORD *)a1, (int)"HeadcrabCanister.LaunchSound", 0.0, 0);
  v21 = (**(int (__thiscall ***)(int, int, int))(a1 + 1120))(a1 + 1120, a3, a4);
  v22 = v21;
  if ( (*(_DWORD *)(v21 + 252) & 0x800) != 0 )
    sub_100DAE60(v21);
  return sub_10261B70((float *)(v22 + 580), 50.0, 150.0, 1.0, 750.0, 0, 1);
}
