char __thiscall sub_101725C0(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // ebx
  bool v8; // cc
  int v9; // eax
  int v11[8]; // [esp+1Ch] [ebp-40h] BYREF
  _BYTE v12[8]; // [esp+3Ch] [ebp-20h] BYREF
  float v13; // [esp+44h] [ebp-18h]
  int v14; // [esp+50h] [ebp-Ch]
  int v15; // [esp+54h] [ebp-8h]

  v5 = a2;
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    v5 = 0;
  v7 = __RTDynamicCast(
         (int)v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
         (int)&CHL2_Player `RTTI Type Descriptor',
         0);
  if ( !v5 )
    return 0;
  if ( (int)v5[55] < 100 || (int)v5[547] > 0 )
  {
    v8 = v5[547] <= 0;
    v13 = 5.0;
    v14 = -1;
    v15 = 1;
    if ( v8 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v5 + 260))(v5, 1.0, 0);
    }
    else
    {
      a2 = 0;
      sub_10172570(v5 + 547, &a2);
      *(float *)(v7 + 5068) = *(float *)(dword_106B31C8 + 12);
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v5 + 260))(v5, 5.0, 0);
      sub_102DFE20(v12);
    }
    sub_10165630(v11, (int)v5, (int)"HL2Player.PickupBandages");
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5[6]);
    sub_1023C580((int)v11, v9, (int)"HL2Player.PickupBandages", 0, 0.0, 0);
    sub_1010DD80(this + 282, __SPAIR64__((unsigned int)this, v7), 0.0);
    sub_1025FAC0(this);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
  }
  return 1;
}
