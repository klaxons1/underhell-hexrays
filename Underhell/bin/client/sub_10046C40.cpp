int __thiscall sub_10046C40(_DWORD *this)
{
  int v1; // esi
  int v3; // eax
  int result; // eax
  int v5; // eax
  char v6[512]; // [esp+8h] [ebp-4F8h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-2F8h] BYREF
  _BYTE v8[116]; // [esp+408h] [ebp-F8h] BYREF
  int v9[4]; // [esp+47Ch] [ebp-84h] BYREF
  _BYTE v10[32]; // [esp+48Ch] [ebp-74h] BYREF
  float v11[11]; // [esp+4ACh] [ebp-54h] BYREF
  _BYTE v12[24]; // [esp+4D8h] [ebp-28h] BYREF
  char ArgList[16]; // [esp+4F0h] [ebp-10h] BYREF

  v1 = *(_DWORD *)dword_1041315C;
  v3 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(this[2] + 36))(this + 2, v8);
  result = (*(int (__thiscall **)(int, int))(v1 + 32))(dword_1041315C, v3);
  if ( *(_DWORD *)(dword_104073BC + 48) )
  {
    if ( v9[0] )
    {
      sub_10228630((int)v9, 4, ArgList, 16);
      sub_10228370(Buffer, 0x200u, "sound/temp/%s.wav", (char)ArgList);
      if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 40))(
             dword_10413188 + 4,
             Buffer,
             0)
        || (sub_10228370(v6, 0x200u, "downloads/%s.dat", (char)ArgList),
            result = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_10413188 + 4) + 40))(
                       dword_10413188 + 4,
                       v6,
                       0),
            (_BYTE)result)
        && (result = (*(int (__thiscall **)(int, char *, char *))(*(_DWORD *)dword_1041315C + 16))(
                       dword_1041315C,
                       v6,
                       Buffer),
            (_BYTE)result) )
      {
        sub_10228370(Buffer, 0x200u, "temp/%s.wav", (char)ArgList);
        sub_1015BB00(v10);
        sub_10013E00(v11);
        v11[2] = 1.0;
        LODWORD(v11[0]) = 2;
        LODWORD(v11[1]) = Buffer;
        LODWORD(v11[3]) = 75;
        v5 = sub_10035AA0(this);
        sub_10121280(v10, v5, v11);
        sub_1011A810(v12);
        return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v10);
      }
    }
  }
  return result;
}
