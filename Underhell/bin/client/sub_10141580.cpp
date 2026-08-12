int __thiscall sub_10141580(
        int (__thiscall ***this)(void *, _DWORD),
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _BYTE *a7,
        _BYTE *a8)
{
  int v9; // eax

  v9 = sub_100DDA40(40);
  if ( !v9 )
    return (**this)(this, 0);
  *(_DWORD *)(v9 + 12) = 1;
  *(_DWORD *)(v9 + 16) = a2;
  *(_DWORD *)v9 = &CFunctor6<void (__cdecl *)(int,int,int,int,bool,bool),int,int,int,int,bool,bool,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  *(_DWORD *)(v9 + 8) = &CFunctor6<void (__cdecl *)(int,int,int,int,bool,bool),int,int,int,int,bool,bool,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  *(_DWORD *)(v9 + 20) = *a3;
  *(_DWORD *)(v9 + 24) = *a4;
  *(_DWORD *)(v9 + 28) = *a5;
  *(_DWORD *)(v9 + 32) = *a6;
  *(_BYTE *)(v9 + 36) = *a7;
  *(_BYTE *)(v9 + 37) = *a8;
  return (**this)(this, v9);
}
