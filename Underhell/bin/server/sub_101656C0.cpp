int __thiscall sub_101656C0(_DWORD *this)
{
  int v2; // eax
  int v4[8]; // [esp+1Ch] [ebp-6Ch] BYREF
  _BYTE v5[12]; // [esp+3Ch] [ebp-4Ch] BYREF
  int v6[3]; // [esp+48h] [ebp-40h] BYREF
  int v7[3]; // [esp+54h] [ebp-34h] BYREF
  float v8[3]; // [esp+60h] [ebp-28h] BYREF
  float v9; // [esp+6Ch] [ebp-1Ch] BYREF
  float v10; // [esp+70h] [ebp-18h]
  float v11; // [esp+74h] [ebp-14h]
  float v12; // [esp+78h] [ebp-10h]
  float v13; // [esp+7Ch] [ebp-Ch]
  float v14; // [esp+80h] [ebp-8h]
  char v15[4]; // [esp+84h] [ebp-4h]

  sub_100BCCA0(this, 2, (int)&v9, (int)v5);
  sub_100BCCA0(this, 3, (int)v8, (int)v5);
  v12 = v9 - v8[0];
  v13 = v10 - v8[1];
  v14 = v11 - v8[2];
  off_10689714();
  v15[0] = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3) == 0;
  *(float *)v6 = v12 * 64.0 + v9;
  *(float *)&v6[1] = v13 * 64.0 + v10;
  *(float *)&v6[2] = 64.0 * v14 + v11;
  *(float *)v7 = v9 + v12 * 4096.0;
  *(float *)&v7[1] = v10 + v13 * 4096.0;
  *(float *)&v7[2] = v14 * 4096.0 + v11;
  sub_102651C0((int)v6, (int)v7, 0, -1, 5500.0, v15[0], 0, 0);
  sub_10165630(v4, (int)this, (int)"GenericNPC.GunSound");
  v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  sub_1023C580((int)v4, v2, (int)"GenericNPC.GunSound", 0, 0.0, 0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v4);
}
