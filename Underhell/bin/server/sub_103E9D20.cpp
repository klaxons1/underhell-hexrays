int __cdecl sub_103E9D20(int a1, int a2, int a3)
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
  double v25; // rt2
  int v26; // ecx
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // rt1
  double v31; // st5
  double v32; // st7
  double v33; // st7
  int v34; // eax
  int v35; // eax
  __int16 v37; // [esp+2Ch] [ebp-F8h]
  float v38; // [esp+30h] [ebp-F4h]
  float v39; // [esp+34h] [ebp-F0h]
  _DWORD v40[21]; // [esp+44h] [ebp-E0h] BYREF
  float v41; // [esp+98h] [ebp-8Ch]
  float v42[3]; // [esp+A0h] [ebp-84h] BYREF
  float v43[3]; // [esp+ACh] [ebp-78h] BYREF
  int v44[3]; // [esp+B8h] [ebp-6Ch] BYREF
  int v45; // [esp+C4h] [ebp-60h]
  int v46; // [esp+C8h] [ebp-5Ch]
  float v47; // [esp+CCh] [ebp-58h]
  int v48[3]; // [esp+D0h] [ebp-54h] BYREF
  int v49; // [esp+DCh] [ebp-48h]
  int v50; // [esp+E0h] [ebp-44h]
  float v51[3]; // [esp+E4h] [ebp-40h] BYREF
  float v52; // [esp+F0h] [ebp-34h]
  float v53; // [esp+F4h] [ebp-30h]
  float v54; // [esp+F8h] [ebp-2Ch]
  int v55; // [esp+FCh] [ebp-28h]
  int v56; // [esp+100h] [ebp-24h] BYREF
  int v57; // [esp+104h] [ebp-20h] BYREF
  int v58; // [esp+108h] [ebp-1Ch]
  int v59; // [esp+10Ch] [ebp-18h]
  int v60; // [esp+110h] [ebp-14h]
  int v61; // [esp+114h] [ebp-10h]
  int v62; // [esp+118h] [ebp-Ch] BYREF
  float v63; // [esp+11Ch] [ebp-8h]
  float v64; // [esp+120h] [ebp-4h]
  float v65; // [esp+134h] [ebp+10h]
  float v66; // [esp+134h] [ebp+10h]
  float *v67; // [esp+134h] [ebp+10h]
  int v68; // [esp+134h] [ebp+10h]

  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)a3 + 204))(a3, v42, 0);
  v47 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 116))(a3);
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 316);
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  memset(v48, 0, sizeof(v48));
  v49 = 0;
  v50 = 0;
  memset(v44, 0, sizeof(v44));
  v45 = 0;
  v46 = 0;
  for ( i = v4(a3);
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 4))(i);
        (*(void (__thiscall **)(int))(*(_DWORD *)i + 48))(i) )
  {
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)i + 8))(i, 1);
    v65 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6);
    if ( v7 )
    {
      v8 = sub_100D7680(v7);
      if ( v8 )
      {
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1080))(a1, v8) != 3 && v65 + v65 < v47 )
        {
          v66 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)i + 24))(i);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)i + 20))(i, &v62);
          v9 = 0;
          v10 = *(float *)&v62 * v66;
          *(float *)&v62 = v10;
          v63 = v63 * v66;
          v64 = v66 * v64;
          if ( v60 <= 0 )
            goto LABEL_11;
          while ( *(_DWORD *)(v57 + 4 * v9) != v8 )
          {
            if ( ++v9 >= v60 )
              goto LABEL_11;
          }
          if ( v9 >= 0 )
          {
            v19 = v10 + *(float *)(v48[0] + 12 * v9);
            v20 = (float *)(v48[0] + 12 * v9);
            *v20 = v19;
            v20[1] = v20[1] + v63;
            v20[2] = v20[2] + v64;
          }
          else
          {
LABEL_11:
            v11 = *(_DWORD *)(v8 + 424);
            if ( v11 && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 280))(v11) && *(_BYTE *)(v8 + 306) == 3 )
            {
              if ( sub_101C4640((_DWORD *)v8, 6) )
              {
                v67 = (float *)sub_101C46F0((_DWORD *)v8, 6u);
                if ( *(float *)(dword_106B31C8 + 12) - *v67 > 0.5
                  && v42[0] * *(float *)&v62 + v42[1] * v63 + v42[2] * v64 > 0.0 )
                {
                  v12 = v60;
                  v13 = v60;
                  v55 = v60;
                  if ( v60 + 1 > v58 )
                  {
                    sub_102ABFC0(&v57, v60 - v58 + 1);
                    v12 = v60;
                    v13 = v55;
                  }
                  v14 = v57;
                  v60 = v12 + 1;
                  v15 = v12 - v13;
                  v61 = v57;
                  if ( v15 > 0 )
                  {
                    memcpy((void *)(v57 + 4 * v13 + 4), (const void *)(v57 + 4 * v13), 4 * v15);
                    v13 = v55;
                    v14 = v57;
                  }
                  v16 = (int *)(v14 + 4 * v13);
                  if ( v16 )
                    *v16 = v8;
                  sub_1013A0E0(v48, v49, &v62);
                  (*(void (__thiscall **)(int, float *))(*(_DWORD *)i + 16))(i, v51);
                  sub_1013A0E0(v44, v45, v51);
                }
              }
              else
              {
                v67 = (float *)sub_101C4730((_DWORD *)v8, 6u);
                *v67 = *(float *)(dword_106B31C8 + 12);
              }
              v67[1] = *(float *)(dword_106B31C8 + 12) + 1.0;
              v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 424) + 280))(*(_DWORD *)(v8 + 424));
              (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v17 + 56))(v17, v67 + 2, &v56);
              v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 424) + 280))(*(_DWORD *)(v8 + 424));
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v18 + 8))(v18, 1.0, v56);
            }
          }
        }
      }
    }
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 320))(a3, i);
  if ( v60 )
  {
    v21 = v60 - 1;
    if ( v60 - 1 >= 0 )
    {
      v22 = (float *)(v44[0] + 12 * v21);
      v68 = v48[0] - v44[0];
      do
      {
        v23 = *(_DWORD *)(*(_DWORD *)(v57 + 4 * v21) + 424);
        (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v23 + 204))(v23, &v62, 0);
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a3 + 212))(a3, v22, v43);
        *(float *)&v62 = *(float *)&v62 - v43[0];
        v63 = v63 - v43[1];
        v64 = v64 - v43[2];
        v52 = *(float *)((char *)v22 + v68);
        v53 = *(float *)((char *)v22 + v68 + 4);
        v54 = *(float *)((char *)v22 + v68 + 8);
        off_10689714();
        v24 = v52 * *(float *)&v62 + v63 * v53 + v64 * v54;
        v25 = v53 * v24;
        v41 = v63 - v25;
        *(float *)&v62 = v52 * 300.0 + *(float *)&v62 - v52 * v24 - v52 * v24;
        v63 = v41 - v25 + v53 * 300.0;
        v64 = v54 * 300.0 + v64 - v24 * v54 - v24 * v54;
        v26 = *(_DWORD *)(*(_DWORD *)(v57 + 4 * v21) + 424);
        v27 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v26 + 116))(v26);
        v28 = *(float *)&v62 * v27;
        *(float *)&v62 = v28;
        v29 = v63 * v27;
        v63 = v29;
        v30 = v29;
        v31 = v27 * v64;
        v64 = v31;
        v39 = v30 * v30 + v28 * v28 + v31 * v31;
        v32 = off_10689708(v39);
        v33 = v32 * *(float *)(dword_106968DC + 44) + v64;
        v64 = v33;
        v51[0] = -*(float *)&v62;
        v51[1] = -v63;
        v51[2] = -v33;
        sub_102487B0((int)v40, a2, a2, (float *)&v62, v22, 200.0, 17, 0, 0);
        sub_100D9E70(*(int **)(v57 + 4 * v21), (int)v22, v40);
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a3 + 240))(a3, v51, v22);
        v34 = **(_DWORD **)(*(_DWORD *)(v57 + 4 * v21) + 424);
        v56 = *(_DWORD *)(*(_DWORD *)(v57 + 4 * v21) + 424);
        v38 = *(float *)(dword_106B31C8 + 16);
        v37 = (*(int (**)(void))(v34 + 152))();
        v35 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 152))(a3);
        sub_101BA710(a2, v56, 4, v35, v37, v38, 200.0);
        v22 -= 3;
        --v21;
      }
      while ( v21 >= 0 );
    }
  }
  sub_102375F0(v44);
  sub_102375F0(v48);
  return sub_102375F0(&v57);
}
