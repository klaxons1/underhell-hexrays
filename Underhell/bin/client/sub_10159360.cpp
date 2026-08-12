int __thiscall sub_10159360(float *this, float a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  double v6; // st6
  double v7; // st7
  int v8; // eax
  double v9; // st6
  double v10; // st7
  float *v11; // eax
  _BYTE v12[12]; // [esp+18h] [ebp-30h] BYREF
  _BYTE v13[12]; // [esp+24h] [ebp-24h] BYREF
  float v14[3]; // [esp+30h] [ebp-18h] BYREF
  float v15[3]; // [esp+3Ch] [ebp-Ch] BYREF

  result = sub_100378C0((int)this);
  v4 = result;
  if ( result )
  {
    if ( !*((_BYTE *)this + 1428) )
    {
      v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
      (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, v15, v5, 1);
      v6 = 0.5 * v15[2];
      v7 = v15[1] * 0.5;
      this[2258] = v15[0] * 0.5;
      this[2259] = v7;
      this[2260] = v6;
      this[2261] = this[2258];
      this[2262] = this[2259];
      this[2263] = this[2260];
    }
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4);
    sub_101EE040(v8, v14, v12, v13);
    sub_10038150((int)this);
    v9 = 30.0 * v14[2] + this[63];
    v10 = v14[1] * 30.0 + this[62];
    this[2274] = v14[0] * 30.0 + this[61];
    this[2275] = v10;
    this[2276] = v9;
    v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
    sub_10034A30(this + 1900, v11);
    return (*(int (__stdcall **)(_DWORD))(*((_DWORD *)this + 2198) + 4))(LODWORD(a2));
  }
  return result;
}
