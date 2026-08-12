void __thiscall sub_101731B0(_DWORD *this, __int64 a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7[8]; // [esp+14h] [ebp-40h] BYREF
  _BYTE v8[8]; // [esp+34h] [ebp-20h] BYREF
  int v9; // [esp+3Ch] [ebp-18h]
  int v10; // [esp+48h] [ebp-Ch]
  int v11; // [esp+4Ch] [ebp-8h]

  if ( (_DWORD)a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 320))(a2) )
    {
      v5 = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
             (int)&CHL2_Player `RTTI Type Descriptor',
             0);
      if ( v5 )
      {
        if ( !*(_BYTE *)(v5 + 5040) )
          sub_102600F0(a2, "Valve_Hint_Flashlight");
        sub_1010DD80(this + 282, a2, 0.0);
        v9 = 0;
        v10 = -1;
        v11 = 0;
        sub_102DAE10(v8);
        sub_102E1260(v8);
        sub_10165630(v7, (int)this, (int)"ItemBattery.Touch");
        v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
        sub_1023C580((int)v7, v6, (int)"ItemBattery.Touch", 0, 0.0, 0);
        sub_102E1EC0(2);
        sub_1025FAC0(this);
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v7);
      }
    }
  }
}
