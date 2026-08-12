int __thiscall sub_101E7810(int *this, _DWORD *a2)
{
  int v3; // eax
  float v5; // [esp+4h] [ebp-Ch]

  v3 = a2[4];
  if ( (v3 & 0x400) == 0 || (v3 & 1) == 0 || *a2 != 33 )
    return sub_100C3960(this, (int)a2);
  (*(void (__thiscall **)(int *))(*this + 1548))(this);
  (*(void (__thiscall **)(int *, float *))(*this + 748))(this, &flt_106F1CA8);
  sub_100EC3F0(this, (int)sub_101E3BD0, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v5, 0);
}
