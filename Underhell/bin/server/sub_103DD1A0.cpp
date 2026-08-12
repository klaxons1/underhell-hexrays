int __thiscall sub_103DD1A0(int this, float *a2, float *a3)
{
  int v4; // eax
  double v5; // st7
  float *v6; // eax
  int v7; // esi
  int *v8; // ecx
  int v9; // esi
  int *v10; // ecx
  double v11; // st7
  int v12; // esi
  int *v13; // ecx
  int v14; // esi
  int *v15; // ecx
  int v16; // ebx
  int v17; // esi
  int *v18; // ecx
  int v19; // esi
  int *v20; // ecx
  float v22; // [esp+18h] [ebp-2Ch]
  float v23; // [esp+18h] [ebp-2Ch]
  float v24; // [esp+18h] [ebp-2Ch]
  float v25; // [esp+18h] [ebp-2Ch]
  float v26[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v27; // [esp+38h] [ebp-Ch] BYREF
  float v28; // [esp+3Ch] [ebp-8h]
  float v29; // [esp+40h] [ebp-4h]
  float v30; // [esp+50h] [ebp+Ch]

  if ( !*(_DWORD *)(this + 3712) )
  {
    v4 = sub_100FB5C0("effects/bluelaser1.vmt", 1.0);
    *(_DWORD *)(this + 3712) = v4;
    sub_1005C620((_BYTE *)(v4 + 116), 0, 100, 255, HIBYTE(*(_DWORD *)(v4 + 116)));
  }
  if ( *a3 == flt_106F1CA8 && a3[1] == flt_106F1CAC && a3[2] == flt_106F1CB0 )
  {
    v27 = *(float *)(this + 3628);
    v28 = *(float *)(this + 3632);
    v5 = *(float *)(this + 3636);
  }
  else
  {
    v27 = *a2;
    v28 = a2[1];
    v5 = a2[2];
  }
  v29 = v5;
  v22 = -*a3;
  v27 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(LODWORD(v22), *a3) + v27;
  v23 = -a3[1];
  v28 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(LODWORD(v23), a3[1]) + v28;
  v24 = -a3[2];
  v29 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(LODWORD(v24), a3[2]) + v29;
  v6 = sub_103D9500((float *)this, v26);
  sub_100FAC00(*(_DWORD *)(this + 3712), &v27, v6);
  v7 = *(_DWORD *)(this + 3712);
  if ( *(_BYTE *)(v7 + 119) != 0xFF )
  {
    if ( *(_BYTE *)(v7 + 84) )
    {
      *(_BYTE *)(v7 + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(v7 + 24);
      if ( v8 )
        sub_100194B0(v8, 116);
    }
    *(_BYTE *)(v7 + 119) = -1;
  }
  v9 = *(_DWORD *)(this + 3712);
  if ( *(_DWORD *)(v9 + 928) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v9 + 84) )
    {
      *(_BYTE *)(v9 + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(v9 + 24);
      if ( v10 )
        sub_100194B0(v10, 928);
    }
    *(float *)(v9 + 928) = 0.0;
  }
  sub_1005C3A0(*(_DWORD *)(this + 3712), 1.0);
  sub_1005C410(*(_DWORD *)(this + 3712), 0.0);
  v11 = 0.0;
  v12 = *(_DWORD *)(this + 3712);
  if ( *(_DWORD *)(v12 + 936) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v12 + 84) )
    {
      *(_BYTE *)(v12 + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(v12 + 24);
      if ( v13 )
      {
        sub_100194B0(v13, 936);
        v11 = 0.0;
      }
    }
    *(float *)(v12 + 936) = v11;
  }
  v14 = *(_DWORD *)(this + 3712);
  v30 = v11;
  if ( *(_DWORD *)(v14 + 920) != LODWORD(v30) )
  {
    if ( *(_BYTE *)(v14 + 84) )
    {
      *(_BYTE *)(v14 + 88) |= 1u;
      *(float *)(v14 + 920) = v11;
    }
    else
    {
      v15 = *(int **)(v14 + 24);
      if ( v15 )
      {
        sub_100194B0(v15, 920);
        v11 = 0.0;
      }
      *(float *)(v14 + 920) = v11;
    }
  }
  v16 = word_106ED198;
  v17 = *(_DWORD *)(this + 3712);
  if ( *(_DWORD *)(v17 + 820) != word_106ED198 )
  {
    if ( *(_BYTE *)(v17 + 84) )
    {
      *(_BYTE *)(v17 + 88) |= 1u;
    }
    else
    {
      v18 = *(int **)(v17 + 24);
      if ( v18 )
        sub_100194B0(v18, 820);
    }
    *(_DWORD *)(v17 + 820) = v16;
  }
  v19 = *(_DWORD *)(this + 3712);
  if ( *(_DWORD *)(v19 + 924) != COERCE_INT(4.0) )
  {
    if ( *(_BYTE *)(v19 + 84) )
    {
      *(_BYTE *)(v19 + 88) |= 1u;
    }
    else
    {
      v20 = *(int **)(v19 + 24);
      if ( v20 )
        sub_100194B0(v20, 924);
    }
    *(float *)(v19 + 924) = 4.0;
  }
  *(float *)(this + 3688) = v27;
  *(float *)(this + 3692) = v28;
  *(float *)(this + 3696) = v29;
  v25 = *(float *)(dword_106B31C8 + 12) + 0.02;
  return sub_100EC4A0((int *)this, v25, 0);
}
