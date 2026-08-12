// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_102BB510@<eax>(float *a1@<ecx>, int a2@<ebp>, int a3@<esi>, float *a4, float *a5, float *a6)
{
  double v7; // st7
  int v8; // eax
  int v9; // ecx
  double v10; // st7
  double v11; // st7
  float *result; // eax
  float v14[20]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v15[12]; // [esp+84h] [ebp-9Ch] BYREF
  float v16[20]; // [esp+90h] [ebp-90h] BYREF
  float v17[3]; // [esp+E0h] [ebp-40h] BYREF
  void **v18; // [esp+ECh] [ebp-34h] BYREF
  float v19; // [esp+F0h] [ebp-30h] BYREF
  float v20; // [esp+F4h] [ebp-2Ch]
  float v21; // [esp+F8h] [ebp-28h]
  float v22; // [esp+FCh] [ebp-24h] BYREF
  float v23; // [esp+100h] [ebp-20h]
  float v24; // [esp+104h] [ebp-1Ch]
  float v25; // [esp+108h] [ebp-18h]
  float v26; // [esp+10Ch] [ebp-14h]
  float v27; // [esp+110h] [ebp-10h]
  int v28; // [esp+114h] [ebp-Ch]
  void *v29; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v28 = a2;
  v29 = retaddr;
  (*(void (__thiscall **)(float *, const char *, int))(*(_DWORD *)a1 + 104))(
    a1,
    "models/props_combine/headcrabcannister01a.mdl",
    a3);
  sub_10112C00((int)(a1 + 80), 2);
  v7 = a1[88];
  v19 = -v7;
  v20 = v19;
  v21 = v19;
  v25 = v7;
  v26 = v7;
  v27 = v7;
  sub_100D69D0(a1, SLODWORD(v26), SLODWORD(v27));
  (*(void (__thiscall **)(float *, float *, _DWORD, _DWORD))(*(_DWORD *)a1 + 528))(a1, &v22, 0, 0);
  v8 = *((_DWORD *)a1 + 63) >> 11;
  v18 = &CTraceFilterWorldOnly::`vftable';
  v25 = v22 * 10000.0;
  v26 = v23 * 10000.0;
  v27 = 10000.0 * v24;
  if ( (v8 & 1) != 0 )
    sub_100DAE60((int)a1);
  v9 = *((_DWORD *)a1 + 63) >> 11;
  v19 = a1[145] + v25;
  v20 = a1[146] + v26;
  v21 = a1[147] + v27;
  v25 = v22 * 100.0;
  v26 = v23 * 100.0;
  v27 = 100.0 * v24;
  if ( (v9 & 1) != 0 )
    sub_100DAE60((int)a1);
  v10 = a1[145] + v25;
  v27 = COERCE_FLOAT(&v19);
  v26 = COERCE_FLOAT(v17);
  v17[0] = v10;
  v17[1] = a1[146] + COERCE_FLOAT(v17);
  v17[2] = a1[147] + COERCE_FLOAT(&v19);
  sub_1001F180(v14, v17, &v19);
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v14,
    1,
    &v18,
    v15);
  v11 = -1.0;
  if ( *(_DWORD *)(dword_106CE63C + 48) )
  {
    sub_101A0AD0((int)v15, (int)v16, 255, 0, 0, 1, -1.0);
    v11 = -1.0;
  }
  *a4 = v16[0];
  a4[1] = v16[1];
  a4[2] = v16[2];
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
  {
    sub_100DAE60((int)a1);
    v11 = -1.0;
  }
  *a5 = a1[176];
  a5[1] = a1[177];
  a5[2] = a1[178];
  result = a6;
  *a6 = v22 * v11;
  a6[1] = v23 * v11;
  a6[2] = v11 * v24;
  return result;
}
