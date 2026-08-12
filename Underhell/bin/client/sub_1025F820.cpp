int __thiscall sub_1025F820(int *this)
{
  int v3; // eax
  int (__stdcall *v4)(_DWORD); // edx

  (*(void (__thiscall **)(int *))(*this + 1128))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 240))(this) )
    return sub_102531C0(this, 0);
  v3 = *this;
  if ( *((_BYTE *)this + 961) )
  {
    v4 = *(int (__stdcall **)(_DWORD))(v3 + 48);
    *((_BYTE *)this + 961) = 0;
    return v4(0);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(int *))(v3 + 296))(this) )
  {
    sub_102531C0(this, 0);
    (*(void (__thiscall **)(int *))(*this + 392))(this);
    return (*(int (__thiscall **)(int *, _DWORD))(*this + 48))(this, 0);
  }
  else
  {
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this[239] + 908))(this[239], 0);
  }
}
