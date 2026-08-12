int __thiscall sub_10219790(int this)
{
  int result; // eax
  float v3; // [esp+8h] [ebp-Ch]
  float v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]

  nullsub_4();
  sub_100EC3F0((_DWORD *)this, (int)sub_102195C0, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  result = sub_100EC4A0((int *)this, v3, 0);
  if ( (*(_BYTE *)(this + 250) & 1) != 0 )
  {
    v5 = off_10645E38;
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.1,
           0.30000001)
       + *(float *)(dword_106B31C8 + 12);
    return sub_100EC3F0((_DWORD *)this, (int)sub_10219210, v4, v5);
  }
  return result;
}
