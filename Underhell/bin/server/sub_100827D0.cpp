double __thiscall sub_100827D0(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // ebx
  int v3; // edi
  float *v4; // eax
  int v6; // eax

  if ( !this[9] )
    return -1.0;
  sub_100A64B0();
  v6 = *(_DWORD *)this[9];
  if ( !v6 || *(float *)(v6 + 20) < 0.0 )
    return -1.0;
  v1 = (_DWORD *)this[9];
  if ( !*v1 )
    return 0.0;
  v2 = this[3];
  v3 = this[1];
  v4 = (float *)sub_100A6030(v1);
  sub_10079A70(v2, (float *)(v3 + 716), v4);
  return *(float *)(*(_DWORD *)this[9] + 20) + 0.0;
}
