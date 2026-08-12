void __thiscall sub_10252070(int this)
{
  int v2; // ebx
  int *v3; // ecx
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-64h] BYREF
  const char *v12; // [esp+14h] [ebp-60h]
  float v13; // [esp+18h] [ebp-5Ch]
  int v14; // [esp+1Ch] [ebp-58h]
  int v15[6]; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD v16[8]; // [esp+54h] [ebp-20h] BYREF

  if ( (*(_BYTE *)(this + 248) & 1) == 0 )
  {
    v2 = *(_DWORD *)(this + 248) | 1;
    if ( *(_DWORD *)(this + 248) != v2 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 248);
      }
      *(_DWORD *)(this + 248) = v2;
    }
    v4 = *(_DWORD *)(this + 948);
    if ( v4 != -1 )
    {
      v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 948) & 0xFFF) + 1];
      v6 = v4 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 948) & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 948) & 0xFFF) + 2] == v6 )
            v7 = *v5;
          else
            v7 = 0;
          *(_DWORD *)(this + 212) = *(_DWORD *)(v7 + 260);
        }
      }
    }
    sub_100EC4A0((int *)this, -1.0, 0);
    sub_100DD660(this, &flt_106F1CA8);
    if ( *(_DWORD *)(this + 920) )
    {
      sub_100D78A0(v16, this, 0.80000001);
      sub_100F8510((float *)&v11);
      v8 = *(const char **)(this + 920);
      v11 = 2;
      v12 = v8;
      if ( !v8 )
        v12 = String;
      v9 = *(_DWORD *)(this + 24);
      v13 = *(float *)(this + 928);
      v14 = 75;
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v9);
      sub_1023BE40(v16, v10, (int)&v11);
      sub_102375F0(v15);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
    }
    *(_DWORD *)(this + 4) = 0;
    sub_100D8290((float *)this, -1.0);
  }
}
