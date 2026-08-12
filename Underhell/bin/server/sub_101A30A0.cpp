unsigned int __thiscall sub_101A30A0(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  float *v6; // eax
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st7
  int v13; // eax
  float *v14; // edi
  double v15; // st7
  double v16; // st6
  double v17; // st5
  float v18; // [esp+4h] [ebp-4h]

  result = *(_DWORD *)(this + 3944);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3944) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        if ( result )
        {
          v4 = *(_DWORD *)(this + 3944);
          if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3944) & 0xFFF) + 2] != v4 >> 12 )
            v5 = 0;
          else
            v5 = off_1061BE18[4 * (*(_DWORD *)(this + 3944) & 0xFFF) + 1];
          v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
          v7 = v6[1] - *(float *)(this + 3908);
          v8 = v7 * v7;
          v9 = *v6 - *(float *)(this + 3904);
          v10 = v8;
          v11 = v6[2] - *(float *)(this + 3912);
          v12 = v9 * v9 + v10 + v11 * v11;
          v18 = v12;
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          v14 = (float *)v13;
          if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
            sub_100DAE60(v13);
          if ( v12 > 129600.0
            || (v17 = v14[147] - *(float *)(this + 588),
                v16 = v14[146] - *(float *)(this + 584),
                v15 = v14[145] - *(float *)(this + 580),
                v17 * v17 + v16 * v16 + v15 * v15 <= v18) )
          {
            sub_10023E00((char *)this, 76);
            result = (unsigned int)sub_10023CB0((char *)this, 77);
            *(_DWORD *)(this + 3944) = -1;
          }
          else
          {
            sub_10023CB0((char *)this, 76);
            return (unsigned int)sub_10023E00((char *)this, 77);
          }
        }
      }
    }
  }
  return result;
}
