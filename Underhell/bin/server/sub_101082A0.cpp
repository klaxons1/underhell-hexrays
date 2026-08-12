int __thiscall sub_101082A0(int this)
{
  char v2; // al
  char *v3; // eax
  char v4; // al
  char *v5; // eax
  int result; // eax
  char *v7; // esi
  char Buffer[1024]; // [esp+4h] [ebp-404h] BYREF
  char *Str; // [esp+404h] [ebp-4h] BYREF

  v2 = *(_BYTE *)(this + 972);
  if ( v2 )
  {
    sub_10429A00(Buffer, 0x400u, "Buttons.snd%d", v2);
    sub_10162BE0(&Str, Buffer);
    v3 = Str;
    *(_DWORD *)(this + 936) = Str;
    if ( !v3 )
      v3 = (char *)String;
    sub_1023B8B0(v3);
  }
  v4 = *(_BYTE *)(this + 974);
  if ( v4 )
  {
    sub_10429A00(Buffer, 0x400u, "Buttons.snd%d", v4);
    sub_10162BE0(&Str, Buffer);
    v5 = Str;
    *(_DWORD *)(this + 944) = Str;
    if ( !v5 )
      v5 = (char *)String;
    sub_1023B8B0(v5);
  }
  switch ( *(_BYTE *)(this + 973) )
  {
    case 1:
      *(_DWORD *)(this + 940) = "NA";
      break;
    case 2:
      *(_DWORD *)(this + 940) = "ND";
      break;
    case 3:
      *(_DWORD *)(this + 940) = "NF";
      break;
    case 4:
      *(_DWORD *)(this + 940) = "NFIRE";
      break;
    case 5:
      *(_DWORD *)(this + 940) = "NCHEM";
      break;
    case 6:
      *(_DWORD *)(this + 940) = "NRAD";
      break;
    case 7:
      *(_DWORD *)(this + 940) = "NCON";
      break;
    case 8:
      *(_DWORD *)(this + 940) = "NH";
      break;
    case 9:
      *(_DWORD *)(this + 940) = "NG";
      break;
    default:
      *(_DWORD *)(this + 940) = 0;
      break;
  }
  result = *(unsigned __int8 *)(this + 975) - 1;
  switch ( *(_BYTE *)(this + 975) )
  {
    case 1:
      *(_DWORD *)(this + 948) = "EA";
      break;
    case 2:
      *(_DWORD *)(this + 948) = "ED";
      break;
    case 3:
      *(_DWORD *)(this + 948) = "EF";
      break;
    case 4:
      *(_DWORD *)(this + 948) = "EFIRE";
      break;
    case 5:
      *(_DWORD *)(this + 948) = "ECHEM";
      break;
    case 6:
      *(_DWORD *)(this + 948) = "ERAD";
      break;
    case 7:
      *(_DWORD *)(this + 948) = "ECON";
      break;
    case 8:
      *(_DWORD *)(this + 948) = "EH";
      break;
    default:
      *(_DWORD *)(this + 948) = 0;
      break;
  }
  if ( *(_DWORD *)(this + 992) )
  {
    v7 = *(char **)(this + 992);
    if ( !v7 )
      v7 = (char *)String;
    return sub_1023B8B0(v7);
  }
  return result;
}
