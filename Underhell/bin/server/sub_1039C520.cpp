int __userpurge sub_1039C520@<eax>(float *a1@<ecx>, float a2@<edi>, int a3, int a4)
{
  int v5; // ebx
  int (__thiscall *v6)(float *, _BYTE *); // edx
  int v7; // edi
  int (__thiscall *v8)(float *, _BYTE *, _DWORD); // edx
  float *v9; // eax
  void (__noreturn ***v10)(); // edi
  int v11; // eax
  void (__noreturn ***v12)(); // eax
  void (__noreturn ***v13)(); // eax
  void (__noreturn ***v14)(); // eax
  int result; // eax
  float v17; // [esp+5Ch] [ebp-3Ch]
  _DWORD v18[8]; // [esp+68h] [ebp-30h] BYREF
  _BYTE v19[12]; // [esp+88h] [ebp-10h] BYREF
  int v20; // [esp+94h] [ebp-4h]
  float v21; // [esp+A0h] [ebp+8h]
  float v22; // [esp+A4h] [ebp+Ch]

  if ( !*((_DWORD *)a1 + 943) )
  {
    v5 = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 2328))(a1, *((_DWORD *)a1 + 956));
    v20 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 98, 110);
    v6 = *(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a1 + 580);
    a1[954] = (float)v20;
    v7 = v6(a1, v19);
    sub_10219BB0(v18);
    v18[0] = &CPASFilter::`vftable';
    sub_1021A370(v18, v7);
    v8 = *(int (__thiscall **)(float *, _BYTE *, _DWORD))(*(_DWORD *)a1 + 580);
    v18[0] = &CPASAttenuationFilter::`vftable';
    v9 = (float *)v8(a1, v19, 1.5);
    sub_1021A0E0(v18, v9, a2);
    v10 = sub_1023DBA0();
    v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)a1 + 6));
    *((_DWORD *)a1 + 943) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, int, _DWORD))(*v10)[8])(
                              v10,
                              v18,
                              v11,
                              6,
                              v5,
                              1.5);
    v12 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD, _DWORD))(*v12)[2])(
      v12,
      *((_DWORD *)a1 + 943),
      0.5,
      a1[954],
      0.0);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
  }
  flt_10677DCC = 0.1;
  flt_10677DD0 = 0.40000001;
  if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 2) == 1 )
    (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 1620))(a1);
  v13 = sub_1023DBA0();
  v21 = ((double (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, int, int))(*v13)[17])(
          v13,
          *((_DWORD *)a1 + 943),
          0,
          a3,
          a4);
  v22 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -4, 4);
  v14 = sub_1023DBA0();
  v17 = a1[954] + v22;
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v14)[11])(
    v14,
    *((_DWORD *)a1 + 943),
    LODWORD(v17),
    0.30000001);
  result = dword_106B31C8;
  a1[950] = *(float *)(dword_106B31C8 + 12) + v21 + 9999.0;
  return result;
}
