int __userpurge sub_10359260@<eax>(_DWORD *a1@<ecx>, float a2@<ebx>, _DWORD *a3)
{
  _BYTE *v4; // edi
  void (__noreturn ***v5)(); // edi
  int v6; // ebx
  int (__thiscall *v7)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  _DWORD v15[8]; // [esp+3Ch] [ebp-2Ch] BYREF
  _BYTE v16[12]; // [esp+5Ch] [ebp-Ch] BYREF

  v4 = (char *)a1 + 225;
  if ( *((_BYTE *)a1 + 225) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 480))(a1, (int)a1 + 225);
    *v4 = 0;
  }
  sub_10352CE0(a1);
  v5 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v5)[10])(v5, a1[945]);
  v6 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 580))(a1, v16);
  sub_10219BB0(v15);
  v15[0] = &CPASFilter::`vftable';
  sub_1021A370(v15, v6);
  v7 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*a1 + 580);
  v15[0] = &CPASAttenuationFilter::`vftable';
  v8 = (float *)v7(a1, v16, 0.80000001);
  sub_1021A0E0(v15, v8, a2);
  v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
  v10 = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, const char *))(*v5)[9])(
          v5,
          v15,
          v9,
          "NPC_CombineGunship.DyingSound");
  a1[945] = v10;
  ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v5)[2])(v5, v10, 1.0, 100.0, 0.0);
  v11 = a3[11];
  if ( v11 == -1 || off_1061BE18[4 * (a3[11] & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (a3[11] & 0xFFF) + 1];
  sub_1010DD80(a1 + 742, __SPAIR64__((unsigned int)a1, v12), 0.0);
  sub_100DA010(a1, a3);
  sub_103577B0(a1);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v15);
}
