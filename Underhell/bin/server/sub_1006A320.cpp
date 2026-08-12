void __thiscall sub_1006A320(int this)
{
  double v1; // st7
  unsigned int v3; // eax
  int v4; // ecx
  float v5; // [esp+0h] [ebp-Ch]

  v1 = *(float *)(dword_106B31C8 + 12) + 0.5;
  v5 = v1;
  sub_100EC4A0(v5, 0);
  v3 = *(_DWORD *)(this + 300);
  if ( v3 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v3 >> 12 )
  {
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 424) + 8))(*(_DWORD *)(v4 + 424)) )
      {
        if ( !*(_BYTE *)(this + 816) )
        {
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          *(float *)(this + 804) = *(float *)(this + 580);
          *(float *)(this + 808) = *(float *)(this + 584);
          *(float *)(this + 812) = *(float *)(this + 588);
          sub_10069DD0((float *)this, 1);
          *(_BYTE *)(this + 816) = 1;
        }
      }
      else
      {
        if ( !*(_BYTE *)(this + 816) )
          goto LABEL_15;
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_1004BCD0((float *)(this + 580), (float *)(this + 804));
        if ( v1 >= 18.0 )
        {
LABEL_15:
          if ( *(float *)(this + 804) != flt_10689730
            || *(float *)(this + 808) != flt_10689734
            || *(float *)(this + 812) != flt_10689738 )
          {
            sub_10069DD0((float *)this, 0);
            *(_BYTE *)(this + 816) = 0;
            *(float *)(this + 804) = flt_10689730;
            *(float *)(this + 808) = flt_10689734;
            *(float *)(this + 812) = flt_10689738;
          }
        }
      }
    }
  }
}
