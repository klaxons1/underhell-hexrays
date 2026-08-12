char *__thiscall sub_10333F20(_DWORD *this, int a2)
{
  int v3; // esi

  switch ( a2 )
  {
    case 1:
      v3 = 0;
      break;
    case 2:
      v3 = 1;
      break;
    case 3:
      v3 = 2;
      break;
    default:
      return 0;
  }
  if ( this[1443] == 1 )
    return (&off_1066E8C8[v3])[RandomInt(0, 0)];
  if ( this[1443] == 2 )
    return (&off_1066E8D4[v3])[RandomInt(0, 0)];
  if ( this[1443] != 3 )
    return 0;
  return (&off_1066E8E0[v3])[RandomInt(0, 0)];
}
