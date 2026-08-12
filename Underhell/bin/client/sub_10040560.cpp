int __thiscall sub_10040560(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp-4h] [ebp-10h]

  v6 = this[662];
  *this = (int)&C_BaseFlex::`vftable';
  this[1] = (int)&C_BaseFlex::`vftable';
  this[2] = (int)&C_BaseFlex::`vftable';
  this[3] = (int)&C_BaseFlex::`vftable';
  sub_10034930(v6);
  this[641] = 0;
  sub_1003FD40((int)(this + 648));
  this[743] = (int)&CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(int *)((char *)this + 2986) = 0;
  sub_10034930(this[751]);
  sub_10034930(this[748]);
  v2 = this[745];
  if ( v2 )
    sub_10034930(v2 - 4);
  this[745] = 0;
  this[743] = (int)&IInterpolatedVar::`vftable';
  this[729] = (int)&CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(int *)((char *)this + 2930) = 0;
  sub_10034930(this[737]);
  sub_10034930(this[734]);
  v3 = this[731];
  if ( v3 )
    sub_10034930(v3 - 4);
  this[731] = 0;
  this[729] = (int)&IInterpolatedVar::`vftable';
  sub_100404F0((int)(this + 648));
  sub_1011A810(this + 643);
  sub_1011A810(this + 638);
  this[626] = (int)&CInterpolatedVarArrayBase<float,1>::`vftable';
  sub_10027860((int)(this + 626));
  sub_10034930(this[634]);
  sub_10034930(this[631]);
  sub_1010F720(this + 628);
  this[626] = (int)&IInterpolatedVar::`vftable';
  this[519] = (int)&CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(int *)((char *)this + 2090) = 0;
  sub_10034930(this[527]);
  sub_10034930(this[524]);
  v4 = this[521];
  if ( v4 )
    sub_10034930(v4 - 4);
  this[521] = 0;
  this[519] = (int)&IInterpolatedVar::`vftable';
  return sub_10032580(this);
}
