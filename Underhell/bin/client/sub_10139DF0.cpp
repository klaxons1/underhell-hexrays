int __thiscall sub_10139DF0(void *this, int a2, int a3)
{
  int v3; // edi
  float *v4; // eax
  float *v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // edx
  int v9; // eax
  double v10; // st7
  int (__thiscall *v11)(int); // eax
  double v12; // st7
  int v13; // ecx
  int v14; // edx
  double v15; // st6
  double v16; // st7
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int *v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // ecx
  __int16 v30; // ax
  int v31; // ecx
  int result; // eax
  void *v33; // esi
  int v34[9]; // [esp+10h] [ebp-40Ch] BYREF
  int v35; // [esp+34h] [ebp-3E8h]
  float v36; // [esp+38h] [ebp-3E4h]
  int v37; // [esp+40h] [ebp-3DCh]
  int v38; // [esp+44h] [ebp-3D8h]
  int v39; // [esp+48h] [ebp-3D4h]
  float v40; // [esp+F0h] [ebp-32Ch]
  float v41; // [esp+F4h] [ebp-328h]
  float v42; // [esp+F8h] [ebp-324h]
  float v43; // [esp+104h] [ebp-318h]
  float v44; // [esp+108h] [ebp-314h]
  unsigned int v45; // [esp+110h] [ebp-30Ch]
  unsigned int v46[9]; // [esp+114h] [ebp-308h] BYREF
  int v47; // [esp+138h] [ebp-2E4h]
  int v48; // [esp+13Ch] [ebp-2E0h]
  float v49; // [esp+384h] [ebp-98h]
  _DWORD v50[23]; // [esp+388h] [ebp-94h] BYREF
  int v51; // [esp+3E4h] [ebp-38h]
  char v52; // [esp+3F8h] [ebp-24h]
  int v53; // [esp+3FCh] [ebp-20h]
  int v54; // [esp+400h] [ebp-1Ch]
  void *v55; // [esp+418h] [ebp-4h]

  v55 = this;
  sub_101393C0(v34);
  v3 = sub_100159B0((_DWORD *)a2);
  v50[0] = 0;
  v53 = -1;
  v50[12] = 0;
  v50[14] = 0;
  v52 = 1;
  v54 = 0;
  v4 = (float *)sub_100159D0((_DWORD *)a2);
  *(float *)&v50[5] = *v4;
  *(float *)&v50[6] = v4[1];
  *(float *)&v50[7] = v4[2];
  v5 = (float *)sub_10015AE0((_DWORD *)a2);
  *(float *)&v50[8] = *v5;
  v50[3] = 0;
  v6 = v5[1];
  v50[1] = 0;
  *(float *)&v50[9] = v6;
  *(float *)&v50[10] = v5[2];
  v7 = sub_10034480((__int16 *)a2);
  v8 = *(_DWORD *)(a2 + 4);
  *(float *)&v50[15] = *(float *)(a2 + 1320);
  v50[11] = v7;
  v9 = *(_DWORD *)(a2 + 1216);
  *(float *)&v50[16] = 0.0;
  v10 = *(float *)(a2 + 1308);
  v50[13] = v9;
  v11 = *(int (__thiscall **)(int))(v8 + 52);
  *(float *)&v50[17] = v10;
  *(float *)&v50[18] = *(float *)(a2 + 1312);
  *(float *)&v50[19] = *(float *)(a2 + 1316);
  *(float *)&v50[20] = *(float *)(a2 + 1324);
  *(float *)&v50[21] = (float)v11(a2 + 4);
  *(float *)&v50[22] = *(float *)(a2 + 1332);
  sub_10137490((int)v34, (int)v50);
  v12 = *(float *)(a2 + 1192);
  v13 = *(unsigned __int8 *)(a2 + 89);
  v14 = *(unsigned __int8 *)(a2 + 90);
  v51 = (int)*(float *)(a2 + 1328);
  v15 = (double)*(unsigned __int8 *)(a2 + 88);
  v44 = (float)v51;
  v38 |= v54;
  v43 = v12;
  v40 = v15;
  v41 = (float)v13;
  v42 = (float)v14;
  if ( *(int *)(a2 + 1216) <= 0 )
  {
    v35 = 0;
  }
  else
  {
    v16 = *(float *)(a2 + 1320) * *(float *)(a2 + 1308) / *(float *)(a2 + 1312) + 1.0;
    if ( v16 > 8.0 )
    {
      v16 = 8.0;
LABEL_4:
      v36 = v16;
      v35 = a2 + 1212;
      goto LABEL_8;
    }
    if ( v16 >= 1.0 )
      goto LABEL_4;
    v36 = 1.0;
    v35 = a2 + 1212;
  }
LABEL_8:
  switch ( v3 )
  {
    case 1:
      v27 = *(_DWORD *)(a2 + 1228);
      v28 = *(_DWORD *)(a2 + 1232);
      v47 = *(_DWORD *)(a2 + 1268);
      v29 = *(_DWORD *)(a2 + 1272);
      v37 = 0;
      v38 = 0;
      v45 = v27;
      v46[0] = v28;
      v48 = v29;
      if ( v27 != -1 && *((_DWORD *)off_103DCD74 + 4 * (v27 & 0xFFF) + 2) == v27 >> 12 )
        v38 = *((_DWORD *)off_103DCD74 + 4 * (v27 & 0xFFF) + 1) != 0;
      if ( sub_1006BE10(v46) )
        v38 |= 2u;
      goto LABEL_20;
    case 2:
      v17 = *(_DWORD *)(a2 + 1268);
      v18 = *(_DWORD *)(a2 + 1232);
      v45 = *(_DWORD *)(a2 + 1228);
      v19 = *(_DWORD *)(a2 + 1272);
      v47 = v17;
      v20 = *(_DWORD *)(a2 + 1208);
      v37 = 0;
      v38 = 3;
      v46[0] = v18;
      v48 = v19;
      v39 = v20;
      break;
    case 4:
      v24 = *(_DWORD *)(a2 + 1208);
      v25 = 0;
      v37 = 6;
      v38 = 3;
      v39 = v24;
      if ( v24 > 0 )
      {
        v26 = (int *)(a2 + 1268);
        do
        {
          v46[v25 - 1] = *(v26 - 10);
          *(&v47 + v25++) = *v26++;
        }
        while ( v25 < v39 );
      }
      break;
    case 5:
      v21 = *(_DWORD *)(a2 + 1268);
      v22 = *(_DWORD *)(a2 + 1232);
      v45 = *(_DWORD *)(a2 + 1228);
      v23 = *(_DWORD *)(a2 + 1272);
      v37 = 8;
      v38 = 3;
      v47 = v21;
      v46[0] = v22;
      v48 = v23;
LABEL_20:
      v39 = *(_DWORD *)(a2 + 1208);
      break;
    default:
      break;
  }
  v30 = sub_100159C0((_DWORD *)a2);
  v38 |= v30 & 0x2F0;
  if ( v45 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (v45 & 0xFFF) + 2) != v45 >> 12
    || !*((_DWORD *)off_103DCD74 + 4 * (v45 & 0xFFF) + 1)
    || sub_10142330() != 3
    || (v45 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v45 & 0xFFF) + 2) != v45 >> 12
      ? (v31 = 0)
      : (v31 = *((_DWORD *)off_103DCD74 + 4 * (v45 & 0xFFF) + 1)),
        (result = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 344))(v31), result != 11) && result != 10) )
  {
    v33 = v55;
    v49 = *(float *)(a2 + 1196);
    sub_10138E80((int)v34, *((float *)off_103DC81C + 4));
    return (*(int (__thiscall **)(void *, int *))(*(_DWORD *)v33 + 16))(v33, v34);
  }
  return result;
}
