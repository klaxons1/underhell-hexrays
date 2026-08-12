BOOL __thiscall sub_1004AE20(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  BOOL result; // eax
  _DWORD *v5; // [esp-4h] [ebp-8h]

  result = 1;
  if ( this[699] )
  {
    v5 = this + 701;
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    if ( !(unsigned __int8)sub_100B2610(v3, a2, a3, v5) )
      return 0;
  }
  return result;
}
