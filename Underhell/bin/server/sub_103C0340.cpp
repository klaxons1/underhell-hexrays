int __thiscall sub_103C0340(float *this)
{
  int (__thiscall *v2)(float *); // edx
  float *v3; // eax
  double v4; // st7
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int (__thiscall *v9)(float *); // edx
  int v10; // eax
  int v11; // edi
  const char *v12; // eax
  int v13; // edi
  int v14; // eax
  int v16; // [esp+20h] [ebp-E8h]
  _BYTE v17[80]; // [esp+44h] [ebp-C4h] BYREF
  _DWORD v18[8]; // [esp+94h] [ebp-74h] BYREF
  _DWORD v19[7]; // [esp+B4h] [ebp-54h] BYREF
  float v20[3]; // [esp+D0h] [ebp-38h] BYREF
  float v21[3]; // [esp+DCh] [ebp-2Ch] BYREF
  int v22; // [esp+E8h] [ebp-20h] BYREF
  float v23; // [esp+ECh] [ebp-1Ch]
  float v24; // [esp+F0h] [ebp-18h]
  float v25; // [esp+F4h] [ebp-14h] BYREF
  float v26; // [esp+F8h] [ebp-10h]
  float v27; // [esp+FCh] [ebp-Ch]
  int v28; // [esp+100h] [ebp-8h]
  int v29; // [esp+104h] [ebp-4h]

  (*(void (__thiscall **)(float *, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, v21);
  v2 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 576);
  v25 = v21[0] * 12.0;
  v26 = v21[1] * 12.0;
  v27 = 12.0 * v21[2];
  v3 = (float *)v2(this);
  *(float *)&v22 = *v3 + v25;
  v23 = v3[1] + v26;
  v4 = v3[2] + v27;
  v5 = *((_DWORD *)this + 63) >> 11;
  v24 = v4;
  if ( (v5 & 1) != 0 )
    sub_100DAE60((int)this);
  sub_101AB000("explosion_turret_break", *(float *)&v22, v23, v24, this[176], this[177], this[178], 0);
  v6 = sub_10248110((int)v17, (int)this, (int)this, 15.0, 64, 0);
  sub_100C9F20(v6, (int)&v22, 120.0, 0, (int)this);
  sub_1023C380(this, (int)"NPC_FloorTurret.Destruct", 0.0, 0);
  v29 = sub_10219A30();
  v25 = (double)v29 * 0.000030518509 * 1600.0 - 800.0;
  v29 = sub_10219A30();
  v26 = (double)v29 * 0.000030518509 * 1600.0 - 800.0;
  v7 = sub_10219A30();
  v8 = *((_DWORD *)this + 63);
  v29 = v7;
  v27 = (double)v7 * 0.000030518509 * 1600.0 - 800.0;
  if ( (v8 & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  *(float *)&v19[4] = 1.0;
  *(float *)&v19[5] = 100.0;
  v19[0] = this + 145;
  v16 = *((_DWORD *)this + 106);
  v9 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 24);
  v19[3] = &v25;
  v19[1] = this + 176;
  v19[2] = &flt_106F1CA8;
  v19[6] = 4;
  v10 = v9(this);
  sub_10216B90(v10, v16, (int)v19, this, -1, 1, 1);
  sub_10219BB0(v18);
  v18[0] = &CPVSFilter::`vftable';
  sub_1021A300(v18, (int)&v22);
  v29 = 4;
  do
  {
    v28 = sub_10219A30();
    v25 = (double)v28 * 0.000030518509 * 200.0 - 100.0;
    v28 = sub_10219A30();
    v26 = (double)v28 * 0.000030518509 * 200.0 - 100.0;
    v28 = sub_10219A30();
    v27 = (double)v28 * 0.000030518509 * 200.0 - 100.0;
    v11 = *(_DWORD *)dword_106B31F0;
    v12 = sub_10215C30((int)&dword_106C29C8, "MetalChunks", -1);
    v13 = (*(int (__thiscall **)(int, const char *))(v11 + 8))(dword_106B31F0, v12);
    v20[0] = 40.0;
    v14 = *((_DWORD *)this + 63);
    v20[1] = 40.0;
    v20[2] = 40.0;
    if ( (v14 & 0x800) != 0 )
      sub_100DAE60((int)this);
    ((void (__stdcall *)(_DWORD *, _DWORD, int *, float *, float *, float *, int, int, int, _DWORD, int))(*off_1065C5EC)[12])(
      v18,
      0.0,
      &v22,
      this + 176,
      v20,
      &v25,
      v13,
      150,
      4,
      2.5,
      2);
    --v29;
  }
  while ( v29 );
  sub_1025FAC0((int)this);
  return std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v18);
}
