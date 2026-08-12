BOOL __thiscall sub_1004AE70(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  BOOL result; // eax

  result = 0;
  if ( this[699] )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    if ( (unsigned __int8)sub_100B26F0(v3, a2, a3) )
      return 1;
  }
  return result;
}
