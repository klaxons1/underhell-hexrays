_DWORD *__thiscall sub_1020AE90(_DWORD *this, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *result; // eax

  result = this;
  this[3] = 1;
  *this = &CMemberFunctor3<CBreakableProp *,void (__thiscall CBreakableProp::*)(Vector const &,Vector const &,QAngle const &),Vector,Vector,QAngle,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
  this[2] = &CMemberFunctor3<CBreakableProp *,void (__thiscall CBreakableProp::*)(Vector const &,Vector const &,QAngle const &),Vector,Vector,QAngle,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
  this[4] = a3;
  this[6] = a2;
  this[5] = a4;
  this[8] = *a5;
  this[9] = a5[1];
  this[10] = a5[2];
  this[11] = *a6;
  this[12] = a6[1];
  this[13] = a6[2];
  this[14] = *a7;
  this[15] = a7[1];
  this[16] = a7[2];
  return result;
}
