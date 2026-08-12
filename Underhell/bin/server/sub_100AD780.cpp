double __thiscall sub_100AD780(_DWORD *this, char *a2)
{
  char *v2; // esi
  int v4; // eax
  const char *v5; // eax
  double result; // st7
  char Destination[256]; // [esp+8h] [ebp-100h] BYREF

  v2 = a2;
  sub_10065130(a2, Destination, 0x100u);
  switch ( *v2 )
  {
    case 1:
      v4 = sub_100AD370(this);
      v5 = *(const char **)(*(int (__thiscall **)(int, char **))(*(_DWORD *)v4 + 28))(v4, &a2);
      if ( !v5 )
        v5 = String;
      result = sub_1023B010(Destination, v5);
      break;
    case 2:
      result = 999.0;
      break;
    case 3:
      result = sub_10223E40(Destination);
      break;
    case 5:
      result = 1.0;
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}
