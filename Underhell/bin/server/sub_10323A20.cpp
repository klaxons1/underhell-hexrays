// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10323A20(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // ecx
  int *v6; // ecx
  double v7; // st7
  void (__thiscall *v8)(int, float *, int, _DWORD *); // edx
  float v9; // ecx
  double v10; // st7
  double v11; // st4
  double v12; // st6
  double v13; // st7
  double v14; // st7
  double v15; // st7
  long double v16; // st7
  int v17; // edi
  double v18; // st7
  double v19; // st6
  double v20; // st7
  double v21; // st7
  double v22; // st6
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  double v27; // st7
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  _BYTE *v32; // esi
  float v33; // [esp+20h] [ebp-F4h]
  float v35[20]; // [esp+38h] [ebp-DCh] BYREF
  _BYTE v36[12]; // [esp+88h] [ebp-8Ch] BYREF
  float v37[19]; // [esp+94h] [ebp-80h] BYREF
  _DWORD v38[3]; // [esp+E0h] [ebp-34h] BYREF
  float v39; // [esp+ECh] [ebp-28h]
  float v40; // [esp+F0h] [ebp-24h]
  float v41; // [esp+F4h] [ebp-20h] BYREF
  float v42; // [esp+F8h] [ebp-1Ch]
  float v43; // [esp+FCh] [ebp-18h]
  float v44; // [esp+100h] [ebp-14h]
  float *v45; // [esp+104h] [ebp-10h]
  int v46; // [esp+108h] [ebp-Ch]
  void *v47; // [esp+10Ch] [ebp-8h]
  void *retaddr; // [esp+114h] [ebp+0h]

  v46 = a2;
  v47 = retaddr;
  v33 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v33, 0);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 728))(a1, a3, a4);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 784))(a1, a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 732))(a1) )
  {
    v5 = *(_DWORD *)(a1 + 864);
    v44 = 0.0;
    if ( v5 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(a1 + 24);
        if ( v6 )
          sub_100194B0(v6, 864);
      }
      *(float *)(a1 + 864) = 0.0;
    }
  }
  v44 = 164.0;
  v7 = *(float *)(a1 + 3696);
  v45 = &v41;
  v41 = v7;
  LODWORD(v44) = a1 + 3696;
  v42 = *(float *)(a1 + 3700);
  v43 = *(float *)(a1 + 3704) - 256.0;
  sub_1001F180(v35, (float *)(a1 + 3696), &v41);
  sub_10265570(v38, a1, 0);
  v8 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
  v45 = (float *)v36;
  v8(dword_106B31F4, v35, 16395, v38);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v36, (int)v37, 255, 0, 0, 1, 5.0);
  if ( v37[8] < 1.0 )
  {
    v10 = *(float *)(a1 + 3696);
    v44 = v9;
    v11 = *(float *)(a1 + 3700) - v37[1];
    v12 = *(float *)(a1 + 3704) - v37[2];
    v44 = (v10 - v37[0]) * (v10 - v37[0]) + v11 * v11 + v12 * v12;
    v13 = off_10689708(v44);
    if ( v13 - 164.0 < 78.0 )
    {
      if ( v13 * 0.5 >= v13 - 78.0 )
        v44 = v13 * 0.5;
      else
        v44 = v13 - 78.0;
    }
  }
  v14 = *(float *)(a1 + 3704);
  HIBYTE(v45) = 0;
  v15 = v14 - *(float *)(a1 + 3716);
  v40 = v15;
  v16 = fabs(v15 - v44);
  v39 = v16;
  if ( v16 > 20.0 )
  {
    v17 = dword_106B31C8;
    v18 = sub_100E92C0((_DWORD *)a1, 0);
    v19 = v44;
    v20 = (*(float *)(v17 + 12) - v18) * *(float *)(a1 + 9928);
    if ( v44 > (double)*(float *)(a1 + 3668) )
    {
      v22 = v20;
      v21 = v44;
      v19 = v22 + *(float *)(a1 + 3668);
      if ( v19 > v44 )
        goto LABEL_18;
    }
    else
    {
      v21 = *(float *)(a1 + 3668) - v20;
      if ( v19 <= v21 )
      {
LABEL_18:
        v44 = v21;
        sub_10322D80(a1, v44);
        goto LABEL_36;
      }
    }
    v44 = v19;
    sub_10322D80(a1, v44);
    goto LABEL_36;
  }
  v23 = *(_DWORD *)(a1 + 3736);
  if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v23 >> 12 )
    v24 = 0;
  else
    v24 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
  (*(void (__thiscall **)(_DWORD, float *, _DWORD *))(**(_DWORD **)(v24 + 424) + 204))(
    *(_DWORD *)(v24 + 424),
    &v41,
    v38);
  if ( v42 * v42 + v41 * v41 + v43 * v43 < 1.0 )
  {
    v25 = *(_DWORD *)(a1 + 3736);
    if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v26 + 1120) + 8))(10000.0);
    v27 = 1.0;
    if ( v39 <= 1.0 )
    {
      if ( v42 * v42 + v41 * v41 + v43 * v43 < 0.0099999998 )
        HIBYTE(v45) = v39 <= 1.0;
    }
    else
    {
      if ( v44 < (double)v40 )
        v27 = -1.0;
      v44 = v27 + *(float *)(a1 + 3668);
      sub_10322D80(a1, v44);
    }
  }
LABEL_36:
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 732))(a1) && HIBYTE(v45) )
  {
    v28 = *(_DWORD *)(a1 + 3736);
    if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v28 >> 12 )
      v29 = 0;
    else
      v29 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
    sub_1025FAC0(v29);
    v30 = *(_DWORD *)(a1 + 3732);
    if ( v30 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3732) & 0xFFF) + 2] != v30 >> 12 )
      v31 = 0;
    else
      v31 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3732) & 0xFFF) + 1];
    sub_1025FAC0(v31);
    v44 = 0.0;
    v43 = 0.0;
    *(_DWORD *)(a1 + 3736) = -1;
    v42 = 0.0;
    *(_DWORD *)(a1 + 3732) = -1;
    sub_100EC3F0((_DWORD *)a1, SLODWORD(v42), v43, SLODWORD(v44));
    v32 = (_BYTE *)(a1 + 224);
    if ( *v32 != 2 )
    {
      (*(void (__thiscall **)(_BYTE *, _BYTE *))(*((_DWORD *)v32 - 56) + 472))(v32 - 224, v32);
      *v32 = 2;
    }
  }
  else
  {
    sub_103223D0(a1);
  }
}
