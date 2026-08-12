int __thiscall sub_103BDFA0(int this)
{
  _DWORD v3[8]; // [esp+3Ch] [ebp-3Ch] BYREF
  float v4[3]; // [esp+5Ch] [ebp-1Ch] BYREF
  float v5[3]; // [esp+68h] [ebp-10h] BYREF
  int v6; // [esp+74h] [ebp-4h] BYREF

  sub_10025DD0((_DWORD *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 3644) = *(float *)(this + 704);
  *(float *)(this + 3648) = *(float *)(this + 708);
  *(float *)(this + 3652) = *(float *)(this + 712);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( *(_BYTE *)(this + 224) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 2;
    sub_1023C380((_DWORD *)this, (int)"NPC_CeilingTurret.Die", 0.0, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106EBBF0);
  }
  v5[0] = 1.0;
  v5[1] = 1.0;
  v5[2] = 1.0;
  sub_10111860(this + 320, &flt_106F1CA8, v5, v4);
  sub_10219BB0(v3);
  v3[0] = &CBroadcastRecipientFilter::`vftable';
  sub_1021A200((int)v3);
  ((void (__stdcall *)(_DWORD *, _DWORD, float *, _DWORD, _DWORD, int))(*off_1065C5EC)[30])(
    v3,
    0.0,
    v4,
    word_10696BA0,
    2.5,
    10);
  ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
    off_1061B7A0,
    v4,
    1,
    1,
    0);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) && !sub_103BD400((_DWORD *)this) )
  {
    sub_103BDDC0((char *)this, 24.0);
    v6 = 0;
    sub_1002AB40((float *)(this + 864), &v6);
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v3);
}
