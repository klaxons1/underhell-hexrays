void __thiscall sub_10027340(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall *v3)(_DWORD, int); // edx

  v2 = *(void (__thiscall ****)(_DWORD, int))(this + 1192);
  if ( v2 )
  {
    v3 = **v2;
    *(_DWORD *)(this + 1192) = 0;
    v3(v2, 1);
    sub_1000F430((_DWORD *)this, 0);
    if ( *(float *)(this + 1784) != flt_10459240
      || *(float *)(this + 1788) != flt_10459244
      || *(float *)(this + 1792) != flt_10459248
      || *(float *)(this + 1796) != flt_10459240
      || *(float *)(this + 1800) != flt_10459244
      || *(float *)(this + 1804) != flt_10459248 )
    {
      sub_1008FC00(this + 1784, this + 1796);
    }
  }
  *(_BYTE *)(this + 1780) = 0;
}
