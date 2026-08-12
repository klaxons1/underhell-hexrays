int __thiscall sub_100D83F0(_DWORD *this, int a2)
{
  int v2; // esi
  unsigned int v4; // edx
  int v5; // eax

  v2 = this[6];
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)v2 & 0xFFFFFFC7;
  *(_DWORD *)v2 = a2 | v4;
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)(a2 | v4)) & 0x10) != 0 )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 352))(dword_106B31D0, v5);
  }
  return *(_DWORD *)v2;
}
