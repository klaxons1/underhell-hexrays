void __usercall sub_102CE130(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  _DWORD *v8; // edi
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // eax
  unsigned __int8 (__thiscall *v13)(_DWORD *, int *, int *, float, _DWORD, int); // edx
  int (__thiscall *v14)(_DWORD *, int, int); // edx
  int v15; // edi
  float v16; // edi
  int v17; // eax
  int v18; // eax
  void (__thiscall *v19)(int, _DWORD); // edx
  float v20; // [esp+38h] [ebp-38h]
  float v21; // [esp+38h] [ebp-38h]
  int v23; // [esp+48h] [ebp-28h] BYREF
  float v24; // [esp+4Ch] [ebp-24h]
  float v25; // [esp+50h] [ebp-20h]
  float v26; // [esp+54h] [ebp-1Ch] BYREF
  float v27; // [esp+58h] [ebp-18h]
  float v28; // [esp+5Ch] [ebp-14h]
  int v29; // [esp+60h] [ebp-10h] BYREF
  float v30; // [esp+64h] [ebp-Ch]
  float v31; // [esp+68h] [ebp-8h]
  int v32; // [esp+6Ch] [ebp-4h] BYREF

  if ( *(float *)(a1 + 924) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v4 = *(_DWORD *)(a1 + 920);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 920) & 0xFFF) + 1];
      v6 = v4 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 920) & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 920) & 0xFFF) + 2] == v6 ? *v5 : 0;
          v8 = (_DWORD *)sub_100D7680(v7);
          if ( v8 )
          {
            if ( !*(_DWORD *)(a1 + 916) )
            {
              v9 = sub_102C8E80((float *)a1);
              *(float *)(a1 + 980) = 1.0;
              *(_DWORD *)(a1 + 916) = v9;
            }
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 744))(a1, &v29);
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            sub_10422220(a1 + 704, &v26);
            v10 = 2048.0;
            if ( ((*(int (__thiscall **)(_DWORD *))(*v8 + 1672))(v8) & 0x40000000) == 0
              || !v8[699]
              || (v11 = 3 * *(_DWORD *)(a1 + 832),
                  *(float *)&v23 = v26 * 2048.0 + *(float *)&v29,
                  v24 = v27 * 2048.0 + v30,
                  v25 = 2048.0 * v28 + v31,
                  v10 = flt_10662E40[v11],
                  !sub_1004B0B0(v8, (float *)&v29, (float *)&v23, flt_10662E40[v11], 96.0)) )
            {
              if ( (*(_DWORD *)(a1 + 248) & 0x1000) != 0
                || ((*(int (__thiscall **)(_DWORD *))(*v8 + 1672))(v8) & 0x10000000) == 0
                || (v12 = *(_DWORD *)(a1 + 832),
                    v13 = *(unsigned __int8 (__thiscall **)(_DWORD *, int *, int *, float, _DWORD, int))(*v8 + 2084),
                    *(float *)&v23 = v26 * 2048.0 + *(float *)&v29,
                    v24 = v27 * 2048.0 + v30,
                    v25 = 2048.0 * v28 + v31,
                    v10 = flt_10662E40[3 * v12],
                    !((int (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v13)(
                       v8,
                       &v29,
                       &v23,
                       flt_10662E40[3 * v12],
                       96.0,
                       1)) )
              {
                v14 = *(int (__thiscall **)(_DWORD *, int, int))(*v8 + 368);
                LOBYTE(v32) = 0;
                v15 = v14(v8, a2, a3);
                if ( (*(_DWORD *)(a1 + 248) & 0x20000) != 0
                  && v15
                  && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 320))(v15)
                  && !(*(_DWORD *)(a1 + 916) % 2) )
                {
                  (*(void (__thiscall **)(int, int *, int *, _DWORD))(*(_DWORD *)v15 + 520))(v15, &v23, &v29, 0);
                  v26 = *(float *)&v23 - *(float *)&v29;
                  v27 = v24 - v30;
                  v28 = v25 - v31;
                  v10 = off_10689714();
                  LOBYTE(v32) = 1;
                }
                v16 = *(float *)a1;
                sub_1026A890((unsigned int *)(a1 + 920));
                (*(void (__thiscall **)(int, int, int *, float *))(LODWORD(v16) + 752))(a1, 1, &v29, &v26);
                v17 = *(_DWORD *)(a1 + 1016);
                --*(_DWORD *)(a1 + 916);
                if ( v17 <= -1 || (v18 = v17 - 1, (*(_DWORD *)(a1 + 1016) = v18) != 0) )
                {
                  sub_102C8E50((float *)a1);
                  if ( *(_DWORD *)(a1 + 916) )
                  {
                    v19 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 748);
                    *(float *)(a1 + 980) = *(float *)(a1 + 980) - v10;
                    v20 = v10 + *(float *)(dword_106B31C8 + 12);
                    v19(a1, LODWORD(v20));
                  }
                  else
                  {
                    v21 = *(float *)(a1 + 980) + *(float *)(dword_106B31C8 + 12);
                    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 748))(a1, LODWORD(v21));
                  }
                }
                else
                {
                  v32 = -33;
                  sub_100332F0((int *)(a1 + 248), &v32);
                  sub_102CDC40((_DWORD *)a1);
                }
              }
            }
          }
        }
      }
    }
  }
}
