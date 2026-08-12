int __thiscall sub_1039BDE0(_DWORD *this, int a2)
{
  int v4; // edi
  int v5; // eax

  switch ( a2 )
  {
    case 44:
      return 100;
    case 43:
      return 101;
    case 12:
      v4 = *this;
      v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v4 + 1768))(this, v5) )
        return 27;
      break;
    case 34:
      return 17;
  }
  return sub_1032F1C0(this, a2);
}
