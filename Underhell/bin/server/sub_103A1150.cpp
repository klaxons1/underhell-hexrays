volatile signed __int32 *__thiscall sub_103A1150(void *this, int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v6; // eax

  v6 = (_DWORD *)sub_10184390(40);
  if ( !v6 )
    return sub_101B8390((signed __int32)this, 0);
  v6[3] = 1;
  *v6 = &CMemberFunctor1<CNPC_RollerMine *,void (__thiscall CNPC_RollerMine::*)(CBaseEntity *),CBaseEntity *,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
  v6[2] = &CMemberFunctor1<CNPC_RollerMine *,void (__thiscall CNPC_RollerMine::*)(CBaseEntity *),CBaseEntity *,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
  v6[4] = a3;
  v6[5] = a4;
  v6[6] = a2;
  v6[8] = *a5;
  return sub_101B8390((signed __int32)this, (signed __int32)v6);
}
