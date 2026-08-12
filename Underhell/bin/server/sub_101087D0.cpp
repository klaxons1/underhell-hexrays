unsigned int __thiscall sub_101087D0(_DWORD *this)
{
  bool v1; // bl

  v1 = (this[62] & 0x400) != 0;
  return (v1 ? 0x210 : 0) | sub_100DA1F0(this) & 0xFFFFFFFD;
}
