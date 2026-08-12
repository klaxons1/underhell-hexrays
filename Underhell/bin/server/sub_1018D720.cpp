int __usercall sub_1018D720@<eax>(int a1@<ebp>, int a2)
{
  float v2; // edx
  int v3; // eax
  double v4; // st7
  int result; // eax
  double v6; // st7
  int v7; // ecx
  double v8; // st6
  int v9; // edi
  float *v10; // esi
  double v11; // st5
  double v12; // st4
  double v13; // st7
  double v14; // st5
  double v15; // st3
  double v16; // st6
  double v17; // st7
  double v18; // st5
  double v19; // st6
  double v20; // st7
  double v21; // rt1
  double v22; // st5
  _BYTE v23[12]; // [esp+1Ch] [ebp-104h] BYREF
  float v24[10]; // [esp+28h] [ebp-F8h] BYREF
  char v25; // [esp+53h] [ebp-CDh]
  int v26; // [esp+78h] [ebp-A8h] BYREF
  float v27[16]; // [esp+84h] [ebp-9Ch] BYREF
  char v28; // [esp+C4h] [ebp-5Ch]
  bool v29; // [esp+C5h] [ebp-5Bh]
  float v30; // [esp+D8h] [ebp-48h]
  float v31; // [esp+DCh] [ebp-44h]
  float v32; // [esp+E0h] [ebp-40h]
  float v33; // [esp+E8h] [ebp-38h]
  float v34; // [esp+ECh] [ebp-34h]
  float v35; // [esp+F4h] [ebp-2Ch]
  float v36; // [esp+F8h] [ebp-28h] BYREF
  float v37; // [esp+FCh] [ebp-24h]
  float v38; // [esp+100h] [ebp-20h]
  float v39; // [esp+104h] [ebp-1Ch]
  float v40; // [esp+108h] [ebp-18h]
  float v41; // [esp+10Ch] [ebp-14h]
  char v42; // [esp+113h] [ebp-Dh]
  int v43; // [esp+114h] [ebp-Ch]
  void *v44; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v43 = a1;
  v44 = retaddr;
  v2 = *(float *)(a2 + 8);
  v39 = *(float *)(a2 + 4);
  v41 = *(float *)(a2 + 12);
  v40 = v2;
  v3 = sub_1019E380(a2 + 4, 120.0);
  if ( v3 && (*(_WORD *)(v3 + 40) & 0x400) != 0 )
    v4 = v41 + 57.600002;
  else
    v4 = v41 + 36.0;
  result = dword_10632630;
  v41 = v4;
  v42 = 0;
  v35 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  if ( dword_10632630 != -1 )
  {
    v6 = 12.5;
    v7 = dword_10632624;
    v8 = 25.0;
    while ( 1 )
    {
      v9 = 12 * result;
      v10 = *(float **)(12 * result + v7);
      v11 = v10[2] + v6;
      v37 = v11;
      if ( v11 >= v10[5] )
        goto LABEL_33;
      do
      {
        v12 = v10[1] + v6;
        v36 = v12;
        if ( v12 >= v10[4] )
          goto LABEL_31;
        v30 = v11 - v40;
        do
        {
          v13 = sub_1018AD70(v10, &v36) + 36.0;
          v38 = v13;
          v14 = v36 - v39;
          v27[4] = v14;
          v27[5] = v30;
          v15 = v13 - v41;
          v27[6] = v15;
          v29 = 0.0 != v14 * v14 + v30 * v30 + v15 * v15;
          v27[14] = 0.0;
          v27[13] = 0.0;
          v27[12] = 0.0;
          v27[10] = 0.0;
          v28 = 1;
          v27[9] = 0.0;
          v27[8] = 0.0;
          v27[0] = v39;
          v27[1] = v40;
          v27[2] = v41;
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v27,
            81921,
            &v26,
            v23);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v23, (int)v24, 255, 0, 0, 1, 5.0);
          if ( 1.0 != v24[8] || v25 )
          {
            v20 = v36;
            v19 = v37;
            goto LABEL_28;
          }
          v16 = v36;
          v17 = v37;
          v18 = (v41 - v38) * (v41 - v38) + (v39 - v36) * (v39 - v36) + (v40 - v37) * (v40 - v37);
          if ( v35 < v18 )
          {
            v35 = v18;
            if ( v18 >= 1000000.0 )
            {
              if ( !v42 )
              {
                v31 = v36;
                v42 = 1;
                v33 = v36;
                v19 = v37;
                v20 = v36;
                v32 = v37;
                v34 = v37;
                goto LABEL_28;
              }
              if ( v31 > v16 )
                v31 = v36;
              if ( v33 < v16 )
                v33 = v36;
              if ( v32 > v17 )
                v32 = v37;
              if ( v34 < v17 )
              {
                v19 = v37;
                v20 = v36;
                v34 = v37;
LABEL_28:
                v21 = v19;
                v16 = v20;
                v17 = v21;
              }
            }
          }
          v22 = v16 + 25.0;
          v8 = 25.0;
          v36 = v22;
        }
        while ( v22 < v10[4] );
        v11 = v17;
        v6 = 12.5;
LABEL_31:
        v11 = v11 + v8;
        v37 = v11;
      }
      while ( v11 < v10[5] );
      v7 = dword_10632624;
LABEL_33:
      result = *(_DWORD *)(v9 + v7 + 8);
      if ( result == -1 )
      {
        if ( v42 )
        {
          if ( (v34 - v32) * (v33 - v31) >= 40000.0 || v35 >= 2250000.0 )
          {
            result = a2;
            *(_BYTE *)(a2 + 28) |= 4u;
          }
          else
          {
            result = a2;
            *(_BYTE *)(a2 + 28) |= 2u;
          }
        }
        return result;
      }
    }
  }
  return result;
}
