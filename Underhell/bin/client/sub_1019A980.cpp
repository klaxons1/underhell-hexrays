int __thiscall sub_1019A980(int this)
{
  _DWORD *v2; // ecx
  int v3; // eax

  *(_DWORD *)this = &C_Strider::`vftable';
  *(_DWORD *)(this + 4) = &C_Strider::`vftable';
  *(_DWORD *)(this + 8) = &C_Strider::`vftable';
  *(_DWORD *)(this + 12) = &C_Strider::`vftable';
  v2 = (_DWORD *)(this + 3596);
  *v2 = &CInterpolatedVarArrayBase<Vector,1>::`vftable';
  sub_10027860((int)v2);
  sub_10034930(*(_DWORD *)(this + 3628));
  sub_10034930(*(_DWORD *)(this + 3616));
  sub_1010F720((_DWORD *)(this + 3604));
  *(_DWORD *)(this + 3596) = &IInterpolatedVar::`vftable';
  *(_DWORD *)(this + 3552) = &CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(_DWORD *)(this + 3566) = 0;
  sub_10034930(*(_DWORD *)(this + 3584));
  sub_10034930(*(_DWORD *)(this + 3572));
  v3 = *(_DWORD *)(this + 3560);
  if ( v3 )
    sub_10034930(v3 - 4);
  *(_DWORD *)(this + 3560) = 0;
  *(_DWORD *)(this + 3552) = &IInterpolatedVar::`vftable';
  *(float *)(this + 3464) = 0.0;
  *(_DWORD *)(this + 3384) = &C_StriderFX::`vftable';
  *(_DWORD *)(this + 3388) = &C_StriderFX::`vftable';
  sub_10179170(this + 3384);
  sub_10179220((_DWORD *)(this + 3384));
  return sub_10033490((_DWORD *)this);
}
