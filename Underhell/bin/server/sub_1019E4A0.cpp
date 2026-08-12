int __userpurge sub_1019E4A0@<eax>(int a1@<ecx>, int a2@<ebp>, float *a3, int a4, float a5, char a6)
{
  int v6; // edi
  bool v7; // zf
  int result; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // edx
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // eax
  int v20; // esi
  int v21; // edi
  double v22; // st4
  float v23[22]; // [esp+24h] [ebp-12Ch] BYREF
  _BYTE v24[12]; // [esp+7Ch] [ebp-D4h] BYREF
  float v25[19]; // [esp+88h] [ebp-C8h] BYREF
  int v26; // [esp+D4h] [ebp-7Ch] BYREF
  float v27[3]; // [esp+E0h] [ebp-70h] BYREF
  float v28; // [esp+ECh] [ebp-64h] BYREF
  float v29; // [esp+F0h] [ebp-60h]
  float v30; // [esp+F4h] [ebp-5Ch]
  int v31; // [esp+F8h] [ebp-58h]
  int v32; // [esp+FCh] [ebp-54h]
  int v33; // [esp+100h] [ebp-50h]
  float v34; // [esp+104h] [ebp-4Ch]
  int v35; // [esp+108h] [ebp-48h]
  int v36; // [esp+10Ch] [ebp-44h]
  _DWORD *v37; // [esp+110h] [ebp-40h]
  float v38; // [esp+114h] [ebp-3Ch]
  int v39; // [esp+118h] [ebp-38h]
  int v40; // [esp+11Ch] [ebp-34h]
  int v41; // [esp+120h] [ebp-30h]
  int v42; // [esp+124h] [ebp-2Ch]
  float v43; // [esp+128h] [ebp-28h] BYREF
  float v44; // [esp+12Ch] [ebp-24h]
  float v45; // [esp+130h] [ebp-20h] BYREF
  int v46; // [esp+134h] [ebp-1Ch]
  int v47; // [esp+138h] [ebp-18h]
  int v48; // [esp+13Ch] [ebp-14h]
  int v49; // [esp+140h] [ebp-10h]
  _DWORD v50[3]; // [esp+144h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+150h] [ebp+0h]

  v50[0] = a2;
  v50[1] = retaddr;
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 4) == 0;
  v33 = a1;
  if ( v7 )
    return 0;
  v38 = a5 * a5;
  result = sub_1019E380(a1, a3, 120.0);
  v42 = result;
  if ( !result )
  {
    v43 = *a3;
    v44 = a3[1];
    if ( !sub_1019DEA0((int)v50, a3, &v45, 0) )
      return 0;
    v7 = dword_10632620++ == -1;
    v45 = v45 + 36.0;
    if ( v7 )
      dword_10632620 = 1;
    v9 = (int)((*a3 - *(float *)(v6 + 20)) / *(float *)(v6 + 8));
    v49 = v9;
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(v6 + 12);
      if ( v9 >= v10 )
        v49 = v10 - 1;
    }
    else
    {
      v49 = 0;
    }
    v11 = (int)((a3[1] - *(float *)(v6 + 24)) / *(float *)(v6 + 8));
    v46 = v11;
    if ( v11 >= 0 )
    {
      v12 = *(_DWORD *)(v6 + 16);
      if ( v11 >= v12 )
        v46 = v12 - 1;
    }
    else
    {
      v46 = 0;
    }
    v13 = 0;
    v40 = (int)(a5 / *(float *)(v6 + 8));
    v47 = 0;
    if ( v40 >= 0 )
    {
      do
      {
        v14 = -v13;
        v15 = v49 - v13;
        v32 = -v13;
        v31 = v49 - v13;
        v39 = v49 - v13;
        v41 = v13 + v49;
        if ( v49 - v13 <= v13 + v49 )
        {
          while ( 1 )
          {
            if ( v15 >= 0 && v15 < *(_DWORD *)(v6 + 12) )
            {
              v16 = v46 + v14;
              v17 = v13 + v46;
              v35 = v16;
              v48 = v16;
              v36 = v13 + v46;
              if ( v16 <= v13 + v46 )
              {
                do
                {
                  if ( v16 >= 0 && v16 < *(_DWORD *)(v6 + 16) && (v15 <= v31 || v15 >= v41 || v16 <= v35 || v16 >= v17) )
                  {
                    v18 = (_DWORD *)(*(_DWORD *)(v6 + 4) + 36 * (v15 + v16 * *(_DWORD *)(v6 + 12)));
                    v19 = v18[3];
                    v37 = v18;
                    if ( v19 != -1 )
                    {
                      do
                      {
                        v20 = 12 * v19;
                        v21 = *(_DWORD *)(12 * v19 + *v18);
                        if ( *(_DWORD *)(v21 + 492) != dword_10632620 )
                        {
                          *(_DWORD *)(v21 + 492) = dword_10632620;
                          sub_1018AE60((float *)v21, &v43, &v28);
                          v22 = (v30 - v45) * (v30 - v45) + (v29 - v44) * (v29 - v44) + (v28 - v43) * (v28 - v43);
                          v34 = v22;
                          if ( v38 > v22 )
                          {
                            if ( a6 )
                            {
                              v27[0] = v28;
                              v27[1] = v29;
                              v27[2] = v30 + 36.0;
                              sub_1001F180(v23, &v43, v27);
                              sub_10265570(0, 0);
                              (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
                                dword_106B31F4,
                                v23,
                                81931,
                                &v26,
                                v24);
                              if ( *(_DWORD *)(dword_106CE63C + 48) )
                                sub_101A0AD0((int)v24, (int)v25, 255, 0, 0, 1, 5.0);
                              if ( 1.0 == v25[8] )
                              {
                                v38 = v34;
                                v42 = v21;
                                v40 = v47 + 1;
                              }
                            }
                            else
                            {
                              v42 = v21;
                              v38 = v22;
                              v40 = v47 + 1;
                            }
                          }
                          v16 = v48;
                          v18 = v37;
                        }
                        v19 = *(_DWORD *)(*v18 + v20 + 8);
                      }
                      while ( v19 != -1 );
                      v6 = v33;
                      v15 = v39;
                    }
                    v17 = v36;
                  }
                  v48 = ++v16;
                }
                while ( v16 <= v17 );
                v13 = v47;
              }
            }
            v39 = ++v15;
            if ( v15 > v41 )
              break;
            v14 = v32;
          }
        }
        v47 = ++v13;
      }
      while ( v13 <= v40 );
    }
    return v42;
  }
  return result;
}
