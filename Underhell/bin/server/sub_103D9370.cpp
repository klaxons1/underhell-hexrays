int __thiscall sub_103D9370(_DWORD *this, int a2)
{
  int v4; // edi
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // edi
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  double v14; // st7
  int result; // eax
  char *v16; // eax
  int v17[3]; // [esp+1Ch] [ebp-10h] BYREF
  float v18; // [esp+28h] [ebp-4h]
  int v19; // [esp+34h] [ebp+8h]

  v4 = sub_100C9AF0(this, a2);
  v5 = this[952];
  v19 = v4;
  if ( v5 == -1 )
    return v4;
  v6 = &off_1061BE18[4 * (this[952] & 0xFFF) + 1];
  v7 = v5 >> 12;
  if ( off_1061BE18[4 * (this[952] & 0xFFF) + 2] != v7 || !*v6 )
    return v4;
  if ( off_1061BE18[4 * (this[952] & 0xFFF) + 2] == v7 )
    v8 = *v6;
  else
    v8 = 0;
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v9 = *(float *)(a2 + 580) - *(float *)(v8 + 580);
  v10 = v9 * v9;
  v11 = *(float *)(a2 + 584) - *(float *)(v8 + 584);
  v12 = *(float *)(a2 + 588) - *(float *)(v8 + 588);
  v13 = v12 * v12 + v11 * v11 + v10;
  if ( v13 > 1048576.0 )
    return v19;
  v14 = (1.0 - v13 * 0.00000095367432) * 100.0;
  v18 = v14;
  result = (int)((double)v19 + v14);
  v4 = result;
  if ( (this[59] & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(a2);
      v14 = v18;
    }
    v17[0] = *(int *)(a2 + 580);
    v17[1] = *(int *)(a2 + 584);
    *(float *)&v17[2] = *(float *)(a2 + 588) + 16.0;
    v16 = sub_1025F440("P: %d (b %f)!", v4, v14);
    sub_1011CF30((float *)v17, (int)v16, 0, 0.1);
    return v4;
  }
  return result;
}
