void __thiscall sub_102119F0(int this, int a2, int a3, int a4, int a5, float *a6)
{
  bool v7; // c3
  int v8; // eax
  double v9; // st5
  double v10; // st4
  double v11; // st6
  double v12; // st5
  double v13; // st7
  unsigned __int8 v14; // al
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // al
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // al
  unsigned __int8 v19; // dl
  int i; // ebp
  float *v22; // ecx
  int v23; // eax
  double v24; // st5
  float v25; // [esp+4h] [ebp-24h]
  int v26; // [esp+18h] [ebp-10h] BYREF
  int v27; // [esp+1Ch] [ebp-Ch] BYREF
  float v28; // [esp+20h] [ebp-8h]
  float v29; // [esp+24h] [ebp-4h]

  v7 = 0.0 == *(float *)(this + 84);
  v26 = -1;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(a2 + 6004);
    if ( v8 && *(_DWORD *)(v8 + 80) == *(_DWORD *)(this + 92) )
    {
      v26 = *(_DWORD *)(v8 + 84);
    }
    else
    {
      sub_101F8ED0(a2, *(_DWORD *)(this + 92), *(float *)(a2 + 36), (float *)&v27);
      v9 = a6[2] - v29;
      v10 = a6[1] - v28;
      v11 = v10 * v10 + v9 * v9;
      v12 = *a6 - *(float *)&v27;
      v25 = v12 * v12 + v11;
      if ( off_103EDFE0(v25) >= *(float *)(this + 88) || *(_DWORD *)(a2 + 80) == -1 )
      {
        (*(void (__thiscall **)(_DWORD, int *, int *))(**((_DWORD **)off_103EE614 + 60) + 20))(
          *((_DWORD *)off_103EE614 + 60),
          &v27,
          &v26);
        v13 = *(float *)&v27;
        *(_DWORD *)(a2 + 84) = v26;
        *(_DWORD *)(a2 + 80) = *(_DWORD *)(this + 92);
        *a6 = v13;
        a6[1] = v28;
        a6[2] = v29;
      }
      else
      {
        v26 = *(_DWORD *)(a2 + 84);
      }
    }
    v14 = *(_BYTE *)(this + 80);
    v15 = v26;
    if ( (unsigned __int8)v26 >= v14 )
      v15 = *(_BYTE *)(this + 80);
    if ( *(_BYTE *)(this + 76) <= v15 )
    {
      if ( (unsigned __int8)v26 >= v14 )
        LOBYTE(v26) = *(_BYTE *)(this + 80);
    }
    else
    {
      LOBYTE(v26) = *(_BYTE *)(this + 76);
    }
    v16 = *(_BYTE *)(this + 81);
    v17 = BYTE1(v26);
    if ( BYTE1(v26) >= v16 )
      v17 = *(_BYTE *)(this + 81);
    if ( *(_BYTE *)(this + 77) <= v17 )
    {
      if ( BYTE1(v26) >= v16 )
        BYTE1(v26) = *(_BYTE *)(this + 81);
    }
    else
    {
      BYTE1(v26) = *(_BYTE *)(this + 77);
    }
    v18 = *(_BYTE *)(this + 82);
    v19 = BYTE2(v26);
    if ( BYTE2(v26) >= v18 )
      v19 = *(_BYTE *)(this + 82);
    if ( *(_BYTE *)(this + 78) <= v19 )
    {
      if ( BYTE2(v26) >= v18 )
        BYTE2(v26) = *(_BYTE *)(this + 82);
    }
    else
    {
      BYTE2(v26) = *(_BYTE *)(this + 78);
    }
  }
  for ( i = a4; i; ++a3 )
  {
    v22 = (float *)(*(_DWORD *)(a2 + 6092) + 4 * ((a3 & 3) + *(_DWORD *)(a2 + 6348) * (a3 / 4)));
    v23 = *(_DWORD *)(a2 + 6620);
    *(_DWORD *)(a2 + 6620) = v23 + 1;
    --i;
    v24 = flt_103EE7C0[((_WORD)v23 + (unsigned __int16)*(_DWORD *)(a2 + 6624)) & 0xFFF];
    *v22 = (*(float *)(this + 56) - *(float *)(this + 44)) * v24 + *(float *)(this + 44);
    v22[4] = (*(float *)(this + 60) - *(float *)(this + 48)) * v24 + *(float *)(this + 48);
    v22[8] = v24 * (*(float *)(this + 64) - *(float *)(this + 52)) + *(float *)(this + 52);
    if ( 0.0 != *(float *)(this + 84) )
    {
      *v22 = ((double)(unsigned __int8)v26 * 0.0039215689 - *v22) * *(float *)(this + 84) + *v22;
      v22[4] = ((double)BYTE1(v26) * 0.0039215689 - v22[4]) * *(float *)(this + 84) + v22[4];
      v22[8] = ((double)BYTE2(v26) * 0.0039215689 - v22[8]) * *(float *)(this + 84) + v22[8];
    }
  }
}
