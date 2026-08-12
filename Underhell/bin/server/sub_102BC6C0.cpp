unsigned int __thiscall sub_102BC6C0(_DWORD *this)
{
  int v2; // edi
  float v4; // [esp+0h] [ebp-10h]

  (*(void (__thiscall **)(_DWORD *))(*this + 728))(this);
  v2 = this[227];
  if ( v2 == sub_100BDF40((int)this, "open") && *((_BYTE *)this + 896) )
    return sub_102BC610((int)this);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  return sub_100EC3F0(this, (int)sub_102BC6C0, v4, off_106614D8);
}
