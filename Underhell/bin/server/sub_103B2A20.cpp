int __usercall sub_103B2A20@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int v4; // eax
  int *v5; // ecx
  long double v6; // st7
  bool v7; // c0
  bool v8; // c3
  double v9; // st7
  double v10; // st7
  double v11; // st7

  v4 = *(_DWORD *)(a1 + 3796);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3796) & 0xFFF) + 1];
    if ( v5[1] == v4 >> 12 )
    {
      if ( *v5 )
        *(float *)(a1 + 3656) = *(float *)(dword_106B31C8 + 12) + 5.0;
    }
  }
  if ( *(float *)(a1 + 3812) <= 0.01 )
  {
    *(float *)(a1 + 3812) = 1.0;
  }
  else
  {
    v6 = *(float *)(a1 + 3808) - *(float *)(a1 + 3812);
    if ( fabs(v6) <= 0.01 )
    {
      *(float *)(a1 + 3808) = *(float *)(a1 + 3812);
    }
    else
    {
      v7 = v6 > 0.0;
      v8 = 0.0 == v6;
      v9 = *(float *)(a1 + 3808);
      if ( v7 || v8 )
      {
        v11 = v9 - 0.0066999998;
        *(float *)(a1 + 3808) = v11;
        if ( v11 < *(float *)(a1 + 3812) )
          *(float *)(a1 + 3808) = *(float *)(a1 + 3812);
      }
      else
      {
        v10 = v9 + 0.0066999998;
        *(float *)(a1 + 3808) = v10;
        if ( v10 > *(float *)(a1 + 3812) )
          *(float *)(a1 + 3808) = *(float *)(a1 + 3812);
      }
    }
  }
  sub_10036B00((_BYTE *)a1);
  sub_103B1AB0(*(_DWORD *)(a1 + 3640), a2, a3, (int *)(a1 + 3620), 0.1);
  return sub_101BD0E0((int *)(a1 + 3820), a2, *(float *)&a1, a1);
}
