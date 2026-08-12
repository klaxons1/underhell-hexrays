char __thiscall sub_1029A130(int *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  const char *v6; // eax
  const char *v7; // ecx
  int v8; // eax
  _DWORD *v9; // esi
  char *v10; // edi
  _DWORD v12[11]; // [esp+14h] [ebp-10Ch] BYREF
  int v13[6]; // [esp+40h] [ebp-E0h] BYREF
  _DWORD v14[6]; // [esp+58h] [ebp-C8h] BYREF
  char v15; // [esp+70h] [ebp-B0h]
  int v16; // [esp+74h] [ebp-ACh]
  char v17; // [esp+78h] [ebp-A8h]
  int v18; // [esp+F8h] [ebp-28h]
  _DWORD v19[8]; // [esp+FCh] [ebp-24h] BYREF
  _BYTE v20[4]; // [esp+11Ch] [ebp-4h] BYREF

  v3 = this[14];
  v4 = dword_106DB118 + 56 * v3;
  if ( v4 )
  {
    LOBYTE(v3) = a2;
    if ( *(_DWORD *)(v4 + 4 * a2 + 28) )
    {
      v5 = this[1];
      *(float *)&v14[1] = 1.0;
      v14[2] = 100;
      v14[3] = 100;
      v14[4] = 100;
      v14[0] = 0;
      v14[5] = 75;
      v17 = 0;
      v15 = 0;
      v16 = 0;
      v18 = 0;
      v6 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 28))(v5, v20);
      if ( !v6 )
        v6 = String;
      v7 = *(const char **)(v4 + 4 * a2 + 28);
      if ( !v7 )
        v7 = String;
      if ( (unsigned __int8)sub_1023A760((int)v7, (int)v14, (int)v6) )
      {
        sub_100D78A0(v19, this[1], 0.80000001);
        sub_1023BE90(v12, (int)v14);
        v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
               dword_106B31D0,
               *(_DWORD *)(this[1] + 24));
        sub_1023BE40(v19, v8, (int)v12);
        sub_102375F0(v13);
        LOBYTE(v3) = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v19);
      }
      else
      {
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this[1] + 1656))(this[1]);
        v9 = (_DWORD *)v3;
        if ( v3 )
        {
          v10 = *(char **)(v4 + 4 * a2 + 28);
          if ( !v10 )
            v10 = (char *)String;
          LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
          if ( !(_BYTE)v3 )
          {
            LOBYTE(v3) = sub_100AF9C0((int)v9, (int)v10);
            if ( (_BYTE)v3 )
              LOBYTE(v3) = sub_100B0680(v9, v10, 0, 0, 0);
          }
        }
      }
    }
  }
  return v3;
}
