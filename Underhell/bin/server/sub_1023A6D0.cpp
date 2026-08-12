int __thiscall sub_1023A6D0(_DWORD *this)
{
  int v2; // eax

  v2 = this[2];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v2);
    this[2] = 0;
  }
  sub_1042F730(this + 3);
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3204 + 24))(dword_106B3204);
}
