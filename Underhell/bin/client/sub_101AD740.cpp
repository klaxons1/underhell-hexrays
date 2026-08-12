int __thiscall sub_101AD740(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax

  v2 = sub_10033760();
  v3 = sub_100422D0();
  v4 = v3;
  if ( v3
    && (v5 = *(_DWORD *)(v3 + 4128), v5 != -1)
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 4128) & 0xFFF) + 2) == v5 >> 12
    && (v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 4128) & 0xFFF) + 1)) != 0 )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6);
  }
  else
  {
    v7 = 0;
  }
  if ( v2 && v4 && !v7 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 268))(this, 1);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 264))(this, 1);
    return sub_101AD5F0(this);
  }
  else
  {
    this[107] = -1;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 268))(this, 0);
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
  }
}
