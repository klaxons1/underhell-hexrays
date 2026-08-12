int __thiscall sub_1010A520(int this, int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  const char *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+Ch] [ebp-64h] BYREF
  const char *v12; // [esp+10h] [ebp-60h]
  float v13; // [esp+14h] [ebp-5Ch]
  int v14; // [esp+18h] [ebp-58h]
  _BYTE v15[24]; // [esp+38h] [ebp-38h] BYREF
  _DWORD v16[8]; // [esp+50h] [ebp-20h] BYREF

  result = a3;
  switch ( a3 )
  {
    case 3:
      v5 = *(_DWORD *)(this + 800);
      if ( v5 == 2 || v5 == 3 )
        return result;
      break;
    case 1:
      v6 = *(_DWORD *)(this + 800);
      if ( v6 == 2 || !v6 )
        return result;
      break;
    case 2:
      v7 = *(_DWORD *)(this + 800);
      if ( v7 == 3 || v7 == 1 )
        return result;
      break;
  }
  if ( *(_BYTE *)(this + 976) )
    return sub_1011FE20(this, this + 932, 1, 1);
  *(_DWORD *)(this + 196) = 0;
  switch ( a3 )
  {
    case 3:
      if ( *(_DWORD *)(this + 800) )
        goto LABEL_28;
      break;
    case 2:
      result = *(_DWORD *)(this + 800);
      if ( result && result != 2 )
        return result;
      break;
    case 1:
      result = *(_DWORD *)(this + 800);
      if ( result != 1 && result != 3 )
        return result;
LABEL_28:
      sub_1010DD80(a2, this, 0.0);
      return sub_10109A40((const char **)this);
    default:
      return result;
  }
  if ( *(_DWORD *)(this + 992) )
  {
    sub_100D78A0(v16, this, 0.80000001);
    sub_100F8510((float *)&v11);
    v8 = *(const char **)(this + 992);
    v11 = 2;
    v12 = v8;
    if ( !v8 )
      v12 = String;
    v9 = *(_DWORD *)(this + 24);
    v13 = 1.0;
    v14 = 75;
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v9);
    sub_1023BE40(v16, v10, &v11);
    sub_102375F0(v15);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
  }
  sub_1010DD80(a2, this, 0.0);
  return sub_10108B40(this);
}
