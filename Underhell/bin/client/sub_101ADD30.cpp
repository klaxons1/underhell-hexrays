int __thiscall sub_101ADD30(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax
  int v4; // ecx

  v2 = sub_100422D0();
  if ( !v2
    || (v3 = *(_DWORD *)(v2 + 4128), v3 != -1)
    && *((_DWORD *)off_103DCD74 + 4 * (v3 & 0xFFF) + 2) == v3 >> 12
    && (v4 = *((_DWORD *)off_103DCD74 + 4 * (v3 & 0xFFF) + 1)) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 332))(v4)
    || (int)this[116] <= 0 )
  {
    this[114] = -1;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 268))(this, 0);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
    return sub_101ADBD0(this);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 268))(this, 1);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 264))(this, 1);
    return sub_101ADBD0(this);
  }
}
