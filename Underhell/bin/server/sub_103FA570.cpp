int __thiscall sub_103FA570(_DWORD *this)
{
  int result; // eax
  void *v3; // esi

  (*(void (__thiscall **)(_DWORD *, int))(*this + 944))(this, 181);
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 1132))(this, 0, 0.0);
  result = sub_100D1940(this);
  v3 = (void *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
      return sub_101E3110(v3, 1u, 0, 4u);
  }
  return result;
}
