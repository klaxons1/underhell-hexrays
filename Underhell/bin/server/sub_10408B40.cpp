unsigned int __thiscall sub_10408B40(_DWORD *this)
{
  int v2; // edx

  sub_100EC3F0(this, 0, 0.0, 0);
  sub_100E0970((int)this, v2, 4, 0);
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/weapons/w_missile.mdl");
  sub_1025F360(this, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  sub_1023C380(this, (int)"Missile.Ignite", 0.0, 0);
  return sub_10407920(this);
}
