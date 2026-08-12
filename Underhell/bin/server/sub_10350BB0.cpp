void __thiscall sub_10350BB0(int *this, int a2)
{
  void (__noreturn ***v3)(); // edi
  int v4; // ebx
  float *v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st7
  double v9; // st5
  double v10; // st7
  int v11; // edx
  void (__noreturn **v12)(); // ebx
  double v13; // st7
  double v14; // st5
  double v15; // st7
  int v16; // eax
  void (__noreturn **v17)(); // ebx
  double v18; // st7
  float v19; // [esp+18h] [ebp-40h]
  float v20; // [esp+24h] [ebp-34h]
  float v21; // [esp+28h] [ebp-30h]
  float v22; // [esp+28h] [ebp-30h]
  float v23[3]; // [esp+38h] [ebp-20h] BYREF
  int v24[3]; // [esp+44h] [ebp-14h] BYREF
  float v25; // [esp+50h] [ebp-8h]
  float v26; // [esp+54h] [ebp-4h]

  v3 = sub_1023DBA0();
  v20 = (float)a2;
  ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v3)[11])(v3, this[1024], LODWORD(v20), 0.1);
  v4 = sub_1025FB50(1);
  if ( v4 )
  {
    sub_100BF1B0(this, "rotor", (int)v24, 0, 0, v23);
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
    v6 = v5[1] - *(float *)&v24[1];
    v7 = *v5 - *(float *)v24;
    v8 = v7 * v7 + v6 * v6;
    v25 = v8;
    v9 = 1.0 - (v8 - 810000.0) * 0.00000041152262;
    if ( v9 <= 1.0 )
    {
      if ( v9 >= 0.0 )
      {
        v19 = v8;
        v10 = sub_1001F0E0(v19, 810000.0, 3240000.0, 1.0, 0.0);
      }
      else
      {
        v10 = 0.0;
      }
    }
    else
    {
      v10 = 1.0;
    }
    v11 = *this;
    v26 = v10;
    v12 = *v3;
    v13 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(v11 + 2296))(this, 0.1);
    v21 = v13 * v26;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD))v12[12])(v3, this[1024], LODWORD(v21));
    v14 = 1.0 - (v25 - 360000.0) * 0.0000076923079;
    if ( v14 <= 1.0 )
    {
      if ( v14 >= 0.0 )
        v15 = sub_1001F0E0(v25, 360000.0, 490000.0, 1.0, 0.0);
      else
        v15 = 0.0;
    }
    else
    {
      v15 = 1.0;
    }
    v16 = *this;
    v26 = v15;
    v17 = *v3;
    v18 = ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(v16 + 2296))(this, 0.1);
    v22 = v18 * v26;
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD))v17[12])(v3, this[1025], LODWORD(v22));
  }
  sub_102B2630(this, a2);
}
