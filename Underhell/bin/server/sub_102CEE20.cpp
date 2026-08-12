void __thiscall sub_102CEE20(unsigned int *this)
{
  unsigned int *v2; // edi
  int v3; // eax
  const char *v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // esi
  unsigned int *v8; // eax
  int *v9; // ecx
  _BYTE *v10; // [esp+4h] [ebp-70h]
  int v11; // [esp+10h] [ebp-64h] BYREF
  const char *v12; // [esp+14h] [ebp-60h]
  float v13; // [esp+18h] [ebp-5Ch]
  int v14; // [esp+1Ch] [ebp-58h]
  int v15[6]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD v16[8]; // [esp+54h] [ebp-20h] BYREF

  v2 = this + 62;
  if ( (this[62] & 0x10000) != 0 )
  {
    if ( this[264] )
    {
      v10 = (_BYTE *)this[264];
      v3 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
      sub_1023AF30(v3, 6, v10);
    }
    if ( this[263] )
    {
      sub_100D78A0(v16, (int)this, 0.80000001);
      sub_100F8510((float *)&v11);
      v4 = (const char *)this[263];
      v11 = 4;
      v12 = v4;
      if ( !v4 )
        v12 = String;
      v5 = this[6];
      v13 = 1.0;
      v14 = 75;
      v6 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v5);
      sub_1023BE40(v16, v6, (int)&v11);
      sub_102375F0(v15);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
    }
  }
  v7 = *v2 & 0xFFFEFFFF;
  if ( *v2 != v7 )
  {
    v8 = v2 - 62;
    if ( *((_BYTE *)v2 - 164) )
    {
      *((_BYTE *)v8 + 88) |= 1u;
      *v2 = v7;
    }
    else
    {
      v9 = (int *)v8[6];
      if ( v9 )
        sub_100194B0(v9, 248);
      *v2 = v7;
    }
  }
}
