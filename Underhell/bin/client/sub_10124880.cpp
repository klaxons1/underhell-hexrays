int __thiscall sub_10124880(_DWORD **this, int a2)
{
  int v3; // esi
  void (__thiscall ***v4)(_DWORD, _DWORD *); // edi
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // edi

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 584))(v3) )
  {
    v4 = (void (__thiscall ***)(_DWORD, _DWORD *))(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 584))(v3);
    v5 = (_DWORD *)sub_100DDA40(28);
    if ( v5 )
    {
      v5[3] = 1;
      *v5 = &CMemberFunctor1<CEngineSprite *,void (__thiscall CEngineSprite::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
      v5[2] = &CMemberFunctor1<CEngineSprite *,void (__thiscall CEngineSprite::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
      v5[4] = sub_10124880;
      v5[5] = this;
      v5[6] = a2;
      (**v4)(v4, v5);
    }
    else
    {
      (**v4)(v4, 0);
    }
  }
  else
  {
    v6 = (*(int (__thiscall **)(_DWORD *, const char *, void *))(*this[4] + 188))(
           this[4],
           "$spriteRenderMode",
           &unk_10437E7C);
    v7 = v6;
    if ( v6 && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6) != a2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 16))(v7, a2);
      (*(void (__thiscall **)(_DWORD *))(*this[4] + 64))(this[4]);
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
}
