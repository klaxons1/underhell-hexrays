void __thiscall sub_103C48B0(float *this)
{
  double v2; // st7
  unsigned int v3; // eax
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // edx
  double v9; // st7
  double (__thiscall *v10)(int, _DWORD, _DWORD); // edx
  double v11; // st7
  int v12; // eax
  float X_4; // [esp+1Ch] [ebp-78h]
  int X_4a; // [esp+1Ch] [ebp-78h]
  float X_4b; // [esp+1Ch] [ebp-78h]
  float v16[11]; // [esp+28h] [ebp-6Ch] BYREF
  int v17[6]; // [esp+54h] [ebp-40h] BYREF
  _DWORD v18[8]; // [esp+6Ch] [ebp-28h] BYREF
  float v19; // [esp+8Ch] [ebp-8h]
  float v20; // [esp+90h] [ebp-4h]

  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 2260))(this, 7);
  v2 = *(float *)(dword_106B31C8 + 12) - this[935];
  if ( v2 < 4.0 )
  {
    v5 = v2 * 0.25;
    if ( v5 <= 1.0 )
    {
      if ( v5 < 0.0 )
        v5 = 0.0;
    }
    else
    {
      v5 = 1.0;
    }
    v20 = v5;
    if ( v5 * -0.64999998 + 0.75 + this[939] < *(float *)(dword_106B31C8 + 12) )
    {
      sub_1023B860(this, (int)"NPC_FloorTurret.AlarmPing");
      sub_10165630(v18, (int)this, (int)"NPC_FloorTurret.AlarmPing");
      sub_100F8510(v16);
      LODWORD(v16[1]) = "NPC_FloorTurret.AlarmPing";
      LODWORD(v16[5]) = (int)floor(v20 * 125.0 + 100.0);
      v6 = *((_DWORD *)this + 6);
      LODWORD(v16[4]) = 2;
      X_4a = v6;
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
      sub_1023BE40(v18, v7, X_4a);
      (*(void (__thiscall **)(float *, int, float *))(*(_DWORD *)this + 2268))(this, 5, v16);
      v8 = *((_DWORD *)this + 63) >> 11;
      this[939] = *(float *)(dword_106B31C8 + 12);
      if ( (v8 & 1) != 0 )
        sub_100DAE60((int)this);
      v9 = v20;
      v10 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      v20 = 60.0 * v20;
      v19 = v9 * -60.0;
      v11 = v10(dword_106B31E4, LODWORD(v19), LODWORD(v20));
      v12 = *((_DWORD *)this + 63) >> 11;
      this[946] = v11 + this[176];
      if ( (v12 & 1) != 0 )
        sub_100DAE60((int)this);
      this[947] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    LODWORD(v19),
                    LODWORD(v20))
                + this[177];
      sub_102375F0(v17);
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
    }
    sub_103C1260((int *)this);
    X_4b = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, X_4b, 0);
  }
  else
  {
    sub_100EC3F0(this, (int)sub_103BFBD0, 0.0, 0);
    X_4 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, X_4, 0);
    v3 = *((_DWORD *)this + 955);
    if ( v3 == -1 || off_1061BE18[4 * ((_DWORD)this[955] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * ((_DWORD)this[955] & 0xFFF) + 1];
    sub_1025FAC0(v4);
    this[955] = NAN;
  }
}
