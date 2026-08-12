int __thiscall sub_10172AA0(_DWORD *this)
{
  float v3[3]; // [esp+4h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/items/pmc_cap.mdl");
  sub_10177C60(this);
  sub_1011EDF0(this);
  v3[0] = 0.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  return sub_100E10C0((int)this, v3);
}
