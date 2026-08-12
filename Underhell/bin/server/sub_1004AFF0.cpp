BOOL __thiscall sub_1004AFF0(_DWORD *this, int a2)
{
  int v2; // eax
  BOOL result; // eax
  _DWORD *v4; // [esp-4h] [ebp-8h]

  result = 1;
  if ( this[699] )
  {
    v4 = this + 701;
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    if ( !(unsigned __int8)sub_100B2610(v2, a2, a2, v4) )
      return 0;
  }
  return result;
}
