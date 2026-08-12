void __cdecl sub_1002E5C0(_DWORD *a1, char a2, float a3)
{
  int (__stdcall *v3)(const char *); // edx
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int (__thiscall *v9)(_DWORD *); // edx
  int v10; // eax
  _BYTE v11[44]; // [esp+4h] [ebp-DCh] BYREF
  float v12; // [esp+30h] [ebp-B0h]
  __int16 v13; // [esp+44h] [ebp-9Ch]
  int v14; // [esp+50h] [ebp-90h]
  _BYTE v15[12]; // [esp+58h] [ebp-88h] BYREF
  _DWORD v16[8]; // [esp+64h] [ebp-7Ch] BYREF
  float v17[9]; // [esp+84h] [ebp-5Ch] BYREF
  char v18; // [esp+AAh] [ebp-36h]
  _BYTE v19[24]; // [esp+B0h] [ebp-30h] BYREF
  float v20[3]; // [esp+C8h] [ebp-18h] BYREF
  float v21[3]; // [esp+D4h] [ebp-Ch] BYREF
  int savedregs; // [esp+E0h] [ebp+0h] BYREF

  if ( !a1
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 504))(a1)
    || (_DWORD *)sub_100422D0() != a1
    || (*(int (__thiscall **)(int *))(*off_103ED0D8 + 132))(off_103ED0D8) )
  {
    v3 = *(int (__stdcall **)(const char *))(a1[1] + 140);
    v4 = (int)(a1 + 1);
    v5 = a2 ? v3("LeftFoot") : v3("RightFoot");
    if ( v5 != -1 )
    {
      (*(void (__thiscall **)(_DWORD *, int, float *, _BYTE *))(*(_DWORD *)v4 + 148))(a1 + 1, v5, v21, v15);
      v20[0] = v21[0];
      v20[1] = v21[1];
      v20[2] = v21[2] - 48.0;
      sub_1000FCE0((int)&savedregs, v4, v21, v20, 100679691, (int)a1, 0, (int)v11);
      if ( v12 < 1.0 )
      {
        if ( v14 )
        {
          v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 20))(dword_10436258, v13);
          if ( v6 )
          {
            sub_10013E00(v17);
            if ( a2 )
              v7 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10436258 + 24))(*(unsigned __int16 *)(v6 + 44));
            else
              v7 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_10436258 + 24))(*(unsigned __int16 *)(v6 + 46));
            LODWORD(v17[1]) = v7;
            sub_10025C70(v16, (int)a1, v7);
            v8 = a1[2];
            v17[2] = a3;
            v9 = *(int (__thiscall **)(_DWORD *))(v8 + 36);
            v18 = 1;
            v10 = v9(a1 + 2);
            sub_10121280(v16, v10, v17);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v16);
            sub_1011A810(v19);
          }
        }
      }
    }
  }
}
