int __userpurge sub_1032DF20@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5)
{
  int result; // eax
  int v7; // ebx
  void (__noreturn ***v8)(); // edi
  int v9; // eax
  void (__noreturn ***v10)(); // eax
  void (__noreturn ***v11)(); // eax
  void (__noreturn ***v12)(); // eax
  _DWORD v15[8]; // [esp+68h] [ebp-24h] BYREF
  float v16; // [esp+88h] [ebp-4h]
  float v17; // [esp+98h] [ebp+Ch]

  result = *(_DWORD *)(a1 + 248) >> 1;
  if ( (*(_DWORD *)(a1 + 248) & 2) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 3772) )
    {
      v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 2328))(a1, *(_DWORD *)(a1 + 3824));
      v16 = COERCE_FLOAT(
              (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                dword_106B31E4,
                *(_DWORD *)(dword_106E57CC + 48),
                *(_DWORD *)(dword_106E5814 + 48)));
      *(float *)(a1 + 3816) = (float)SLODWORD(v16);
      sub_100D78A0(v15, a1, 0.80000001);
      v8 = sub_1023DBA0();
      v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
      *(_DWORD *)(a1 + 3772) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, int, _DWORD))(*v8)[8])(
                                 v8,
                                 v15,
                                 v9,
                                 6,
                                 v7,
                                 0.80000001);
      v10 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v10)[2])(
        v10,
        *(_DWORD *)(a1 + 3772),
        1.0,
        *(float *)(a1 + 3816),
        0.0);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
    }
    flt_1066E198 = *(float *)(dword_106E597C + 44);
    flt_1066E19C = *(float *)(dword_106E59C4 + 44);
    if ( (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 2, a3, a2) == 1 )
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1620))(a1);
    v11 = sub_1023DBA0();
    v16 = ((double (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))(*v11)[17])(v11, *(_DWORD *)(a1 + 3772), 0);
    v17 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                   dword_106B31E4,
                   (int)((double)*(int *)(dword_106E585C + 48) + *(float *)(a1 + 3816)),
                   (int)((double)*(int *)(dword_106E58A4 + 48) + *(float *)(a1 + 3816)));
    v12 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v12)[11])(
      v12,
      *(_DWORD *)(a1 + 3772),
      LODWORD(v17),
      0.30000001);
    result = dword_106B31C8;
    *(float *)(a1 + 3800) = *(float *)(dword_106B31C8 + 12) + v16 + 9999.0;
  }
  return result;
}
