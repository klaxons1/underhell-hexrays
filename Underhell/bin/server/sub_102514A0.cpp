void __usercall sub_102514A0(_DWORD *a1@<ecx>, float a2@<edi>)
{
  void (__noreturn ***v3)(); // eax
  int v4; // edi
  int (__thiscall *v5)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v6; // eax
  int v7; // eax
  int v8; // [esp+8h] [ebp-80h]
  int v10[5]; // [esp+44h] [ebp-44h] BYREF
  __int16 v11; // [esp+58h] [ebp-30h]
  _DWORD v12[8]; // [esp+5Ch] [ebp-2Ch] BYREF
  _BYTE v13[12]; // [esp+7Ch] [ebp-Ch] BYREF

  if ( a1[231] )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, a1[231]);
    a1[231] = 0;
  }
  if ( a1[230] )
  {
    v4 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 580))(a1, v13);
    sub_10219BB0(v12);
    v12[0] = &CPASFilter::`vftable';
    sub_1021A370(v12, v4);
    v5 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*a1 + 580);
    v12[0] = &CPASAttenuationFilter::`vftable';
    v6 = (float *)v5(a1, v13, 0.80000001);
    sub_1021A0E0(v12, v6, a2);
    v11 = -1;
    memset(v10, 0, sizeof(v10));
    v8 = a1[6];
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023BE40(v12, v7, v8);
    sub_102375F0(v10);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
  }
  a1[200] = 1;
}
