void __usercall sub_1024DE60(float *a1@<ecx>, float a2@<ebx>, int a3@<edi>)
{
  void (__noreturn ***v4)(); // eax
  void (__noreturn ***v5)(); // edi
  int v6; // ebx
  int (__thiscall *v7)(float *, _BYTE *, _DWORD); // edx
  float *v8; // eax
  const char *v9; // ebx
  int v10; // eax
  void (__noreturn *v11)(); // edx
  int v12; // eax
  _DWORD v15[8]; // [esp+3Ch] [ebp-2Ch] BYREF
  _BYTE v16[12]; // [esp+5Ch] [ebp-Ch] BYREF

  if ( *((_DWORD *)a1 + 231) )
  {
    v4 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v4)[10])(v4, *((_DWORD *)a1 + 231));
    a1[231] = 0.0;
  }
  if ( *((_DWORD *)a1 + 229) )
  {
    v5 = sub_1023DBA0();
    v6 = (*(int (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)a1 + 580))(a1, v16, a3);
    sub_10219BB0(v15);
    v15[0] = &CPASFilter::`vftable';
    sub_1021A370(v15, v6);
    v7 = *(int (__thiscall **)(float *, _BYTE *, _DWORD))(*(_DWORD *)a1 + 580);
    v15[0] = &CPASAttenuationFilter::`vftable';
    v8 = (float *)v7(a1, v16, 0.80000001);
    sub_1021A0E0(v15, v8, a2);
    v9 = (const char *)*((_DWORD *)a1 + 229);
    if ( !v9 )
      v9 = String;
    v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)a1 + 6));
    v11 = (*v5)[8];
    *(float *)&v15[1] = 0.80000001;
    v15[0] = v9;
    v12 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int))v11)(v5, v15, v10, 6);
    *((_DWORD *)a1 + 231) = v12;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v5)[2])(v5, v12, a1[232], 100.0, 0.0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
  }
}
