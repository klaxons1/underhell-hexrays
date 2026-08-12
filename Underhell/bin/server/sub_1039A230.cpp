int __thiscall sub_1039A230(_WORD *this, int a2, float *a3, float a4)
{
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int *v9; // ecx
  int v10; // edi
  double v11; // st4
  double v12; // st7
  double v13; // st4
  double v14; // st5

  if ( !this[11] )
    return 0;
  if ( *(float *)&a2 == 0.0 )
  {
    v6 = (unsigned __int16)this[8];
  }
  else
  {
    a2 = *(int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    v6 = *(unsigned __int16 *)(*((_DWORD *)this + 1)
                             + 8 * (unsigned __int16)sub_10399DF0(this + 2, (unsigned int *)&a2)
                             + 6);
    if ( v6 == 0xFFFF )
      return 0;
  }
  *(float *)&a2 = a4 * a4;
  if ( v6 == 0xFFFF )
    return 0;
  while ( 1 )
  {
    v7 = 8 * (unsigned __int16)v6;
    v8 = *(_DWORD *)(*((_DWORD *)this + 1) + v7);
    if ( v8 != -1 )
    {
      v9 = &off_1061BE18[4 * (*(_DWORD *)(*((_DWORD *)this + 1) + v7) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(*((_DWORD *)this + 1) + v7) & 0xFFF) + 2] == v8 >> 12 )
      {
        v10 = *v9;
        if ( *v9 )
        {
          if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
            sub_100DAE60(*v9);
          v11 = *(float *)(v10 + 580) - *a3;
          v12 = v11 * v11;
          v13 = *(float *)(v10 + 584) - a3[1];
          v14 = *(float *)(v10 + 588) - a3[2];
          if ( v14 * v14 + v13 * v13 + v12 < *(float *)&a2 )
            break;
        }
      }
    }
    v6 = *(unsigned __int16 *)(v7 + *((_DWORD *)this + 1) + 6);
    if ( v6 == 0xFFFF )
      return 0;
  }
  return v10;
}
