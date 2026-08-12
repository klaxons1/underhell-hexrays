int __thiscall sub_10209CA0(_DWORD *this)
{
  int v1; // ebx

  v1 = this[62] >> 15;
  return ((v1 & 1) != 0 ? 0 : 0x210) | sub_100DA1F0(this) | ((this[62] & 0x8000) != 0 ? 0 : 528);
}
