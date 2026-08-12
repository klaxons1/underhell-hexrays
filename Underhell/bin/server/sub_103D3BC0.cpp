volatile signed __int32 *__thiscall sub_103D3BC0(void *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax

  v5 = (_DWORD *)sub_10184390(32);
  if ( !v5 )
    return sub_101B8390((signed __int32)this, 0);
  v5[3] = 1;
  *v5 = &CMemberFunctor0<CPropCombineBall *,void (__thiscall CPropCombineBall::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
  v5[2] = &CMemberFunctor0<CPropCombineBall *,void (__thiscall CPropCombineBall::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
  v5[4] = a3;
  v5[6] = a2;
  v5[5] = a4;
  return sub_101B8390((signed __int32)this, (signed __int32)v5);
}
