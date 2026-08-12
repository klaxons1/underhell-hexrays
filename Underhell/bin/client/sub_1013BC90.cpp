int __thiscall sub_1013BC90(_DWORD *this)
{
  _BYTE v3[12]; // [esp+Ch] [ebp-10h] BYREF
  int v4; // [esp+18h] [ebp-4h] BYREF

  this[308] = 0;
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v3);
  *((_BYTE *)this + 1196) = 1;
  sub_1009C060(off_103DCD78, &v4, (int)this);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 408))(this, -1293.0);
}
