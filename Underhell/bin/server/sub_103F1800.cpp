int __cdecl sub_103F1800(int a1, int a2, int a3)
{
  int (__thiscall *v4)(int); // edx
  int i; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  double v10; // st6
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // eax
  double v19; // st7
  float *v20; // eax
  int v21; // edi
  float *v22; // esi
  int v23; // ecx
  double v24; // st6
  double v25; // st1
  int v26; // ecx
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // rtt
  double v31; // st5
  double v32; // st7
  double v33; // st7
  float v35; // [esp+34h] [ebp-F0h]
  _DWORD v36[21]; // [esp+44h] [ebp-E0h] BYREF
  float v37; // [esp+98h] [ebp-8Ch]
  float v38[3]; // [esp+A0h] [ebp-84h] BYREF
  float v39[3]; // [esp+ACh] [ebp-78h] BYREF
  int v40[3]; // [esp+B8h] [ebp-6Ch] BYREF
  int v41; // [esp+C4h] [ebp-60h]
  int v42; // [esp+C8h] [ebp-5Ch]
  int v43; // [esp+CCh] [ebp-58h] BYREF
  float v44; // [esp+D0h] [ebp-54h]
  int v45[3]; // [esp+D4h] [ebp-50h] BYREF
  int v46; // [esp+E0h] [ebp-44h]
  int v47; // [esp+E4h] [ebp-40h]
  float v48[3]; // [esp+E8h] [ebp-3Ch] BYREF
  float v49; // [esp+F4h] [ebp-30h]
  float v50; // [esp+F8h] [ebp-2Ch]
  float v51; // [esp+FCh] [ebp-28h]
  int v52; // [esp+100h] [ebp-24h]
  int v53; // [esp+104h] [ebp-20h] BYREF
  int v54; // [esp+108h] [ebp-1Ch]
  int v55; // [esp+10Ch] [ebp-18h]
  int v56; // [esp+110h] [ebp-14h]
  int v57; // [esp+114h] [ebp-10h]
  int v58; // [esp+118h] [ebp-Ch] BYREF
  float v59; // [esp+11Ch] [ebp-8h]
  float v60; // [esp+120h] [ebp-4h]
  float v61; // [esp+134h] [ebp+10h]
  float v62; // [esp+134h] [ebp+10h]
  float *v63; // [esp+134h] [ebp+10h]
  int v64; // [esp+134h] [ebp+10h]

  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a3 + 204))(a3, v38, 0);
  v44 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 116))(a3);
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 316);
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  memset(v45, 0, sizeof(v45));
  v46 = 0;
  v47 = 0;
  memset(v40, 0, sizeof(v40));
  v41 = 0;
  v42 = 0;
  for ( i = v4(a3);
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 4))(i);
        (*(void (__thiscall **)(int))(*(_DWORD *)i + 48))(i) )
  {
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)i + 8))(i, 1);
    v61 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6);
    if ( v7 )
    {
      v8 = sub_100D7680(v7);
      if ( v8 )
      {
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1080))(a1, v8) != 3 && v61 + v61 < v44 )
        {
          v62 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)i + 24))(i);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)i + 20))(i, &v58);
          v9 = 0;
          v10 = *(float *)&v58 * v62;
          *(float *)&v58 = v10;
          v59 = v59 * v62;
          v60 = v62 * v60;
          if ( v56 <= 0 )
            goto LABEL_11;
          while ( *(_DWORD *)(v53 + 4 * v9) != v8 )
          {
            if ( ++v9 >= v56 )
              goto LABEL_11;
          }
          if ( v9 >= 0 )
          {
            v19 = v10 + *(float *)(v45[0] + 12 * v9);
            v20 = (float *)(v45[0] + 12 * v9);
            *v20 = v19;
            v20[1] = v20[1] + v59;
            v20[2] = v20[2] + v60;
          }
          else
          {
LABEL_11:
            v11 = *(_DWORD *)(v8 + 424);
            if ( v11 && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 280))(v11) && *(_BYTE *)(v8 + 306) == 3 )
            {
              if ( sub_101C4640((_DWORD *)v8, 6) )
              {
                v63 = (float *)sub_101C46F0((_DWORD *)v8, 6u);
                if ( *(float *)(dword_106B31C8 + 12) - *v63 > 0.5
                  && v38[1] * v59 + v38[0] * *(float *)&v58 + v38[2] * v60 > 0.0 )
                {
                  v12 = v56;
                  v13 = v56;
                  v52 = v56;
                  if ( v56 + 1 > v54 )
                  {
                    sub_102ABFC0(&v53, v56 - v54 + 1);
                    v12 = v56;
                    v13 = v52;
                  }
                  v14 = v53;
                  v56 = v12 + 1;
                  v15 = v12 - v13;
                  v57 = v53;
                  if ( v15 > 0 )
                  {
                    memcpy((void *)(v53 + 4 * v13 + 4), (const void *)(v53 + 4 * v13), 4 * v15);
                    v13 = v52;
                    v14 = v53;
                  }
                  v16 = (int *)(v14 + 4 * v13);
                  if ( v16 )
                    *v16 = v8;
                  sub_1013A0E0(v45, v46, &v58);
                  (*(void (__thiscall **)(int, float *))(*(_DWORD *)i + 16))(i, v48);
                  sub_1013A0E0(v40, v41, v48);
                }
              }
              else
              {
                v63 = (float *)sub_101C4730((_DWORD *)v8, 6u);
                *v63 = *(float *)(dword_106B31C8 + 12);
              }
              v63[1] = *(float *)(dword_106B31C8 + 12) + 1.0;
              v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 424) + 280))(*(_DWORD *)(v8 + 424));
              (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v17 + 56))(v17, v63 + 2, &v43);
              v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 424) + 280))(*(_DWORD *)(v8 + 424));
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v18 + 8))(v18, 1.0, v43);
            }
          }
        }
      }
    }
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 320))(a3, i);
  if ( v56 )
  {
    v21 = v56 - 1;
    if ( v56 - 1 >= 0 )
    {
      v22 = (float *)(v40[0] + 12 * v21);
      v64 = v45[0] - v40[0];
      do
      {
        v23 = *(_DWORD *)(*(_DWORD *)(v53 + 4 * v21) + 424);
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v23 + 204))(v23, &v58, 0);
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a3 + 212))(a3, v22, v39);
        *(float *)&v58 = *(float *)&v58 - v39[0];
        v59 = v59 - v39[1];
        v60 = v60 - v39[2];
        v49 = *(float *)((char *)v22 + v64);
        v50 = *(float *)((char *)v22 + v64 + 4);
        v51 = *(float *)((char *)v22 + v64 + 8);
        off_10689714();
        v24 = v50 * v59 + *(float *)&v58 * v49 + v60 * v51;
        v25 = v50 * v24;
        v37 = v59 - v25;
        *(float *)&v58 = v49 * 300.0 + *(float *)&v58 - v49 * v24 - v49 * v24;
        v59 = v37 - v25 + v50 * 300.0;
        v60 = v51 * 300.0 + v60 - v24 * v51 - v24 * v51;
        v26 = *(_DWORD *)(*(_DWORD *)(v53 + 4 * v21) + 424);
        v27 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v26 + 116))(v26);
        v28 = *(float *)&v58 * v27;
        *(float *)&v58 = v28;
        v29 = v59 * v27;
        v59 = v29;
        v30 = v29;
        v31 = v27 * v60;
        v60 = v31;
        v35 = v31 * v31 + v28 * v28 + v30 * v30;
        v32 = off_10689708(v35);
        v33 = v32 * *(float *)(dword_106968DC + 44) + v60;
        v60 = v33;
        v48[0] = -*(float *)&v58;
        v48[1] = -v59;
        v48[2] = -v33;
        sub_102487B0((int)v36, a2, a2, (float *)&v58, v22, 200.0, 17, 0, 0);
        sub_100D9E70(*(int **)(v53 + 4 * v21), (int)v22, v36);
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a3 + 240))(a3, v48, v22);
        v22 -= 3;
        --v21;
      }
      while ( v21 >= 0 );
    }
  }
  sub_102375F0(v40);
  sub_102375F0(v45);
  return sub_102375F0(&v53);
}
