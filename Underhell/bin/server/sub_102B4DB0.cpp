// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_102B4DB0(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, float a6)
{
  int v6; // edi
  double v7; // st7
  int v8; // esi
  int v9; // esi
  int v10; // ecx
  int j; // esi
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // edx
  int v15; // ecx
  double v16; // st7
  int v17; // ecx
  int (__thiscall *v18)(int); // edx
  int v19; // eax
  void (__noreturn ***v20)(); // eax
  double v21; // st7
  int v22; // ecx
  float v24[20]; // [esp+28h] [ebp-FCh] BYREF
  _BYTE v25[12]; // [esp+78h] [ebp-ACh] BYREF
  float v26[19]; // [esp+84h] [ebp-A0h] BYREF
  _DWORD v27[3]; // [esp+D0h] [ebp-54h] BYREF
  int v28; // [esp+DCh] [ebp-48h]
  float v29; // [esp+E0h] [ebp-44h] BYREF
  float v30; // [esp+E4h] [ebp-40h]
  float v31; // [esp+E8h] [ebp-3Ch]
  int v32; // [esp+ECh] [ebp-38h]
  int v33; // [esp+F0h] [ebp-34h]
  float v34; // [esp+F4h] [ebp-30h] BYREF
  float v35; // [esp+F8h] [ebp-2Ch]
  float v36; // [esp+FCh] [ebp-28h]
  int v37; // [esp+100h] [ebp-24h]
  float v38; // [esp+104h] [ebp-20h] BYREF
  float v39; // [esp+108h] [ebp-1Ch]
  float v40; // [esp+10Ch] [ebp-18h]
  float v41; // [esp+110h] [ebp-14h]
  int i; // [esp+114h] [ebp-10h]
  _DWORD v43[3]; // [esp+118h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+124h] [ebp+0h]

  v43[0] = a2;
  v43[1] = retaddr;
  v38 = *a5;
  v6 = a1;
  v39 = a5[1];
  v7 = a5[2] - a6;
  v33 = a1;
  v40 = v7;
  sub_1001F180(v24, a5, &v38);
  sub_10265570(v27, 0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v24,
    16427,
    v27,
    v25,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v25, (int)v26, 255, 0, 0, 1, 5.0);
  v34 = v26[0];
  v35 = v26[1];
  v36 = v26[2] + 64.0;
  if ( *(_DWORD *)(dword_106DCA24 + 48) == 1 )
  {
    v29 = -16.0;
    v30 = -16.0;
    v31 = -16.0;
    sub_1011C000(&v34, &v29, &v38, 0, 255, 255, 1, 0.1);
  }
  v8 = *(_DWORD *)(v6 + 3912);
  HIBYTE(v41) = v8 > 0;
  v9 = v8 - 1;
  if ( v9 >= 0 )
  {
    v10 = 12 * v9;
    for ( i = 12 * v9; ; v10 = i )
    {
      if ( !sub_102B49D0(v6, v6, v10 + *(_DWORD *)(v6 + 3900), &v34) )
      {
        if ( *(_DWORD *)(v6 + 3912) - v9 - 1 > 0 )
          memcpy(
            (void *)(*(_DWORD *)(v6 + 3900) + i),
            (const void *)(*(_DWORD *)(v6 + 3900) + i + 12),
            12 * (*(_DWORD *)(v6 + 3912) - v9 - 1));
        --*(_DWORD *)(v6 + 3912);
      }
      i -= 12;
      if ( --v9 < 0 )
        break;
    }
  }
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v6 + 3864) )
  {
    v37 = *(_DWORD *)(v6 + 3912);
    if ( v37 < 6 )
    {
      *(float *)&v32 = 9999.0;
      for ( j = sub_1012BFF0(&dword_1069E3E0, 0, &v34, 256.0); j; j = sub_1012BFF0(&dword_1069E3E0, j, &v34, 256.0) )
      {
        v12 = sub_101243B0(j);
        v13 = *(_DWORD *)(j + 252) >> 21;
        v28 = v12;
        if ( (v13 & 1) != 0
          || !v12
          && *(_BYTE *)(j + 306) != 6
          && (!*(_DWORD *)(j + 424) || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)j + 320))(j)) )
        {
          continue;
        }
        *(float *)&i = 0.0;
        if ( v37 > 0 )
        {
          v14 = (_DWORD *)(*(_DWORD *)(v6 + 3900) + 4);
          while ( 1 )
          {
            if ( *v14 == -1 || (v6 = v33, off_1061BE18[4 * (*v14 & 0xFFF) + 2] != *v14 >> 12) )
              v15 = 0;
            else
              v15 = off_1061BE18[4 * (*v14 & 0xFFF) + 1];
            if ( v15 == j )
              break;
            ++i;
            v14 += 3;
            if ( i >= v37 )
              goto LABEL_29;
          }
          continue;
        }
LABEL_29:
        v16 = 3.4028235e38;
        *(float *)&i = 3.4028235e38;
        if ( v28 )
        {
          v16 = 1.0;
          *(float *)&i = 1.0;
        }
        else
        {
          v17 = *(_DWORD *)(j + 424);
          if ( v17 )
          {
            v16 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v17 + 116))(v17);
            *(float *)&i = v16;
            if ( v16 > 300.0 )
              continue;
          }
        }
        if ( v16 <= *(float *)&v32 )
        {
          (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)j + 520))(j, &v38, &v34, 1);
          if ( fabs(v40 - v36) <= 96.0 )
          {
            v29 = v38 - v34;
            v30 = v39 - v35;
            v31 = 0.0;
            if ( off_10689714() <= 256.0 )
            {
              if ( !(*(int (__thiscall **)(int))(*(_DWORD *)j + 340))(j)
                || (sub_1002A5F0((int)v43, j, &v38, &v34, 16395, j, 0, (int)v25), 1.0 == v26[8]) )
              {
                v18 = *(int (__thiscall **)(int))(*(_DWORD *)j + 8);
                v32 = i;
                v27[0] = &washentity_t::`vftable';
                v19 = *(_DWORD *)v18(j);
                *(float *)&v27[2] = *(float *)(dword_106B31C8 + 12);
                v27[1] = v19;
                sub_102B4220((int *)(v6 + 3900), *(_DWORD *)(v6 + 3912), (int)v27);
                v37 = *(_DWORD *)(v6 + 3912);
                if ( v37 >= 6 )
                  break;
              }
            }
          }
        }
      }
      if ( HIBYTE(v41) )
      {
        if ( !*(_DWORD *)(v6 + 3912) && *(_DWORD *)(v6 + 3784) )
        {
          v20 = sub_1023DBA0();
          v41 = 1.0;
          v21 = 0.0;
          goto LABEL_47;
        }
      }
      else if ( *(_DWORD *)(v6 + 3912) && *(_DWORD *)(v6 + 3784) )
      {
        v20 = sub_1023DBA0();
        v21 = 1.0;
        v41 = 1.0;
LABEL_47:
        v22 = *(_DWORD *)(v6 + 3784);
        v40 = v21;
        ((void (__thiscall *)(void (__noreturn ***)(), int, float, float))(*v20)[12])(
          v20,
          v22,
          COERCE_FLOAT(LODWORD(v40)),
          COERCE_FLOAT(LODWORD(v41)));
      }
    }
  }
}
