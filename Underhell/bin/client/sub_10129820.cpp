void __thiscall sub_10129820(_DWORD *this, int a2)
{
  double v3; // st7
  long double v4; // st6
  double v5; // st5
  long double v6; // st6
  long double v7; // st3
  double v8; // st5
  long double v9; // st3
  _BYTE *v10; // ecx
  int v11; // eax
  float v12; // [esp+0h] [ebp-58h]
  float v13; // [esp+4h] [ebp-54h]
  float v14[16]; // [esp+10h] [ebp-48h] BYREF
  int v15; // [esp+50h] [ebp-8h]
  float v16; // [esp+54h] [ebp-4h]

  if ( this[1] )
  {
    *(float *)&v15 = sub_1009E8A0(this + 2);
    v16 = sub_1009E8A0(this + 5);
    v3 = sub_1009E8A0(this + 8);
    v4 = v16 * 0.0174532925199433;
    v5 = cos(v4) * *((float *)off_103DC81C + 3) * *(float *)&v15;
    v6 = *(float *)&v15 * (sin(v4) * *((float *)off_103DC81C + 3));
    if ( v5 < 0.0 )
    {
      v15 = (int)v5;
      v5 = v5 + 1.0 - (double)(int)v5;
    }
    v7 = v6;
    if ( v6 < 0.0 )
    {
      v15 = (int)v6;
      v7 = v6 + 1.0 - (double)(int)v6;
    }
    v8 = v5 - (double)(int)v5;
    v15 = (int)v7;
    v9 = v7 - (double)(int)v7;
    v10 = (_BYTE *)this[1];
    if ( (v10[28] & 0xF) == 7 )
    {
      v14[0] = v3;
      v14[5] = v14[0];
      v14[1] = 0.0;
      v14[2] = 0.0;
      v14[4] = 0.0;
      v14[6] = 0.0;
      v14[8] = 0.0;
      v14[9] = 0.0;
      v14[11] = 0.0;
      v14[12] = 0.0;
      v14[13] = 0.0;
      v14[14] = 0.0;
      v14[3] = v8;
      v14[7] = v9;
      v14[10] = 1.0;
      v14[15] = 1.0;
      (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)v10 + 76))(v10, v14);
    }
    else
    {
      v13 = v9;
      v12 = v8;
      (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 40))(
        v10,
        LODWORD(v12),
        LODWORD(v13),
        0.0);
    }
    if ( (unsigned __int8)sub_101BC880() )
    {
      v11 = (*(int (__thiscall **)(_DWORD *))(*this + 12))(this);
      sub_101BCA60(v11);
    }
  }
}
