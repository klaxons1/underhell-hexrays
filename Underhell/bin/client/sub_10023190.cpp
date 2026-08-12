_DWORD *__usercall sub_10023190@<eax>(_DWORD *result@<eax>, int a2@<ecx>)
{
  int v2; // edx
  double v4; // st7
  double v5; // st6
  double v6; // st5
  int v7; // ebx
  double v8; // st4
  double v9; // st3
  double v10; // st2
  __int16 v11; // fps
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  double v15; // st1
  double v16; // st2
  double v17; // rt0
  double v18; // st1
  double v19; // st2
  double v20; // st1
  double v21; // rt2
  __int16 v22; // fps
  double v23; // rtt
  double v24; // st2
  double v25; // st7
  bool v26; // c0
  char v27; // c2
  bool v28; // c3
  double v29; // st2
  int v30; // ecx
  double v31; // st2
  double v32; // rt1
  double v33; // st2
  double v34; // st7
  double v35; // st7
  double v36; // rt2
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // esi
  int v41; // eax
  _BYTE v42[4]; // [esp+4h] [ebp-88h] BYREF
  int v43; // [esp+8h] [ebp-84h]
  int v44; // [esp+Ch] [ebp-80h]
  int v45; // [esp+10h] [ebp-7Ch]
  int v46; // [esp+14h] [ebp-78h]
  float v47; // [esp+60h] [ebp-2Ch]
  float v48; // [esp+64h] [ebp-28h]
  float v49; // [esp+68h] [ebp-24h]
  int v50; // [esp+88h] [ebp-4h]

  v2 = 0;
  v50 = 0;
  if ( *(int *)(a2 + 4080) > 0 )
  {
    v4 = 0.0;
    v5 = 0.25;
    v6 = 4.0;
    v7 = a2 + 332;
    v8 = 1.0;
    v9 = 0.0;
    while ( 1 )
    {
      v10 = *(float *)(a2 + 4184) - *(float *)(v7 - 8);
      if ( !*(_BYTE *)(v7 + 4) )
      {
        v12 = v10 > 0.5;
        v13 = 0;
        v14 = 0.5 == v10;
        LOWORD(result) = v11;
        if ( v10 >= 0.5 )
        {
          v35 = v9;
          goto LABEL_31;
        }
        *(_BYTE *)(v7 + 4) = 1;
        *(float *)v7 = v4;
        *(float *)(v7 - 4) = *(float *)(v7 - 8);
      }
      v15 = v10;
      v16 = *(float *)(a2 + 4184) - *(float *)(v7 - 4);
      if ( v15 >= v5 )
      {
        v21 = v15;
        v20 = *(float *)v7 - v16 * v6;
        v19 = v21;
        if ( v20 <= v9 )
          v20 = v9;
      }
      else
      {
        v17 = v15;
        v18 = v16;
        v19 = v17;
        v20 = v18 * v6 + *(float *)v7;
        if ( v20 >= v8 )
          v20 = v8;
      }
      *(float *)v7 = v20;
      v23 = v19;
      v24 = v4;
      v25 = v23;
      v26 = v24 < *(float *)v7;
      v27 = 0;
      v28 = v24 == *(float *)v7;
      LOWORD(result) = v22;
      if ( v24 >= *(float *)v7 )
      {
        *(_BYTE *)(v7 + 4) = 0;
      }
      else
      {
        v29 = *(float *)v7;
        v30 = *(_DWORD *)(v7 - 332);
        v44 = v30;
        v45 = 0;
        v43 = 4;
        v46 = v2;
        v31 = 3.0 * (v29 * v29) - v29 * (v29 * v29 + v29 * v29);
        v47 = v31;
        v48 = 1.0;
        v32 = v31;
        v33 = v25;
        v34 = v32;
        if ( v33 >= v5 )
        {
          v36 = v9;
          v9 = v34;
          v35 = v36;
        }
        else
        {
          v35 = v9;
        }
        v49 = v9;
        if ( v30 < 0 || (v37 = **(_DWORD **)(a2 + 4088), v30 >= *(_DWORD *)(v37 + 284)) )
        {
          result = (_DWORD *)DevWarning(
                               1,
                               "AutoIKRelease (%s) got an out of range chain %d (%d)\n",
                               (const char *)(**(_DWORD **)(a2 + 4088) + 12),
                               v30,
                               *(_DWORD *)(**(_DWORD **)(a2 + 4088) + 284));
        }
        else
        {
          v38 = v37 + *(_DWORD *)(v37 + 288) + 16 * v30;
          if ( v38 )
          {
            v39 = *(_DWORD *)(*(_DWORD *)(v38 + 12) + v38 + 56);
            if ( v39 < 0 || v39 >= *(_DWORD *)(v37 + 156) )
            {
              result = (_DWORD *)DevWarning(
                                   1,
                                   "AutoIKRelease (%s) got an out of range bone %d (%d)\n",
                                   (const char *)(**(_DWORD **)(a2 + 4088) + 12),
                                   v39,
                                   *(_DWORD *)(**(_DWORD **)(a2 + 4088) + 156));
            }
            else if ( v37 + 216 * v39 + *(_DWORD *)(v37 + 160) )
            {
              result = *(_DWORD **)(*(_DWORD *)(a2 + 4088) + 44);
              if ( (result[v39] & *(_DWORD *)(a2 + 4188)) == 0 )
              {
                *(_BYTE *)(v7 + 4) = 0;
                goto LABEL_31;
              }
              v40 = 20 * v44;
              v41 = sub_10022D20((int *)(20 * v44 + *(_DWORD *)(a2 + 4092)));
              result = sub_1001C990((_DWORD *)(*(_DWORD *)(v40 + *(_DWORD *)(a2 + 4092)) + 132 * v41), (int)v42);
            }
            else
            {
              result = (_DWORD *)DevWarning(
                                   1,
                                   "AutoIKRelease (%s) got a NULL pBone %d\n",
                                   (const char *)(v37 + 12),
                                   v39);
            }
          }
          else
          {
            result = (_DWORD *)DevWarning(1, "AutoIKRelease (%s) got a NULL pchain %d\n", (const char *)(v37 + 12), v30);
          }
        }
      }
      *(float *)(v7 - 4) = *(float *)(a2 + 4184);
      v35 = 0.0;
      v5 = 0.25;
      v8 = 1.0;
      v6 = 4.0;
LABEL_31:
      v2 = v50 + 1;
      v7 += 340;
      v50 = v2;
      if ( v2 >= *(_DWORD *)(a2 + 4080) )
        return result;
      v9 = v35;
      v4 = 0.0;
    }
  }
  return result;
}
