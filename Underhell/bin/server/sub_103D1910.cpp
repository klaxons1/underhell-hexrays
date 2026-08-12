void __thiscall sub_103D1910(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // eax

  v2 = *(_DWORD *)(this + 300);
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4) && *v3 && v3[1] == v4 )
    v5 = (_DWORD *)*v3;
  else
    v5 = 0;
  sub_102608F0((void *)(this + 876), v5, 0);
  sub_100D7260((float *)this, &flt_106F1CB4);
  sub_103D0FD0(this);
  if ( fabs(*(float *)(this + 488)) > 1.0 || fabs(*(float *)(this + 492)) > 1.0 )
    sub_103D15D0((_DWORD *)this);
  else
    sub_103D17E0((_DWORD *)this);
}
