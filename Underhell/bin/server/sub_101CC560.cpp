void __fastcall sub_101CC560(int a1, int a2, int a3)
{
  int v3; // edi
  bool v4; // zf
  int v5; // eax
  int v6; // esi
  float *v7; // ebx
  _OWORD *v8; // edi
  int *v9; // ecx
  double v10; // st7
  float *v11; // eax
  int v12; // edx
  char v13; // al
  bool v14; // cc
  double v15; // st7
  _DWORD *v16; // ebx
  float *v17; // esi
  int i; // ecx
  int *v19; // esi
  int v20; // eax
  unsigned __int16 *v21; // ecx
  float *v22; // edi
  double v23; // st7
  char *v24; // edi
  __int16 v25; // [esp+4h] [ebp-1894h]
  _OWORD v26[384]; // [esp+14h] [ebp-1884h] BYREF
  _BYTE v27[48]; // [esp+1814h] [ebp-84h] BYREF
  float v28[3]; // [esp+1844h] [ebp-54h] BYREF
  float v29[3]; // [esp+1850h] [ebp-48h] BYREF
  int *v30; // [esp+185Ch] [ebp-3Ch]
  int v31; // [esp+1860h] [ebp-38h]
  int v32; // [esp+1864h] [ebp-34h] BYREF
  float v33[3]; // [esp+1868h] [ebp-30h] BYREF
  float v34; // [esp+1874h] [ebp-24h]
  float v35; // [esp+1878h] [ebp-20h]
  float v36; // [esp+187Ch] [ebp-1Ch]
  _DWORD *v37; // [esp+1880h] [ebp-18h]
  char *v38; // [esp+1884h] [ebp-14h]
  float v39; // [esp+1888h] [ebp-10h] BYREF
  float v40; // [esp+188Ch] [ebp-Ch]
  float v41; // [esp+1890h] [ebp-8h]
  float *v42; // [esp+1894h] [ebp-4h]

  v3 = a1;
  v4 = *(_BYTE *)(a1 + 1867) == 0;
  v38 = (char *)a1;
  if ( v4 )
  {
    v5 = *(_DWORD *)(dword_106B31C8 + 24);
    if ( *(_DWORD *)(a1 + 5024) != v5 )
    {
      v6 = 0;
      *(_DWORD *)(a1 + 5024) = v5;
      if ( *(int *)(a1 + 1132) > 0 )
      {
        v42 = (float *)(a1 + 4728);
        v7 = (float *)(a1 + 4448);
        v37 = (_DWORD *)(a1 + 1720);
        v31 = 288;
        do
        {
          LODWORD(v33[0]) = v26;
          v32 = 0;
          if ( (unsigned __int8)sub_10218080(v3 + 1132, &v32, v6) )
          {
            v8 = &v26[3 * *v37];
            sub_10421A90(v8, v28);
            sub_10421CE0(v8, 3, v29);
            v3 = (int)v38;
            sub_101CBD70(v38 + 4440, v6, v29);
            sub_101CBE00((char *)(v3 + 4728), v6, v28);
          }
          else
          {
            if ( *(_BYTE *)(v3 + 84) )
            {
              *(_BYTE *)(v3 + 88) |= 1u;
            }
            else
            {
              v9 = *(int **)(v3 + 24);
              if ( v9 )
                sub_100194B0(v9, 12 * v6 + 4440);
            }
            v10 = 0.0;
            *(v7 - 2) = 0.0;
            *(v7 - 1) = 0.0;
            *v7 = 0.0;
            if ( *(_BYTE *)(v3 + 84) )
            {
              *(_BYTE *)(v3 + 88) |= 1u;
            }
            else
            {
              v30 = *(int **)(v3 + 24);
              if ( v30 )
              {
                sub_100194B0(v30, 12 * v6 + 4728);
                v10 = 0.0;
              }
            }
            v11 = v42;
            v12 = v31;
            *v42 = v10;
            v11[1] = v10;
            *(float *)((char *)v7 + v12) = v10;
          }
          ++v37;
          v42 += 3;
          ++v6;
          v7 += 3;
        }
        while ( v6 < *(_DWORD *)(v3 + 1132) );
      }
      v13 = sub_10217AC0(v3 + 1132);
      *(_BYTE *)(v3 + 5028) = v13;
      if ( v13 )
      {
        *(_DWORD *)(v3 + 5056) = 0;
      }
      else if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 1140) + 8))(*(_DWORD *)(v3 + 1140)) )
      {
        sub_10218560(v3 + 1132, v3);
      }
      if ( *(_BYTE *)(v3 + 5028) && *(_DWORD *)(v3 + 420) == 3 )
      {
        sub_100EBE30(v3, 1);
        sub_101CB290((_DWORD *)v3);
        sub_100EC3F0((_DWORD *)v3, 0, *(float *)(dword_106B31C8 + 12), off_10638D5C);
      }
      v14 = *(_DWORD *)(v3 + 1132) <= 0;
      v34 = *(float *)(v3 + 4440);
      v42 = 0;
      v35 = *(float *)(v3 + 4444);
      v36 = *(float *)(v3 + 4448);
      v39 = *(float *)(v3 + 4440);
      v40 = *(float *)(v3 + 4444);
      v41 = *(float *)(v3 + 4448);
      if ( !v14 )
      {
        v15 = 0.0;
        v16 = (_DWORD *)(v3 + 1156);
        v17 = (float *)(v3 + 5084);
        do
        {
          if ( *v16 )
          {
            (*(void (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v16 + 192))(*v16, v27);
            sub_10425340(v27, v17 - 2, v17 + 70, v33, v29);
            for ( i = 0; i < 3; ++i )
            {
              if ( *(float *)((char *)&v34 + i * 4) > (double)v33[i] )
                *(float *)((char *)&v34 + i * 4) = v33[i];
              if ( *(float *)((char *)&v39 + i * 4) < (double)v29[i] )
                *(float *)((char *)&v39 + i * 4) = v29[i];
            }
            v15 = 0.0;
          }
          else
          {
            *(v17 - 2) = v15;
            *(v17 - 1) = v15;
            *v17 = v15;
            v17[70] = v15;
            v17[71] = v15;
            v17[72] = v15;
          }
          v17 += 3;
          v16 += 6;
          v42 = (float *)((char *)v42 + 1);
        }
        while ( (int)v42 < *(_DWORD *)(v3 + 1132) );
      }
      sub_100E0D20(v3, (float *)(v3 + 4440));
      sub_100E0EA0(v3, &flt_106F1CB4);
      v19 = (int *)(v3 + 320);
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 320) + 32))(v3 + 320);
      v25 = *(_WORD *)(v3 + 356) | 0x40;
      v21 = (unsigned __int16 *)(v3 + 320);
      v22 = (float *)v20;
      sub_101129A0(v21, v25);
      sub_10112B00(v19, 6, 0, 0);
      v33[0] = v39 - *v22;
      v33[1] = v40 - v22[1];
      v33[2] = v41 - v22[2];
      v39 = v34 - *v22;
      v40 = v35 - v22[1];
      v23 = v36 - v22[2];
      v24 = v38;
      v41 = v23;
      sub_100D5D10((int)&v39, (int)v33);
      sub_101126F0(v19);
      sub_100DCB50(v24, 0);
    }
  }
  else
  {
    sub_101CB850(a1);
  }
}
