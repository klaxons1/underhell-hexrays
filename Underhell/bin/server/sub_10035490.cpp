int __thiscall sub_10035490(int this)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this;
  result = dword_106B345C;
  if ( *(_DWORD *)(dword_106B345C + 48) )
  {
    v2 = *(_DWORD *)(this + 16);
    v3 = *(_DWORD *)(this + 4);
    *(_BYTE *)(this + 24) = 0;
    v4 = (_DWORD *)sub_10184390(28);
    if ( v4 )
    {
      v4[3] = 1;
      *v4 = &CFunctor2<void (__cdecl *)(CFunctor * *,unsigned int),CFunctor * *,int,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
      v4[2] = &CFunctor2<void (__cdecl *)(CFunctor * *,unsigned int),CFunctor * *,int,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
      v4[4] = sub_1001F580;
      v4[5] = v3;
      v4[6] = v2;
    }
    else
    {
      v4 = 0;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *, int *, _DWORD, int))(*g_pThreadPool + 80))(g_pThreadPool, v4, &v5, 0, 8);
    result = v5;
    dword_10690434 = v5;
  }
  return result;
}
