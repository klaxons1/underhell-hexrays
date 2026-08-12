void __thiscall sub_1002EF50(int this, __int32 a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  void *v10; // esp
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // ecx
  int i; // esi
  _DWORD v15[3]; // [esp+0h] [ebp-10h]
  int v16; // [esp+Ch] [ebp-4h]

  v5 = a3;
  v16 = this;
  if ( a3 )
  {
    v7 = a5;
    if ( !a5 )
    {
      v7 = g_pThreadPool;
      a5 = g_pThreadPool;
    }
    _InterlockedExchange((volatile __int32 *)(this + 12), a2);
    *(_DWORD *)(this + 16) = a2 + 4 * v5;
    v8 = v5 - 1;
    if ( v8 > a4 )
      v8 = a4;
    if ( !v7 )
      goto LABEL_18;
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 28))(v7);
    if ( v8 > v9 )
      v8 = v9;
    if ( v8 > 1 )
    {
      v10 = alloca(4 * v8);
      v11 = v8;
      do
      {
        --v11;
        v12 = (_DWORD *)sub_100DDA40(24);
        if ( v12 )
        {
          v13 = v16;
          v12[3] = 1;
          *v12 = &CMemberFunctor0<CParallelProcessor<C_BaseAnimating *,CFuncJobItemProcessor<C_BaseAnimating *>> *,void (__thiscall CParallelProcessor<C_BaseAnimating *,CFuncJobItemProcessor<C_BaseAnimating *>>::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
          v12[2] = &CMemberFunctor0<CParallelProcessor<C_BaseAnimating *,CFuncJobItemProcessor<C_BaseAnimating *>> *,void (__thiscall CParallelProcessor<C_BaseAnimating *,CFuncJobItemProcessor<C_BaseAnimating *>>::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
          v12[4] = sub_1007D300;
          v12[5] = v13;
        }
        else
        {
          v12 = 0;
        }
        (*(void (__thiscall **)(int, _DWORD *, int *, _DWORD, int))(*(_DWORD *)a5 + 80))(a5, v12, &a3, 0, 8);
        v15[v11] = a3;
      }
      while ( v11 );
      sub_1007D300(v16);
      for ( i = 0; i < v8; ++i )
      {
        sub_10025CB0((volatile signed __int32 *)v15[i], 1);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v15[i] + 4))(v15[i]);
      }
    }
    else
    {
LABEL_18:
      sub_1007D300(this);
    }
  }
}
