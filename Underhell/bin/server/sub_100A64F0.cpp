double __thiscall sub_100A64F0(int *this, float *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  double v6; // st7
  float v8; // [esp+8h] [ebp-4h]

  v3 = *this;
  if ( !*this )
    return 0.0;
  v4 = sub_100B99B0(this);
  if ( v4 && -1.0 == *(float *)(v4 + 20) )
    sub_100A63E0(v4);
  v5 = *this;
  if ( v5 )
    v6 = *(float *)(v5 + 20);
  else
    v6 = 0.0;
  v8 = v6;
  sub_10079A70(*(_DWORD *)(v3 + 36), a2, (float *)v3);
  return v6 + v8;
}
