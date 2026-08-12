void __thiscall sub_10173320(void *this, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8[8]; // [esp+14h] [ebp-40h] BYREF
  _BYTE v9[8]; // [esp+34h] [ebp-20h] BYREF
  int v10; // [esp+3Ch] [ebp-18h]
  int v11; // [esp+48h] [ebp-Ch]
  int v12; // [esp+4Ch] [ebp-8h]

  HIDWORD(v5) = this;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      v6 = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
             (int)&CHL2_Player `RTTI Type Descriptor',
             0);
      LODWORD(v5) = v6;
      if ( v6 )
      {
        if ( *(_BYTE *)(v6 + 5064) )
          sub_102600F0(a2, "Valve_Hint_Flashlight");
        sub_1010DD80((_DWORD *)(HIDWORD(v5) + 1232), v5, 0.0);
        v10 = 0;
        v11 = -1;
        v12 = 0;
        sub_102DAE10(v9);
        sub_10165630(v8, SHIDWORD(v5), (int)"ItemBattery.Touch");
        v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
               dword_106B31D0,
               *(_DWORD *)(HIDWORD(v5) + 24));
        sub_1023C580((int)v8, v7, (int)"ItemBattery.Touch", 0, 0.0, 0);
        sub_102E1EC0(2);
        sub_1025FAC0(HIDWORD(v5));
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v8);
      }
    }
  }
}
