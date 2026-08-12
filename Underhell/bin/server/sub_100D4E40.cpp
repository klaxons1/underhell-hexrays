int __thiscall sub_100D4E40(int this, int a2)
{
  unsigned int v3; // esi
  int *v4; // ecx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int result; // eax
  float v11; // [esp+4h] [ebp-30h]
  int v12[8]; // [esp+14h] [ebp-20h] BYREF

  v3 = *(_DWORD *)(this + 192) & 0xFFFFFEFF;
  if ( *(_DWORD *)(this + 192) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 192);
    }
    *(_DWORD *)(this + 192) = v3;
  }
  v5 = a2;
  v11 = 0.0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    sub_1010DD80(a2, this, v11);
    sub_10219BB0(v12);
    v6 = 1;
    if ( *(int *)(dword_106B31C8 + 20) >= 1 )
    {
      do
      {
        v7 = sub_1025FB50(v6);
        v8 = v7;
        if ( v7
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 264))(v7)
          && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 1332))(v8) == 4 )
        {
          sub_10219D00(v8);
        }
        ++v6;
      }
      while ( v6 <= *(_DWORD *)(dword_106B31C8 + 20) );
      v5 = a2;
    }
    if ( sub_1042A300(v12) )
    {
      v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v5 + 24));
      sub_1023C580((int)v12, v9, (int)"Player.PickupWeapon", 0, 0.0, 0);
    }
    *(_DWORD *)(this + 260) = 0;
    result = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v12);
    *(_BYTE *)(this + 1172) = 0;
  }
  else
  {
    result = sub_1010DD80(a2, this, v11);
    *(_BYTE *)(this + 1172) = 0;
  }
  return result;
}
