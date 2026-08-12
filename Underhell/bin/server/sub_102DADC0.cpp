int __thiscall sub_102DADC0(_DWORD *this, int a2)
{
  void (__thiscall *v3)(_DWORD *); // edx
  int v4; // edi

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 1264))(this) )
  {
    v3 = *(void (__thiscall **)(_DWORD *))(*this + 1304);
    v4 = this[1038];
    this[1038] = 100;
    v3(this);
    this[1038] = v4;
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1260))(this, 0);
}
