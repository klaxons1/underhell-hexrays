int __thiscall sub_1024F0F0(_DWORD **this, int a2, int a3, int a4)
{
  int (__thiscall ***v5)(_DWORD); // eax
  int result; // eax

  sub_1024C300(this, a2, a3, a4);
  v5 = (int (__thiscall ***)(_DWORD))((int (__thiscall *)(_DWORD **))(*this)[211])(this);
  result = (**v5)(v5);
  if ( result )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)result + 48))(result, 0);
  return result;
}
