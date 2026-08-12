int __thiscall sub_10374770(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  int (__thiscall *v5)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v6; // eax
  int v7; // eax
  int v9; // [esp+0h] [ebp-48h]
  float v10; // [esp+10h] [ebp-38h]
  int v11[8]; // [esp+1Ch] [ebp-2Ch] BYREF
  _BYTE v12[12]; // [esp+3Ch] [ebp-Ch] BYREF

  sub_100BF1B0(this, "back foot", a2, 0, 0, 0);
  v4 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 580))(this, v12);
  sub_10219BB0(v11);
  v11[0] = (int)&CPASFilter::`vftable';
  sub_1021A370(v11, v4);
  v5 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 580);
  v11[0] = (int)&CPASAttenuationFilter::`vftable';
  v6 = (float *)v5(this, v12, 0.80000001);
  sub_1021A0E0(v11, v6, v10);
  v9 = this[6];
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_1023C580(a2, v9, v11, v7, v9, (int)"NPC_Hunter.BackFootstep", *(float *)&a2, a3);
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
  return a2;
}
