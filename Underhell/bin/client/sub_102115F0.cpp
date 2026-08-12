void __thiscall sub_102115F0(int this, int a2, int a3)
{
  int v3; // eax
  bool v4; // al
  double v5; // st7
  double v6; // st7

  v3 = *(_DWORD *)(this + 44);
  if ( v3 > 63 )
  {
    v3 = 63;
  }
  else if ( v3 < 0 )
  {
    v3 = 0;
  }
  *(_DWORD *)(this + 44) = v3;
  v4 = flt_10459240 != *(float *)(this + 56)
    || *(float *)&qword_10459244 != *(float *)(this + 60)
    || *((float *)&qword_10459244 + 1) != *(float *)(this + 64)
    || *(float *)(this + 68) != flt_10459240
    || *(float *)(this + 72) != *(float *)&qword_10459244
    || *(float *)(this + 76) != *((float *)&qword_10459244 + 1);
  v5 = *(float *)(this + 48);
  *(_BYTE *)(this + 80) = v4;
  if ( v5 > *(float *)(this + 52) )
  {
    v6 = *(float *)(this + 48);
    *(float *)(this + 48) = *(float *)(this + 52);
    *(float *)(this + 52) = v6;
  }
}
