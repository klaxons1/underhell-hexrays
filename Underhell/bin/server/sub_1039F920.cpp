int __thiscall sub_1039F920(_DWORD *this)
{
  _BYTE *v2; // edi
  bool v3; // zf
  int v4; // edx
  int (__thiscall *v5)(_DWORD *); // eax
  float *v6; // eax
  double v7; // st7
  float *v8; // eax
  _BYTE v10[80]; // [esp+28h] [ebp-B4h] BYREF
  float v11; // [esp+78h] [ebp-64h] BYREF
  float v12; // [esp+7Ch] [ebp-60h]
  float v13; // [esp+80h] [ebp-5Ch]
  float v14; // [esp+84h] [ebp-58h]
  float v15; // [esp+88h] [ebp-54h]
  float v16; // [esp+8Ch] [ebp-50h]
  float v17; // [esp+90h] [ebp-4Ch]
  float v18; // [esp+94h] [ebp-48h]
  float v19; // [esp+98h] [ebp-44h]
  float v20; // [esp+9Ch] [ebp-40h]
  float v21; // [esp+A0h] [ebp-3Ch]
  float v22; // [esp+A4h] [ebp-38h]
  int v23; // [esp+A8h] [ebp-34h]
  int v24; // [esp+ACh] [ebp-30h]
  float v25; // [esp+B0h] [ebp-2Ch]
  float v26; // [esp+B4h] [ebp-28h]
  float v27; // [esp+B8h] [ebp-24h]
  int v28; // [esp+BCh] [ebp-20h]
  __int16 v29; // [esp+C0h] [ebp-1Ch]
  int v30; // [esp+C4h] [ebp-18h]
  int v31; // [esp+C8h] [ebp-14h]
  int v32; // [esp+CCh] [ebp-10h]
  char v33; // [esp+D0h] [ebp-Ch]
  float v34; // [esp+D8h] [ebp-4h]

  v2 = (char *)this + 225;
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 480))(this, (int)this + 225);
    *v2 = 0;
  }
  v3 = *((_BYTE *)this + 3838) == 1;
  v34 = (float)(*((_BYTE *)this + 3826) != 0 ? 100 : 25);
  if ( v3 )
    v34 = 50.0;
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( ((**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, (int)(this + 145), 0) & 0x4030) != 0 )
  {
    v4 = *this;
    v11 = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    v29 = 0;
    v5 = *(int (__thiscall **)(_DWORD *))(v4 + 576);
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    v23 = 0;
    v17 = 0.0;
    v24 = 0;
    v18 = 0.0;
    v28 = 0;
    v19 = 0.0;
    v30 = 0;
    v20 = 0.0;
    v31 = 0;
    v21 = 0.0;
    v32 = 0;
    v22 = 0.0;
    v33 = 0;
    v25 = 1.0;
    v26 = 0.0;
    v27 = 0.0;
    v6 = (float *)v5(this);
    v11 = *v6;
    v12 = v6[1];
    v7 = v6[2];
    v23 = 1064;
    v13 = v7;
    v26 = v34;
    v25 = 128.0;
    sub_1028E890((int)"WaterSurfaceExplosion", (int)&v11);
  }
  else
  {
    v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
    sub_1013D530(v8, (float *)this + 182, (int)this, (int)v34, 128, 1, 0.0, 0, 0, -1);
  }
  sub_10248110((int)v10, (int)this, (int)this, 1.0, 0, 0);
  (*(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 268))(this, v10);
  sub_100EC3F0(this, (int)sub_10246D70, 0.0, 0);
  return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
}
