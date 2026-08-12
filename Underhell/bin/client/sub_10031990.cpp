int __userpurge sub_10031990@<eax>(int a1@<ecx>, float a2@<ebx>, int a3, float a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  float *v9; // esi
  float *v10; // esi
  double v11; // st7
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int (__thiscall *v22)(int, _DWORD); // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  long double v27; // st7
  int v28; // ebx
  int v29; // edi
  int v32; // [esp+2Ch] [ebp-38h] BYREF
  int v33; // [esp+30h] [ebp-34h]
  int v34; // [esp+34h] [ebp-30h]
  int v35; // [esp+38h] [ebp-2Ch]
  float *v36; // [esp+40h] [ebp-24h]
  float v37; // [esp+44h] [ebp-20h]
  float v38; // [esp+48h] [ebp-1Ch]
  float v39; // [esp+4Ch] [ebp-18h]
  float v40; // [esp+50h] [ebp-14h]
  int v41; // [esp+54h] [ebp-10h]
  int v42; // [esp+58h] [ebp-Ch]
  int v43; // [esp+5Ch] [ebp-8h]
  char v44; // [esp+61h] [ebp-3h] BYREF
  char v45; // [esp+62h] [ebp-2h] BYREF
  char v46; // [esp+63h] [ebp-1h]

  v4 = a1;
  v43 = a1;
  sub_1022DFC0(&v44);
  v5 = 0;
  v46 = 0;
  v42 = 0;
  if ( *(int *)(v4 + 1992) > 0 )
  {
    v41 = 0;
    v36 = (float *)(v4 + 2000);
    while ( 1 )
    {
      sub_1022DFC0(&v45);
      sub_10031140(v5 + *(_DWORD *)(v4 + 1980), (int)&v32, a4, *(float *)(*(_DWORD *)(v4 + 1980) + v5 + 36), 0);
      v6 = v5 + *(_DWORD *)(v4 + 1980);
      if ( v35 < 0 || v35 >= *(unsigned __int16 *)(v6 + 16) )
      {
        v11 = 0.0;
        v10 = 0;
        v40 = 0.0;
      }
      else
      {
        v7 = v35 + *(unsigned __int16 *)(v6 + 14);
        v8 = *(unsigned __int16 *)(v6 + 12);
        if ( v7 >= v8 )
          v7 -= v8;
        v9 = (float *)(*(_DWORD *)(v6 + 8) + 36 * v7);
        v40 = *v9;
        v10 = v9 + 1;
        v11 = 0.0;
      }
      if ( v34 < 0 || v34 >= *(unsigned __int16 *)(v6 + 16) )
      {
        v39 = v11;
        v16 = 0;
      }
      else
      {
        v12 = v34 + *(unsigned __int16 *)(v6 + 14);
        v13 = *(unsigned __int16 *)(v6 + 12);
        if ( v12 >= v13 )
          v12 -= v13;
        v14 = 9 * v12;
        v15 = *(_DWORD *)(v6 + 8);
        v39 = *(float *)(v15 + 4 * v14);
        v16 = v15 + 4 * v14 + 4;
      }
      if ( v33 < 0 || v33 >= *(unsigned __int16 *)(v6 + 16) )
      {
        v20 = 0;
      }
      else
      {
        v17 = v33 + *(unsigned __int16 *)(v6 + 14);
        v18 = *(unsigned __int16 *)(v6 + 12);
        if ( v17 >= v18 )
          v17 -= v18;
        v19 = *(_DWORD *)(v6 + 8);
        v11 = *(float *)(v19 + 36 * v17);
        v20 = v19 + 36 * v17 + 4;
      }
      v38 = v11;
      if ( v10 && v16 && *(_DWORD *)v10 != *(_DWORD *)v16 )
      {
        v21 = *(_DWORD *)(v43 + 8);
        v37 = *(float *)(dword_10403714 + 48);
        v22 = *(int (__thiscall **)(int, _DWORD))(v21 + 36);
        v46 = 1;
        v23 = v22(v43 + 8, LODWORD(a2));
        if ( LODWORD(v37) == v23 )
        {
          v24 = sub_10127960(*(_DWORD *)v10);
          sub_10025960(
            "(%7.4f : %30s : %5.3f : %4.2f : %1d)\n",
            v40,
            (const char *)(v24 + *(_DWORD *)(v24 + 4)),
            v10[5],
            v10[2],
            v42);
          v25 = sub_10127960(*(_DWORD *)v16);
          sub_10025960(
            "(%7.4f : %30s : %5.3f : %4.2f : %1d)\n",
            v39,
            (const char *)(v25 + *(_DWORD *)(v25 + 4)),
            *(float *)(v16 + 20),
            *(float *)(v16 + 8),
            v42);
          if ( v20 )
          {
            v26 = sub_10127960(*(_DWORD *)v20);
            sub_10025960(
              "(%7.4f : %30s : %5.3f : %4.2f : %1d)\n",
              v38,
              (const char *)(v26 + *(_DWORD *)(v26 + 4)),
              *(float *)(v20 + 20),
              *(float *)(v20 + 8),
              v42);
          }
        }
        *(float *)v16 = *v10;
        *(float *)(v16 + 20) = v10[1];
        *(float *)(v16 + 8) = v10[2];
        if ( v20 )
        {
          v37 = 0.0;
          v27 = v40 - v39;
          if ( fabs(v27) > 0.001 )
            v37 = (v38 - v39) / v27;
          v28 = v43;
          *(float *)v20 = *v10;
          *(float *)(v20 + 20) = (unsigned __int8)sub_100256E0(a3, *(_DWORD *)v10)
                               ? sub_1002BBD0(v37, v10[1], v10[5])
                               : (v10[5] - v10[1]) * v37 + v10[1];
          *(float *)(v20 + 8) = v10[2];
        }
        else
        {
          v28 = v43;
        }
        v29 = v41 + *(_DWORD *)(v28 + 1980);
        **(_BYTE **)(v29 + 32) = sub_100256E0(a3, *(_DWORD *)v10);
        a2 = a4;
        (*(void (**)(void))(*(_DWORD *)(*(_DWORD *)(v28 + 1980) + v41) + 24))();
        *v36 = v10[1] - 0.01;
      }
      else
      {
        v28 = v43;
      }
      sub_1022DFE0(&v45);
      ++v36;
      v41 += 44;
      if ( ++v42 >= *(_DWORD *)(v28 + 1992) )
        break;
      v5 = v41;
      v4 = v43;
    }
    if ( v46 )
      sub_10039310(v43);
  }
  return sub_1022DFE0(&v44);
}
