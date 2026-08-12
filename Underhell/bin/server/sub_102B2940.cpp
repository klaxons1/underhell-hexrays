int __thiscall sub_102B2940(int this)
{
  float v3; // [esp+8h] [ebp-Ch]

  if ( *(_BYTE *)(this + 224) >= 2u )
    return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_10660BBC);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 2316))(this, 1024.0, this + 580);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.01;
  return sub_100EC3F0((_DWORD *)this, (int)sub_102B2940, v3, off_10660BBC);
}
