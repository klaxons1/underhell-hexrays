volatile signed __int32 *__thiscall sub_101B9400(void *this, int a2, _DWORD *a3, _DWORD *a4, _BYTE *a5, float *a6)
{
  signed __int32 v7; // eax

  v7 = sub_10184390(36);
  if ( !v7 )
    return sub_101B8390((signed __int32)this, 0);
  *(_DWORD *)(v7 + 12) = 1;
  *(_DWORD *)(v7 + 16) = a2;
  *(_DWORD *)v7 = &CFunctor4<CBaseEntity * (__cdecl *)(CBaseEntity *,CBaseEntity *,bool,float),CBaseEntity *,CBaseEntity *,bool,float,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  *(_DWORD *)(v7 + 8) = &CFunctor4<CBaseEntity * (__cdecl *)(CBaseEntity *,CBaseEntity *,bool,float),CBaseEntity *,CBaseEntity *,bool,float,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  *(_DWORD *)(v7 + 20) = *a3;
  *(_DWORD *)(v7 + 24) = *a4;
  *(_BYTE *)(v7 + 28) = *a5;
  *(float *)(v7 + 32) = *a6;
  return sub_101B8390((signed __int32)this, v7);
}
