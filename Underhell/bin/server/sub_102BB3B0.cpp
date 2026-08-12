int __thiscall sub_102BB3B0(float *this)
{
  double v2; // st7
  float v4[3]; // [esp+4h] [ebp-18h] BYREF
  float v5[3]; // [esp+10h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(
    this,
    "models/props_combine/headcrabcannister01a.mdl");
  sub_10112C00((int)(this + 80), 2);
  v2 = this[88];
  v4[0] = -v2;
  v4[1] = v4[0];
  v4[2] = v4[0];
  v5[0] = v2;
  v5[1] = v2;
  v5[2] = v2;
  return sub_100D69D0(this, (int)v4, (int)v5);
}
