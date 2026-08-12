int __thiscall sub_102700C0(_DWORD *this, int a2)
{
  int v3; // edx
  int v4; // edx
  int v6; // [esp+0h] [ebp-4h]

  v3 = *this;
  this[114] = a2;
  (*(void (__stdcall **)(int, int))(v3 + 124))(1, v6);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 200))(this, 1);
  (*(void (__thiscall **)(_DWORD *))(*this + 212))(this);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[108] + 128))(this[108]) )
    v4 = *(_DWORD *)this[108];
  else
    v4 = *this;
  (*(void (__cdecl **)(_DWORD))(v4 + 48))(0);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
