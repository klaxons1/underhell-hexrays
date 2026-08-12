_DWORD *__thiscall sub_10249DD0(int this, _DWORD *a2)
{
  const char *v3; // eax
  int v4; // eax
  const char *v5; // eax
  char String1[5]; // [esp+8h] [ebp-100h] BYREF
  char v8[251]; // [esp+Dh] [ebp-FBh] BYREF

  sub_1023B220((_DWORD *)this, a2);
  (*(void (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)(this + 216) + 120))(*(_DWORD *)(this + 216), String1, 255);
  if ( !_strnicmp(String1, "#var_", 5u) )
    sub_1022ABA0(a2, "labelText", v8);
  else
    sub_1022ABA0(a2, "labelText", String1);
  switch ( *(_DWORD *)(this + 212) )
  {
    case 0:
      v3 = "north-west";
      break;
    case 1:
      v3 = "north";
      break;
    case 2:
      v3 = "north-east";
      break;
    case 4:
      v3 = "center";
      break;
    case 5:
      v3 = "east";
      break;
    case 6:
      v3 = "south-west";
      break;
    case 7:
      v3 = "south";
      break;
    case 8:
      v3 = "south-east";
      break;
    default:
      v3 = "west";
      break;
  }
  sub_1022ABA0(a2, "textAlignment", v3);
  if ( sub_10237C80((_DWORD *)(this + 268)) )
  {
    v4 = sub_10237C80((_DWORD *)(this + 268));
    v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 72))(v4);
    sub_1022ABA0(a2, "associate", v5);
  }
  sub_1022ACA0(a2, "dulltext", *(_DWORD *)(this + 264) == 1);
  sub_1022ACA0(a2, "brighttext", *(_DWORD *)(this + 264) == 2);
  if ( *(_DWORD *)(this + 276) )
    sub_1022ABA0(a2, "font", *(const char **)(this + 276));
  sub_1022ACA0(a2, "wrap", *(_BYTE *)(this + 282) != 0);
  sub_1022ACA0(a2, "centerwrap", *(_BYTE *)(this + 283) != 0);
  sub_1022ACA0(a2, "textinsetx", *(_DWORD *)(this + 240));
  return sub_1022ACA0(a2, "textinsety", *(_DWORD *)(this + 244));
}
