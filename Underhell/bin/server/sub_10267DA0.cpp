unsigned int __thiscall sub_10267DA0(int this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // eax
  int *v13; // ecx
  int v14; // ebx
  __int64 v15; // [esp-8h] [ebp-1Ch]
  __int64 v16; // [esp-8h] [ebp-1Ch]
  __int64 v17; // [esp-8h] [ebp-1Ch]
  float v18; // [esp+10h] [ebp-4h] BYREF

  result = *(_DWORD *)(this + 156);
  if ( result != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 156) & 0xFFF) + 1];
    result >>= 12;
    if ( v4[1] == result )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = *(_DWORD *)(this + 156);
        if ( v6 != -1
          && off_1061BE18[4 * (*(_DWORD *)(this + 156) & 0xFFF) + 2] == v6 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(this + 156) & 0xFFF) + 1] )
        {
          v7 = this - 1484;
          if ( *(_BYTE *)(this - 1400) )
          {
            *(_BYTE *)(v7 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v7 + 24);
            if ( v8 )
              sub_100194B0(v8, 1640);
          }
          *(_DWORD *)(this + 156) = -1;
        }
        *(_DWORD *)(v5 + 3296) &= ~0x20u;
        HIDWORD(v15) = this - 1484;
        LODWORD(v15) = v5;
        sub_1010DD80((_DWORD *)(this + 36), v15, 0.0);
        v18 = 0.0;
        sub_1010C270((float *)(this + 108), 1, (__int16 *)&v18);
        HIDWORD(v16) = this - 1484;
        LODWORD(v16) = v5;
        sub_1010DA50(
          (_DWORD *)(this + 108),
          *(_DWORD *)(this + 108),
          *(_DWORD *)(this + 112),
          *(_DWORD *)(this + 116),
          *(_DWORD *)(this + 120),
          *(_DWORD *)(this + 124),
          v16,
          0.0);
        v18 = 0.0;
        sub_1010C270((float *)(this + 132), 1, (__int16 *)&v18);
        HIDWORD(v17) = this - 1484;
        LODWORD(v17) = v5;
        sub_1010DA50(
          (_DWORD *)(this + 132),
          *(_DWORD *)(this + 132),
          *(_DWORD *)(this + 136),
          *(_DWORD *)(this + 140),
          *(_DWORD *)(this + 144),
          *(_DWORD *)(this + 148),
          v17,
          0.0);
        if ( *(_DWORD *)(this + 160) )
        {
          v9 = this - 1484;
          if ( *(_BYTE *)(this - 1400) )
          {
            *(_BYTE *)(v9 + 88) |= 1u;
          }
          else
          {
            v10 = *(int **)(v9 + 24);
            if ( v10 )
              sub_100194B0(v10, 1644);
          }
          *(_DWORD *)(this + 160) = 0;
        }
        v11 = *(_DWORD *)(this + 168);
        v18 = 0.0;
        if ( v11 != COERCE_INT(0.0) )
        {
          v12 = this - 1484;
          if ( *(_BYTE *)(this - 1400) )
          {
            *(_BYTE *)(v12 + 88) |= 1u;
          }
          else
          {
            v13 = *(int **)(v12 + 24);
            if ( v13 )
              sub_100194B0(v13, 1652);
          }
          *(float *)(this + 168) = 0.0;
        }
        sub_10145050(this - 360);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this - 324) + 48))(*(_DWORD *)(this - 324));
        v14 = *(_DWORD *)(this + 8);
        *(_BYTE *)(v14 + 478) = 0;
        *(float *)(v14 + 500) = flt_106F1CA8;
        *(float *)(v14 + 504) = flt_106F1CAC;
        *(float *)(v14 + 508) = flt_106F1CB0;
        *(float *)(v14 + 488) = flt_106F1CB4;
        *(float *)(v14 + 492) = flt_106F1CB8;
        *(float *)(v14 + 496) = flt_106F1CBC;
        result = dword_106CEE04;
        *(float *)(v14 + 440) = *(float *)(dword_106CEE04 + 44);
      }
    }
  }
  return result;
}
