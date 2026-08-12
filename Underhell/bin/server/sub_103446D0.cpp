int __userpurge sub_103446D0@<eax>(int a1@<ecx>, int a2@<ebp>, float a3, float *a4, int a5)
{
  float *v6; // esi
  unsigned int *v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  long double v10; // st7
  int v11; // ecx
  int v12; // esi
  char v13; // dl
  int *v14; // ecx
  int v15; // eax
  int v16; // ecx
  int result; // eax
  float v18[22]; // [esp+24h] [ebp-13Ch] BYREF
  _BYTE v19[48]; // [esp+7Ch] [ebp-E4h] BYREF
  float v20[3]; // [esp+ACh] [ebp-B4h] BYREF
  float v21[19]; // [esp+B8h] [ebp-A8h] BYREF
  _DWORD v22[3]; // [esp+104h] [ebp-5Ch] BYREF
  float v23[3]; // [esp+110h] [ebp-50h] BYREF
  float v24[3]; // [esp+11Ch] [ebp-44h] BYREF
  float v25[3]; // [esp+128h] [ebp-38h] BYREF
  float v26[3]; // [esp+134h] [ebp-2Ch] BYREF
  int v27; // [esp+140h] [ebp-20h]
  float v28; // [esp+144h] [ebp-1Ch]
  int v29; // [esp+148h] [ebp-18h]
  int v30; // [esp+14Ch] [ebp-14h]
  char v31; // [esp+150h] [ebp-10h]
  int v32; // [esp+154h] [ebp-Ch]
  void *v33; // [esp+158h] [ebp-8h]
  void *retaddr; // [esp+160h] [ebp+0h]

  v32 = a2;
  v33 = retaddr;
  v27 = a1;
  sub_10422540(a5, v25);
  v6 = a4;
  v25[0] = v25[0] + 90.0;
  sub_10425040(v25, a4, v19);
  v30 = 0;
  v7 = (unsigned int *)(a1 + 3648);
  v28 = (1.0 - a3) * 1.5707964 * 1600.0;
  do
  {
    v8 = *v7;
    if ( a3 < 0.99000001 )
    {
      if ( v8 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      sub_100FB0C0(v9);
      v10 = sin(*(float *)(dword_106B31C8 + 12) * 3.0) * 0.3926990816987241 + (double)v30 * 1.5707964 + 0.52359879;
      v24[0] = cos(v10) * v28;
      v24[1] = v28 * sin(v10);
      v24[2] = 1600.0;
      sub_10421C00(v24, v19, v26);
      off_10689714();
      v23[0] = v26[0] * 1600.0 + *v6;
      v23[1] = v26[1] * 1600.0 + v6[1];
      v23[2] = 1600.0 * v26[2] + v6[2];
      sub_1001F180(v18, v6, v23);
      sub_10265570(v22, v27, 0);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v18,
        1174421507,
        v22,
        v20);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v20, (int)v21, 255, 0, 0, 1, 5.0);
      if ( *v7 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      v12 = v11 + 116;
      v29 = (int)(a3 * 255.0);
      v13 = v29;
      v31 = v29;
      if ( *(_BYTE *)(v11 + 119) != (_BYTE)v29 )
      {
        if ( *(_BYTE *)(v11 + 84) )
        {
          *(_BYTE *)(v11 + 88) |= 1u;
        }
        else
        {
          v14 = *(int **)(v11 + 24);
          if ( v14 )
          {
            sub_100194B0(v14, 116);
            v13 = v31;
          }
        }
        *(_BYTE *)(v12 + 3) = v13;
      }
      if ( *v7 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
        v15 = 0;
      else
        v15 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      sub_100F9FC0((float *)(v15 + 948), v20);
      if ( *v7 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
      sub_100E10C0(v16, v21);
      v6 = a4;
    }
    else if ( v8 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != v8 >> 12 )
    {
      sub_100F95A0(0);
    }
    else
    {
      sub_100F95A0((_DWORD *)off_1061BE18[4 * (*v7 & 0xFFF) + 1]);
    }
    result = v30 + 1;
    ++v7;
    v30 = result;
  }
  while ( result < 4 );
  return result;
}
