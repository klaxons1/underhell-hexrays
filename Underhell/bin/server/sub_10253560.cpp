void __thiscall sub_10253560(int this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  unsigned int v7; // edi
  int *v8; // ecx
  int v9; // edi
  int *v10; // ecx
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  const char *v15; // eax
  double v16; // st7
  int v17; // ebx
  int v18; // eax
  int v19; // [esp+14h] [ebp-64h] BYREF
  const char *v20; // [esp+18h] [ebp-60h]
  float v21; // [esp+1Ch] [ebp-5Ch]
  int v22; // [esp+20h] [ebp-58h]
  int v23[6]; // [esp+40h] [ebp-38h] BYREF
  _DWORD v24[8]; // [esp+58h] [ebp-20h] BYREF

  v6 = *(_DWORD *)(this + 248);
  if ( (v6 & 1) != 0 )
  {
    v7 = v6 & 0xFFFFFFFE;
    if ( *(_DWORD *)(this + 248) != v7 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 248) = v7;
        sub_10251B40(this, *(float *)&this);
        return;
      }
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 248);
      *(_DWORD *)(this + 248) = v7;
    }
    sub_10251B40(this, *(float *)&this);
  }
  else
  {
    v9 = v6 | 1;
    if ( *(_DWORD *)(this + 248) != v9 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 248);
      }
      *(_DWORD *)(this + 248) = v9;
    }
    v11 = *(_DWORD *)(this + 948);
    if ( v11 != -1 )
    {
      v12 = &off_1061BE18[4 * (*(_DWORD *)(this + 948) & 0xFFF) + 1];
      v13 = v11 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 948) & 0xFFF) + 2] == v13 )
      {
        if ( *v12 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 948) & 0xFFF) + 2] == v13 )
            v14 = *v12;
          else
            v14 = 0;
          *(_DWORD *)(this + 212) = *(_DWORD *)(v14 + 260);
        }
      }
    }
    sub_100EC4A0((int *)this, -1.0, 0);
    sub_100DD790((float *)this, &flt_106F1CA8);
    if ( *(_DWORD *)(this + 920) )
    {
      sub_100D78A0(v24, this, 0.80000001);
      sub_100F8510((float *)&v19);
      v15 = *(const char **)(this + 920);
      v19 = 2;
      v20 = v15;
      if ( !v15 )
        v20 = String;
      v16 = *(float *)(this + 928);
      v17 = *(_DWORD *)(this + 24);
      v21 = v16;
      v22 = 75;
      v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v17);
      sub_1023BE40(v24, v18, (int)&v19);
      sub_102375F0(v23);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v24);
    }
  }
}
