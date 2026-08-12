void __thiscall sub_103EC0C0(int this, _DWORD *a2, int a3, int a4, float a5)
{
  int v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _BYTE v10[68]; // [esp+14h] [ebp-98h] BYREF
  int v11; // [esp+58h] [ebp-54h]
  int v12; // [esp+60h] [ebp-4Ch]
  int v13[8]; // [esp+68h] [ebp-44h] BYREF
  float v14[3]; // [esp+88h] [ebp-24h] BYREF
  float v15[3]; // [esp+94h] [ebp-18h] BYREF
  float v16; // [esp+A0h] [ebp-Ch] BYREF
  double v17; // [esp+A4h] [ebp-8h] BYREF
  int savedregs; // [esp+ACh] [ebp+0h] BYREF

  if ( a2 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
  {
    sub_100F5A30(a2, (int)v14, 0, 0);
    (*(void (__thiscall **)(_DWORD *, float *))(*a2 + 504))(a2, v15);
    v16 = v14[0] * 1024.0 + v15[0];
    *(float *)&v17 = v14[1] * 1024.0 + v15[1];
    *((float *)&v17 + 1) = 1024.0 * v14[2] + v15[2];
    sub_1002A5F0((int)&savedregs, this, v15, &v16, 1174421515, (int)a2, 0, (int)v10);
    if ( v12 == this && v11 == 5 )
    {
      sub_100C7A30(a2, 300, "SMG1", 0);
      v6 = *(_DWORD *)(this + 908);
      if ( v6 != sub_100BDF40(this, "ammo_open") )
      {
        v7 = *(_DWORD *)(this + 908);
        if ( v7 != sub_100BDF40(this, "ammo_close") )
        {
          sub_100BC090((float *)(this + 124), (float *)(dword_106B31C8 + 12));
          v17 = 0.0;
          sub_10045730((float *)(this + 864), &v17);
          sub_10031B50(this, 0.0);
          v8 = sub_100BDF40(this, "ammo_open");
          sub_100C3330(this, v8);
          sub_10165630(v13, this, (int)"PropJeep.AmmoOpen");
          v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                 dword_106B31D0,
                 *(_DWORD *)(this + 24));
          sub_1023C580(v7, this, v13, v9, (int)"PropJeep.AmmoOpen", 0, 0.0, 0);
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v13);
        }
      }
      *(float *)(this + 1780) = *(float *)(dword_106B31C8 + 12) + 2.0;
    }
    else
    {
      sub_10266560((_DWORD **)this, a2, a3, a4, a5);
    }
  }
}
