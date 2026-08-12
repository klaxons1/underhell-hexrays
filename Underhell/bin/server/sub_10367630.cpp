int __thiscall sub_10367630(_DWORD *this, int a2)
{
  int v3; // edi
  int (__thiscall *v4)(_DWORD *, _BYTE *, _DWORD); // edx
  float *v5; // eax
  int v6; // eax
  int v8; // [esp+0h] [ebp-94h]
  float v9; // [esp+10h] [ebp-84h]
  _DWORD v10[20]; // [esp+18h] [ebp-7Ch] BYREF
  int v11[8]; // [esp+68h] [ebp-2Ch] BYREF
  _BYTE v12[12]; // [esp+88h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 580))(this, v12);
  sub_10219BB0(v11);
  v11[0] = (int)&CPASFilter::`vftable';
  sub_1021A370(v11, v3);
  v4 = *(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*this + 580);
  v11[0] = (int)&CPASAttenuationFilter::`vftable';
  v5 = (float *)v4(this, v12, 0.80000001);
  sub_1021A0E0(v11, v5, v9);
  v8 = this[6];
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
  sub_1023C580(v3, (int)this, v11, v6, v8, (int)"NPC_FastZombie.NoSound", 0.0, COERCE_INT(0.0));
  sub_1001E4E0(v10, a2);
  sub_1032F780(this, (int)v10);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v11);
}
