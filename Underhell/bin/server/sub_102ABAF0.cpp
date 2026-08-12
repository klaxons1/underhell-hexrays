int __cdecl sub_102ABAF0(float *a1, float *a2, char a3)
{
  unsigned int v3; // ecx
  float *v4; // eax
  int v6[8]; // [esp+8h] [ebp-20h] BYREF

  v3 = 12;
  v4 = a1;
  while ( *(_DWORD *)((char *)v4 + (char *)&flt_106DBABC - (char *)a1) == *(_DWORD *)v4 )
  {
    v3 -= 4;
    ++v4;
    if ( v3 < 4 )
      goto LABEL_6;
  }
  flt_106DBABC = *a1;
  flt_106DBAC0 = a1[1];
  flt_106DBAC4 = a1[2];
LABEL_6:
  sub_102ABA80(flt_106DBAC8, a2);
  if ( a3 != byte_106DBAD4 )
    byte_106DBAD4 = a3;
  sub_10219BB0(v6);
  v6[0] = (int)&CPVSFilter::`vftable';
  sub_1021A300(v6, (int)a1);
  sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106DBAA4, (int)v6, 0.0);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v6);
}
