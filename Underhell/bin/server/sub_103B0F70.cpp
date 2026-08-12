char __thiscall sub_103B0F70(int *this)
{
  int v2; // edx
  int v3; // ecx
  void (__thiscall *v4)(int *, _DWORD, _DWORD *); // edx
  char result; // al
  float v6; // [esp+8h] [ebp-18h]
  _DWORD v7[3]; // [esp+14h] [ebp-Ch] BYREF

  v6 = *(float *)(dword_106B31C8 + 12) + 0.05;
  sub_100EC4A0(this, v6, 0);
  (*(void (__thiscall **)(int *))(*this + 728))(this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v2 = this[145];
  v3 = this[147];
  v7[1] = this[146];
  v7[0] = v2;
  v4 = *(void (__thiscall **)(int *, _DWORD, _DWORD *))(*this + 2040);
  v7[2] = v3;
  v4(this, 0, v7);
  result = sub_103B0F10(this);
  if ( !result )
  {
    sub_10112C00((int)(this + 80), 2);
    return sub_100EC3F0(this, (int)sub_10039730, 0.0, 0);
  }
  return result;
}
