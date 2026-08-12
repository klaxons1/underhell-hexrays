int __thiscall sub_103F5F40(unsigned __int16 *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  float v6; // [esp+4h] [ebp-10h]

  v2 = *(_DWORD *)this;
  v3 = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1208))(this);
  (*(void (__thiscall **)(unsigned __int16 *, int))(v2 + 104))(this, v3);
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 592))(this);
  sub_100E0970((int)this, v4, 5, 0);
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 8);
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 908))(this);
  sub_100EC3F0(this, (int)sub_100CFD10, 0.0, 0);
  v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v6, 0);
}
