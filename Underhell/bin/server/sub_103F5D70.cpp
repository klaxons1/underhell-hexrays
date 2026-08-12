int __thiscall sub_103F5D70(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edx

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24));
  if ( !result )
  {
    sub_100E0970((int)this, v4, 0, 0);
    sub_100EC3F0(this, 0, 0.0, 0);
    return (*(int (__thiscall **)(_DWORD *))(*this + 908))(this);
  }
  return result;
}
