int __thiscall sub_100CFBD0(void *this)
{
  double v2; // st7
  float v4; // [esp+4h] [ebp-Ch]

  v2 = ((double (__thiscall *)(int, void *))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 332))(dword_106B3CDC, this);
  if ( 0.0 == v2 )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1348))(this);
  v4 = v2 + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0(v4, 0);
}
