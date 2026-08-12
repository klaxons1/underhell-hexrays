// bad sp value at call has been detected, the output may be wrong!
unsigned int __usercall sub_1014F0B0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  float *v5; // eax
  int v6; // eax
  double v7; // st7
  float v8; // edx
  float v9; // eax
  double v10; // st7
  unsigned int result; // eax
  signed int v12; // edx
  double v13; // st7
  double v14; // st6
  int *v15; // ecx
  int v16; // edi
  int v17; // edx
  float v19[22]; // [esp+24h] [ebp-10Ch] BYREF
  _BYTE v20[12]; // [esp+7Ch] [ebp-B4h] BYREF
  int v21; // [esp+88h] [ebp-A8h] BYREF
  _BYTE v22[12]; // [esp+D4h] [ebp-5Ch] BYREF
  int v23; // [esp+E0h] [ebp-50h] BYREF
  signed int v24; // [esp+ECh] [ebp-44h]
  float v25[3]; // [esp+F0h] [ebp-40h] BYREF
  float v26[3]; // [esp+FCh] [ebp-34h] BYREF
  float v27[3]; // [esp+108h] [ebp-28h] BYREF
  signed int v28; // [esp+114h] [ebp-1Ch]
  float v29; // [esp+118h] [ebp-18h] BYREF
  float v30; // [esp+11Ch] [ebp-14h]
  float v31; // [esp+120h] [ebp-10h]
  int v32; // [esp+124h] [ebp-Ch]
  void *v33; // [esp+128h] [ebp-8h]
  void *retaddr; // [esp+130h] [ebp+0h]

  v32 = a2;
  v33 = retaddr;
  sub_100DF330((float *)a1);
  v5 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC, a3, a4);
  v25[0] = v5[3];
  v25[1] = v5[4];
  v25[2] = v5[5];
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v7 = *(float *)(a1 + 832) + *(float *)(a1 + 716);
  v26[0] = *(float *)(v6 + 24);
  v8 = *(float *)(v6 + 28);
  v29 = v7;
  v26[1] = v8;
  v9 = *(float *)(v6 + 32);
  v30 = *(float *)(a1 + 836) + *(float *)(a1 + 720);
  v29 = COERCE_FLOAT(&v29);
  v10 = *(float *)(a1 + 840) + *(float *)(a1 + 724);
  v26[2] = v9;
  v31 = v10;
  sub_100D8E00((_DWORD *)a1, &v29, (float *)LODWORD(v30));
  v30 = COERCE_FLOAT(v22);
  v29 = COERCE_FLOAT(&v29);
  v30 = *(float *)(a1 + 848) + *(float *)(a1 + 720);
  v31 = *(float *)(a1 + 852) + *(float *)(a1 + 724);
  sub_100D8E00((_DWORD *)a1, &v29, (float *)LODWORD(v30));
  sub_1011BB20((int)&v23, (int)v25, (int)v26, 255, 0, 0, 127, 0.0);
  sub_1011BB20((int)v22, (int)v25, (int)v26, 0, 0, 255, 127, 0.0);
  sub_1011BBD0(a1, 200, 180, 63, 63, 0.0);
  sub_1001F200(v19, (float *)(a1 + 844), (float *)(a1 + 844), v25, v26);
  sub_10265570(0, 8);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v19,
    81931,
    v27,
    v20);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v20, (int)&v21, 255, 255, 0, 1, -1.0);
  result = *(_DWORD *)(a1 + 824);
  v12 = 0;
  v24 = result;
  v28 = 0;
  if ( (int)result > 0 )
  {
    v13 = 16.0;
    v14 = -16.0;
    do
    {
      result = *(_DWORD *)(*(_DWORD *)(a1 + 812) + 4 * v12);
      if ( result != -1 )
      {
        v15 = &off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(a1 + 812) + 4 * v12) & 0xFFF) + 1];
        result >>= 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(a1 + 812) + 4 * v12) & 0xFFF) + 2] == result )
        {
          v16 = *v15;
          if ( *v15 )
          {
            v17 = *(_DWORD *)(v16 + 252);
            v29 = v13;
            v30 = v13;
            v31 = 8.0;
            v27[0] = v14;
            v27[1] = v27[0];
            v27[2] = 0.0;
            if ( (v17 & 0x800) != 0 )
              sub_100DAE60(v16);
            result = sub_1011BB20(v16 + 580, (int)v27, (int)&v29, 150, 0, 0, 63, 0.0);
            v12 = v28;
            v14 = -16.0;
            v13 = 16.0;
          }
        }
      }
      v28 = ++v12;
    }
    while ( v12 < v24 );
  }
  return result;
}
