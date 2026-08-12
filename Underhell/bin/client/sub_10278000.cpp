int __thiscall sub_10278000(_DWORD *this, int a2)
{
  this[52] = a2;
  if ( a2 )
  {
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 156))(a2, this);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[52] + 264))(this[52], 0);
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
