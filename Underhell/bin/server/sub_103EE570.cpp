int __thiscall sub_103EE570(int this, int a2, int a3)
{
  int result; // eax
  _DWORD v5[8]; // [esp+1Ch] [ebp-20h] BYREF

  if ( *(_BYTE *)(this + 1724) )
  {
    sub_102651C0((float *)a2, (float *)(a2 + 12), 0, -1, 8000.0, 0, (int)"AR2Tracer", 0);
    return sub_100E87A0(a2, a3);
  }
  else
  {
    result = sub_103ECF10((_DWORD *)this, (float *)a2, (float *)(a2 + 12), 2.4000001);
    if ( (*(_BYTE *)(a2 + 66) & 4) == 0 )
    {
      sub_10219BB0(v5);
      v5[0] = &CPVSFilter::`vftable';
      sub_1021A300(v5, a2 + 12);
      ((void (__stdcall *)(_DWORD *, _DWORD, int, int, _DWORD))(*off_1065C5EC)[37])(v5, 0.0, a2 + 12, a2 + 24, 0);
      sub_10262ED0(a2, *(_DWORD *)(this + 1732), 0);
      return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v5);
    }
  }
  return result;
}
