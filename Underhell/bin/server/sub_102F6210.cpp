char __thiscall sub_102F6210(int this, float *a2)
{
  double v3; // st4
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st6
  int v9; // eax

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 284))(a2)
    || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( ((_DWORD)a2[63] & 0x800) != 0 )
      sub_100DAE60((int)a2);
    v3 = a2[146] - *(float *)(this + 584);
    v4 = v3 * v3;
    v5 = a2[145] - *(float *)(this + 580);
    v6 = v4;
    v7 = a2[147] - *(float *)(this + 588);
    if ( v5 * v5 + v6 + v7 * v7 <= 129600.0 )
      return 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC)
    && ((v9 = sub_1025FB50(1)) != 0
     && a2 != (float *)v9
     && (*(unsigned __int8 (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v9 + 1276))(v9, a2, 0)
     || sub_102EBE50((int *)this, (_DWORD *)this, a2)) )
  {
    return 1;
  }
  else
  {
    return sub_100C7760((int *)this, (int)a2);
  }
}
