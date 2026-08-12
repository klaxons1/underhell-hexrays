void __thiscall sub_10150C80(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int v6; // eax
  const char *v7; // ecx
  int v8; // eax
  const char *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  const char *v13; // [esp+8h] [ebp-6Ch]
  int v14; // [esp+10h] [ebp-64h] BYREF
  const char *v15; // [esp+14h] [ebp-60h]
  float v16; // [esp+18h] [ebp-5Ch]
  int v17; // [esp+1Ch] [ebp-58h]
  _BYTE v18[24]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD v19[8]; // [esp+54h] [ebp-20h] BYREF

  if ( 0.0 != a5 )
  {
    v6 = this[232];
    if ( v6 )
    {
      if ( this[234] == v6 )
      {
        v7 = (const char *)this[233];
        if ( !v7 )
          v7 = String;
        v13 = v7;
        v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
        sub_1023AF30(v8, 4, v13);
      }
      else
      {
        this[234] = v6;
        sub_100D78A0(v19, (int)this, 0.80000001);
        sub_100F8510((float *)&v14);
        v9 = (const char *)this[232];
        v14 = 4;
        v15 = v9;
        if ( !v9 )
          v15 = String;
        v10 = this[6];
        v16 = 1.0;
        v17 = 75;
        v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v10);
        sub_1023BE40(v19, v11, &v14);
        sub_102375F0(v18);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
      }
    }
    sub_10246AC0((int)&a2, a5);
    v12 = this[238];
    if ( v12 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 20))(v12);
    sub_100EC3F0(this, 0, 0.0, 0);
  }
}
