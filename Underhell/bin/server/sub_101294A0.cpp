int __thiscall sub_101294A0(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        float a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 a12,
        unsigned __int8 a13,
        unsigned __int8 a14,
        unsigned __int8 a15,
        unsigned __int8 a16,
        unsigned __int8 a17)
{
  int v18; // esi
  float v20; // [esp+20h] [ebp-48h]
  float v21; // [esp+24h] [ebp-44h]
  float v22; // [esp+2Ch] [ebp-3Ch]
  _DWORD v23[8]; // [esp+48h] [ebp-20h] BYREF

  sub_10219BB0(v23);
  v23[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200(v23);
  if ( (int)this[4] > 0 || !this[3] )
    goto LABEL_9;
  if ( !(unsigned __int8)sub_10219A90(v23) )
  {
    if ( (int)this[4] <= 0 )
      v18 = this[3];
    else
      v18 = 0;
    sub_10219DB0(v18);
  }
  if ( (*(int (__thiscall **)(_DWORD *))(v23[0] + 12))(v23) )
  {
LABEL_9:
    v22 = (float)a12;
    v21 = (float)a10;
    v20 = (float)a9;
    ((void (__stdcall *)(_DWORD *, _DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*off_1065C5EC)[5])(
      v23,
      0.0,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      LODWORD(a8),
      LODWORD(v20),
      LODWORD(v21),
      a11,
      LODWORD(v22),
      a13,
      a14,
      a15,
      a16,
      a17);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v23);
}
