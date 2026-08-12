double __thiscall sub_10371B50(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  double result; // st7
  int v5; // eax

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 92);
    if ( v3 == dword_106E8514 || v3 == dword_106E8510 )
      return 60.0;
  }
  v5 = this[593];
  if ( v5 == dword_106E84E0 )
    return 0.0;
  if ( v5 == dword_106E84CC )
    return 5.0;
  if ( v5 == dword_106E84B8 )
    return 0.0;
  if ( v5 == dword_106E84BC )
    return 180.0;
  switch ( v5 )
  {
    case 6:
      result = 25.0;
      break;
    case 18:
      return 0.0;
    case 43:
    case 44:
    case 131:
    case 132:
      result = 45.0;
      break;
    default:
      result = 35.0;
      break;
  }
  return result;
}
