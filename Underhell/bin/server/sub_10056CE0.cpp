char __thiscall sub_10056CE0(void *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  double v7; // st7
  _DWORD *v8; // ebx
  double v9; // st7
  float *v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  double v14; // st7
  double v15; // st6
  double v16; // st5
  int v17; // ecx
  _DWORD *v18; // eax
  int v19; // ebx
  _DWORD *v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // dx
  int v25; // ecx
  int v26; // eax
  int v27; // esi
  int v28; // edx
  int *v29; // esi
  int (__cdecl *v31)(int, int); // [esp+14h] [ebp-48h] BYREF
  int v32; // [esp+18h] [ebp-44h]
  int v33; // [esp+1Ch] [ebp-40h]
  int v34; // [esp+20h] [ebp-3Ch]
  int v35; // [esp+24h] [ebp-38h]
  int v36; // [esp+28h] [ebp-34h]
  int v37; // [esp+2Ch] [ebp-30h]
  float v38; // [esp+30h] [ebp-2Ch]
  float v39; // [esp+34h] [ebp-28h]
  float v40; // [esp+38h] [ebp-24h]
  void *v41; // [esp+3Ch] [ebp-20h]
  int v42; // [esp+40h] [ebp-1Ch] BYREF
  int v43; // [esp+44h] [ebp-18h] BYREF
  int v44; // [esp+48h] [ebp-14h]
  _DWORD *v45; // [esp+4Ch] [ebp-10h]
  int v46; // [esp+50h] [ebp-Ch]
  unsigned __int16 v47[3]; // [esp+54h] [ebp-8h] BYREF
  char v48; // [esp+5Ah] [ebp-2h] BYREF
  char v49; // [esp+5Bh] [ebp-1h]

  v2 = a2;
  v3 = a2[1];
  v4 = 0;
  v41 = this;
  v49 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0xFFFF;
  v36 = -1;
  v37 = 0;
  v31 = sub_1005D140;
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
  {
    v46 = 0;
  }
  else
  {
    v46 = off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v4 = v46;
  }
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v5 = sub_10051740(a2);
  v44 = v5;
  if ( v5 != -1 )
  {
    while ( HIWORD(v35) < (int)v2[8] )
    {
      v6 = *(_DWORD *)(*v2 + 40) + 36 * v5;
      v38 = *(float *)(v6 + 4) + *(float *)(v4 + 580);
      v39 = *(float *)(v4 + 584) + *(float *)(v6 + 8);
      v7 = *(float *)(v4 + 588);
      v8 = (_DWORD *)v2[5];
      v9 = v7 + *(float *)(v6 + 12);
      v10 = 0;
      v45 = v8;
      v40 = v9;
      if ( !v8 )
        break;
      while ( 1 )
      {
        if ( *v8 == -1 || off_1061BE18[4 * (*v8 & 0xFFF) + 2] != *v8 >> 12 )
          v11 = 0;
        else
          v11 = off_1061BE18[4 * (*v8 & 0xFFF) + 1];
        v42 = v11;
        if ( sub_10055120(&v31, (int)&v42) == -1 )
        {
          v12 = v8[1];
          if ( v12 == -1 || *(_DWORD *)v6 > *(_DWORD *)(*(_DWORD *)(*a2 + 40) + 36 * v12) )
          {
            if ( *v8 == -1 || off_1061BE18[4 * (*v8 & 0xFFF) + 2] != *v8 >> 12 )
              v13 = 0;
            else
              v13 = off_1061BE18[4 * (*v8 & 0xFFF) + 1];
            if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
              sub_100DAE60(v13);
            v14 = *(float *)(v13 + 580) - v38;
            v15 = *(float *)(v13 + 584) - v39;
            v16 = *(float *)(v13 + 588);
            v8 = v45;
            if ( v14 * v14 + v15 * v15 + (v16 - v40) * (v16 - v40) < 3.4028235e38 )
              v10 = (float *)v45;
          }
        }
        v45 = (_DWORD *)v8[18];
        if ( !v45 )
          break;
        v8 = v45;
      }
      if ( !v10 )
        break;
      v17 = *((_DWORD *)v10 + 1);
      if ( v17 != -1 )
      {
        v18 = (_DWORD *)(a2[14] + 4 * (v17 >> 5));
        *v18 &= ~(1 << (v17 & 0x1F));
      }
      v19 = v44;
      *((_DWORD *)v10 + 1) = v44;
      v10[3] = *(float *)(v6 + 4);
      v10[4] = *(float *)(v6 + 8);
      v10[5] = *(float *)(v6 + 12);
      v10[6] = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 *(float *)(v6 + 20),
                 *(float *)(v6 + 24));
      v10[7] = *(float *)(v6 + 28);
      v10[8] = *(float *)(v6 + 32);
      v20 = (_DWORD *)(a2[14] + 4 * (v19 >> 5));
      *v20 |= 1 << (v19 & 0x1F);
      v21 = *(_DWORD *)v10;
      if ( v21 == -1 || off_1061BE18[4 * (v21 & 0xFFF) + 2] != v21 >> 12 )
        v22 = 0;
      else
        v22 = off_1061BE18[4 * (v21 & 0xFFF) + 1];
      v43 = v22;
      sub_10053450(&v31, (int)&v43, v47, &v48);
      v23 = sub_10053540((int)&v31);
      v24 = v47[0];
      v25 = v23;
      v26 = v32;
      v27 = 12 * v25;
      *(_WORD *)(v27 + v32 + 2) = -1;
      *(_WORD *)(v27 + v26) = -1;
      *(_WORD *)(v27 + v26 + 6) = 0;
      *(_WORD *)(v27 + v26 + 4) = v24;
      if ( v24 == 0xFFFF )
      {
        LOWORD(v35) = v25;
      }
      else
      {
        v28 = 3 * v24;
        if ( v48 )
          *(_WORD *)(v26 + 4 * v28) = v25;
        else
          *(_WORD *)(v26 + 4 * v28 + 2) = v25;
      }
      sub_100553B0((int)&v31, v25);
      ++HIWORD(v35);
      v29 = (int *)(v27 + v32 + 8);
      if ( v29 )
        *v29 = v43;
      v49 = 1;
      v44 = sub_10051740(a2);
      if ( v44 == -1 )
        break;
      v5 = v44;
      v2 = a2;
      v4 = v46;
    }
  }
  sub_10056440((int)&v31);
  return v49;
}
