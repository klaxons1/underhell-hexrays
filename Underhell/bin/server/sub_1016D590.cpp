char __thiscall sub_1016D590(int this)
{
  double v1; // st7
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // eax

  v1 = *(float *)(dword_106B56FC + 44);
  *(float *)(this + 20) = *(float *)(dword_106B56FC + 44);
  v3 = *(_DWORD *)(dword_106B31C8 + 24);
  if ( v1 >= 10.0 )
    v3 -= (int)(v1 / *(float *)(dword_106B31C8 + 28) + 0.5);
  else
    *(float *)(this + 20) = 0.0;
  if ( !*(_DWORD *)(this + 24) && v3 > 0 )
    *(_DWORD *)(this + 52) = 0;
  v4 = *(_DWORD *)(this + 396);
  if ( v4 > 0 )
  {
    v5 = (_DWORD *)sub_1025FB50(*(_DWORD *)(this + 396));
    if ( !v5 || (v4 = sub_100D8840(v5), v4 != 1) )
      LOBYTE(v4) = sub_1016C930((_DWORD *)this, 0);
  }
  *(_DWORD *)(this + 24) = v3 < 0 ? 0 : v3;
  return v4;
}
