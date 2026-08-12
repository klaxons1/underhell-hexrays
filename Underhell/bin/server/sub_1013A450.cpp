int __thiscall sub_1013A450(
        int this,
        int a2,
        char *Source,
        int a4,
        float a5,
        int a6,
        int a7,
        float *a8,
        float a9,
        int *a10)
{
  char *v12; // eax
  _DWORD *v13; // eax
  const char *v14; // ecx
  const char *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // edi
  int v22; // ebx
  __int64 v23; // [esp-4h] [ebp-7Ch]
  float v24[11]; // [esp+14h] [ebp-64h] BYREF
  _DWORD v25[3]; // [esp+40h] [ebp-38h] BYREF
  int v26; // [esp+4Ch] [ebp-2Ch]
  _DWORD v27[8]; // [esp+58h] [ebp-20h] BYREF

  if ( *(_BYTE *)(this + 832) || (a6 & 0x40) != 0 )
    return 0;
  if ( !sub_10139BD0((_BYTE *)this, a2, a4, &a5, a8) )
    return 0;
  if ( (unsigned __int8)sub_102DC130(this + 828) )
  {
    if ( *(_DWORD *)(this + 824) )
    {
      v12 = *(char **)(this + 824);
      if ( !v12 )
        v12 = (char *)String;
      v13 = sub_1012BF20(&dword_1069E3E0, 0, v12, 0, 0, 0, 0);
      sub_10019680((_DWORD *)(this + 828), (int)v13);
      if ( (unsigned __int8)sub_102DC130(this + 828) )
      {
        v14 = *(const char **)(this + 824);
        if ( !v14 )
          v14 = String;
        v15 = *(const char **)(this + 260);
        if ( !v15 )
          v15 = String;
        Warning("EnvMicrophone %s specifies a non-existent speaker name: %s\n", v15, v14);
        *(_DWORD *)(this + 824) = 0;
      }
    }
    if ( (unsigned __int8)sub_102DC130(this + 828) )
      return 2;
  }
  *(_BYTE *)(this + 832) = 1;
  v16 = sub_1026A890(this + 828);
  sub_100D78A0(v27, v16, 0.80000001);
  sub_100F8510(v24);
  v24[2] = a5;
  LODWORD(v24[1]) = Source;
  LODWORD(v24[5]) = a7;
  LODWORD(v24[0]) = 6;
  LODWORD(v24[3]) = a4;
  LODWORD(v24[4]) = a6 | 0x40;
  v17 = sub_1026A890(this + 828);
  v18 = v17;
  if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
    sub_100DAE60(v17);
  v24[7] = a9;
  LODWORD(v24[6]) = v18 + 580;
  LODWORD(v24[10]) = a2;
  v19 = sub_1026A890(this + 828);
  v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v19 + 24));
  sub_1023BE40(v27, v20, v24);
  sub_104299C0((char *)(this + 920), Source, 0x100u);
  HIDWORD(v23) = this;
  LODWORD(v23) = this;
  sub_1010DD80((_DWORD *)(this + 872), v23, 0.0);
  v21 = 0;
  *(_BYTE *)(this + 832) = 0;
  if ( v26 > 0 )
  {
    v22 = 0;
    do
    {
      sub_1013A0E0(a10, a10[3], (_DWORD *)(v22 + v25[0]));
      ++v21;
      v22 += 12;
    }
    while ( v21 < v26 );
  }
  if ( (*(_BYTE *)(this + 248) & 0x10) != 0 )
  {
    sub_102375F0(v25);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v27);
    return 1;
  }
  else
  {
    sub_102375F0(v25);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v27);
    return 0;
  }
}
