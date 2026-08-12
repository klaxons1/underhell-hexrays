int __thiscall sub_1015BE50(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  _DWORD *v5; // eax

  result = sub_1003CD40(this, a2);
  if ( !a2 )
  {
    v4 = this[354];
    v5 = sub_100F0920();
    return (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v4 + 4))(this + 354, v5, 0);
  }
  return result;
}
