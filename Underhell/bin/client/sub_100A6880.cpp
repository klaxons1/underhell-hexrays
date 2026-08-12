double __thiscall sub_100A6880(float *this, int a2)
{
  double v5; // st7
  float v6; // [esp+Ch] [ebp-14h]
  float v7; // [esp+28h] [ebp+8h]

  if ( *((_BYTE *)this + 264) )
  {
    v7 = (double)*(unsigned __int8 *)(a2 + 51) * 0.0039215689;
    v6 = this[65] - ((double (__thiscall *)(float *, int))*(_DWORD *)(*(_DWORD *)this + 56))(this, a2) * 0.5;
    return sub_100260E0(*(float *)(a2 + 20), this[65], v6, 1.0, 0.0) * v7;
  }
  else
  {
    v5 = (double)*(unsigned __int8 *)(a2 + 51);
    return v5 * 0.0039215689
         + *(float *)(a2 + 44)
         / *(float *)(a2 + 40)
         * (0.0039215689 * (double)*(unsigned __int8 *)(a2 + 52) - v5 * 0.0039215689);
  }
}
