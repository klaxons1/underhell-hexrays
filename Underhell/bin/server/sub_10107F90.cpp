int __thiscall sub_10107F90(int *this)
{
  int v2; // eax
  float v4; // [esp+8h] [ebp-Ch]

  sub_100EC3F0(this, (int)sub_10107F90, 0.0, 0);
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         1.5)
     + *(float *)(dword_106B31C8 + 12)
     + 0.1;
  sub_100EC4A0(this, v4, 0);
  v2 = (*(int (__thiscall **)(int *))(*this + 576))(this);
  return sub_1013B560(this, v2, 1, 1, 1, &flt_106F1CA8);
}
