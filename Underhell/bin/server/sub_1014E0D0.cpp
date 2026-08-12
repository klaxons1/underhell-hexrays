int __thiscall sub_1014E0D0(int this, int a2)
{
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10422220(this + 704, v4);
  off_10689714();
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  return ((int (__stdcall *)(int, _BYTE *, _DWORD, _DWORD))(*off_1061B7A0)[4])(
           this + 580,
           v4,
           *(float *)(this + 800),
           *(float *)(this + 108));
}
