int __thiscall sub_102BCFC0(int this)
{
  double v2; // st7
  unsigned int v3; // eax
  int v4; // ecx
  float v6; // [esp+4h] [ebp-40h]
  int v7[3]; // [esp+14h] [ebp-30h] BYREF
  int v8[3]; // [esp+20h] [ebp-24h] BYREF
  float v9[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v10[3]; // [esp+38h] [ebp-Ch] BYREF

  sub_102BEF10(this + 1124);
  sub_102BE0F0(*(float *)(dword_106B31C8 + 12), (int)v8, (int)v7);
  sub_1025F370((void *)this, (float *)v8, 0);
  sub_100E0EA0(this, (float *)v7);
  *(_DWORD *)(this + 252) &= ~0x20000u;
  sub_100D8500((_DWORD *)this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(
    this,
    "models/props_combine/headcrabcannister01a.mdl");
  sub_10112C00(this + 320, 2);
  v2 = *(float *)(this + 352);
  v9[0] = -v2;
  v9[1] = v9[0];
  v9[2] = v9[0];
  v10[0] = v2;
  v10[1] = v2;
  v10[2] = v2;
  sub_100D69D0((void *)this, (int)v9, (int)v10);
  v3 = *(_DWORD *)(this + 1244);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1244) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 1244) & 0xFFF) + 1];
  sub_10287620(v4, &flt_106F1CA8, 1.0);
  sub_100EC3F0((_DWORD *)this, (int)sub_102BCE00, 0.0, 0);
  v6 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  return sub_100EC4A0((int *)this, v6, 0);
}
