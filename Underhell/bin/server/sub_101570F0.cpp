void __thiscall sub_101570F0(_DWORD *this, float *a2, float a3, float a4)
{
  float *v5; // ecx
  double v6; // st7
  double v7; // st6

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 76))(this) )
  {
    v5 = (float *)this[2];
    v6 = a3 - (v5[17] * a2[1] + *a2 * v5[16] + v5[18] * a2[2]);
    if ( v6 > 0.0 )
    {
      v7 = a3 * (*(float *)(dword_106B31C8 + 16) * a4) * *(float *)(this[1] + 4512);
      if ( v7 <= v6 )
        v6 = v7;
      v5[16] = *a2 * v6 + v5[16];
      v5[17] = a2[1] * v6 + v5[17];
      v5[18] = v6 * a2[2] + v5[18];
    }
  }
}
