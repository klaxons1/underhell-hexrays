int __thiscall sub_10367520(float *this, int a2)
{
  int result; // eax
  double v4; // st7
  int (__thiscall *v5)(int, int, int); // eax
  int v6; // eax
  float v7; // edi
  double v8; // st7
  double (__thiscall *v9)(float *, int, float *, float *, int); // eax
  float v10; // [esp+20h] [ebp-40h]
  float v11[3]; // [esp+2Ch] [ebp-34h] BYREF
  float v12[3]; // [esp+38h] [ebp-28h] BYREF
  float v13[3]; // [esp+44h] [ebp-1Ch] BYREF
  float v14[3]; // [esp+50h] [ebp-10h] BYREF
  float v15; // [esp+5Ch] [ebp-4h]

  result = a2;
  if ( *(_BYTE *)(a2 + 361) && (*(_BYTE *)(a2 + 356) & 4) == 0 )
  {
    if ( ((_DWORD)this[63] & 0x1000) != 0 )
      sub_100DAFD0((int)this);
    v14[0] = 0.0;
    v14[1] = 0.0;
    v14[2] = this[121];
    sub_100DD660((int)this, v14);
    sub_10422220(this + 182, v13);
    v4 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -5, 5);
    v5 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8);
    v15 = v4;
    v6 = v5(dword_106B31E4, -5, 5);
    v7 = *this;
    v8 = (double)v6;
    v9 = *(double (__thiscall **)(float *, int, float *, float *, int))(*(_DWORD *)this + 2240);
    v11[0] = 15.0;
    v11[1] = v15;
    v11[2] = v8;
    v12[0] = v13[0] * 500.0;
    v12[1] = v13[1] * 500.0;
    v12[2] = 500.0 * v13[2];
    v10 = v9(this, 5, v11, v12, 2);
    result = (*(int (__thiscall **)(float *, _DWORD))(LODWORD(v7) + 2292))(this, LODWORD(v10));
    this[49] = 0.0;
  }
  return result;
}
