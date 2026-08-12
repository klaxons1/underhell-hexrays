int __thiscall sub_102577C0(_DWORD *this, int a2)
{
  int v3; // edx
  int (__thiscall *v4)(_DWORD *); // eax

  v3 = *this;
  this[80] = a2;
  (*(void (__stdcall **)(_DWORD, _DWORD))(v3 + 244))(0, 0);
  v4 = *(int (__thiscall **)(_DWORD *))(*this + 16);
  *((_BYTE *)this + 284) = 1;
  return v4(this);
}
