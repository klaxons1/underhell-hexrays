int __thiscall sub_1020F6A0(int this, int a2, int a3, int a4, int a5, int *a6)
{
  int result; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // ecx
  float *v11; // edx
  int v12; // eax
  int v13; // ebp
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // ebp
  float *v19; // ebp
  double v20; // st7
  double v21; // st3
  double v22; // st6
  double v23; // st5
  double v24; // st4
  double v25; // rt0
  double v26; // rt2
  double v27; // st7
  float v28; // [esp+4h] [ebp-30h]
  float *v30; // [esp+28h] [ebp-Ch]
  float *v31; // [esp+2Ch] [ebp-8h]
  float *v32; // [esp+30h] [ebp-4h]
  int v33; // [esp+38h] [ebp+4h]

  result = *(_DWORD *)(a2 + 6004);
  if ( result )
  {
    result = *(_DWORD *)(result + 40);
    if ( result )
    {
      --result;
      v16 = result < 0 ? 0 : result;
      v33 = v16;
      if ( a4 )
      {
        while ( 1 )
        {
          --a4;
          if ( *(_BYTE *)(this + 48) )
          {
            v17 = *(_DWORD *)(a2 + 6620);
            *(_DWORD *)(a2 + 6620) = v17 + 1;
            *a6 = (int)((double)(v16 + 1) * flt_103EE7C0[((_WORD)v17 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF]);
          }
          else if ( *a6 > v16 )
          {
            *a6 = 0;
          }
          v18 = *(_DWORD **)(a2 + 6004);
          v32 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6324)));
          v31 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6332)));
          v30 = (float *)(v18[1517] + 4 * ((*a6 & 3) + v18[1581] * (*a6 / 4)));
          v19 = (float *)(v18[1519] + 4 * ((*a6 & 3) + v18[1583] * (*a6 / 4)));
          v28 = *(float *)(a2 + 36) - *(float *)(a2 + 44);
          v20 = sub_100260E0(
                  *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6356))),
                  v28,
                  *(float *)(a2 + 36),
                  0.0,
                  1.0);
          v21 = *v19;
          v22 = v19[8];
          v23 = (*v30 - v21) * v20 + v21;
          v24 = (v30[4] - v19[4]) * v20 + v19[4];
          ++a3;
          v25 = *(float *)(this + 44);
          v26 = (v19[4] - v24) * v25 + v24;
          v27 = v20 * (v30[8] - v22) + v22;
          *v31 = (v21 - v23) * v25 + v23;
          v31[4] = v26;
          v31[8] = v25 * (v22 - v27) + v27;
          *v32 = v23;
          v32[4] = v24;
          v32[8] = v27;
          result = (int)a6;
          ++*a6;
          if ( !a4 )
            break;
          v16 = v33;
        }
      }
    }
    else
    {
      v14 = a4;
      if ( a4 )
      {
        v15 = a3;
        do
        {
          result = (v15 & 3) + *(_DWORD *)(a2 + 6328) * (v15 / 4);
          --v14;
          ++v15;
          *(float *)(*(_DWORD *)(a2 + 6072) + 4 * result) = 0.0;
        }
        while ( v14 );
      }
    }
  }
  else
  {
    v8 = a4;
    if ( a4 )
    {
      v9 = a3;
      do
      {
        v10 = v9 & 3;
        v11 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v10 + v9 / 4 * *(_DWORD *)(a2 + 6324)));
        v12 = *(_DWORD *)(a2 + 6076);
        v13 = v10 + v9 / 4 * *(_DWORD *)(a2 + 6332);
        *v11 = flt_10459240;
        result = v12 + 4 * v13;
        --v8;
        v11[4] = *(float *)&qword_10459244;
        ++v9;
        v11[8] = *((float *)&qword_10459244 + 1);
        *(float *)result = flt_10459240;
        *(float *)(result + 16) = *(float *)&qword_10459244;
        *(float *)(result + 32) = *((float *)&qword_10459244 + 1);
      }
      while ( v8 );
    }
  }
  return result;
}
