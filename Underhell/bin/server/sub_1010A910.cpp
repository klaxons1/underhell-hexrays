char __thiscall sub_1010A910(int this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  const char *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+Ch] [ebp-64h] BYREF
  const char *v13; // [esp+10h] [ebp-60h]
  float v14; // [esp+14h] [ebp-5Ch]
  int v15; // [esp+18h] [ebp-58h]
  _BYTE v16[24]; // [esp+38h] [ebp-38h] BYREF
  _DWORD v17[8]; // [esp+50h] [ebp-20h] BYREF

  if ( (*(_DWORD *)(this + 248) & 0x400) == 0 )
    goto LABEL_2;
  v6 = *(_DWORD *)(this + 800);
  if ( v6 != 2 && v6 != 3 )
  {
    if ( *(_BYTE *)(this + 976) )
    {
LABEL_2:
      LOBYTE(v6) = sub_10108010((float *)this, a2);
      return v6;
    }
    LOBYTE(v6) = (unsigned __int8)sub_10019680((_DWORD *)(this + 880), a2);
    if ( *(_DWORD *)(this + 800) )
    {
      v10 = sub_1026A890(this + 880);
      sub_1010DD80(v10, this, 0.0);
      LOBYTE(v6) = sub_10109A40((const char **)this);
    }
    else if ( (*(_DWORD *)(this + 248) & 0x20) != 0 )
    {
      if ( *(_DWORD *)(this + 992) )
      {
        sub_100D78A0(v17, this, 0.80000001);
        sub_100F8510((float *)&v12);
        v7 = *(const char **)(this + 992);
        v12 = 2;
        v13 = v7;
        if ( !v7 )
          v13 = String;
        v14 = 1.0;
        v15 = 75;
        v8 = sub_1001F3C0((_DWORD *)this);
        sub_1023BE40(v17, v8, &v12);
        sub_102375F0(v16);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v17);
      }
      v9 = sub_1026A890(this + 880);
      sub_1010DD80(v9, this, 0.0);
      LOBYTE(v6) = sub_10108B40(this);
    }
  }
  return v6;
}
