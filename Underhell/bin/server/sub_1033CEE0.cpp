int __thiscall sub_1033CEE0(_BYTE *this, int a2)
{
  const char *v3; // esi

  v3 = "COMBINEPRISONGUARD_MONST";
  if ( !this[4976] )
    v3 = "COMBINE_MONST";
  switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) )
  {
    case 1:
      if ( this[4976] )
        v3 = "COMBINEPRISONGUARD_ALERT";
      else
        v3 = "COMBINE_ALERT";
      break;
    case 2:
    case 7:
    case 8:
    case 18:
      if ( this[4976] )
        v3 = "COMBINEPRISONGUARD_MONST_CITIZENS";
      else
        v3 = "COMBINE_MONST_CITIZENS";
      break;
    case 3:
      if ( this[4976] )
        v3 = "COMBINEPRISONGUARD_MONST_CHARACTER";
      else
        v3 = "COMBINE_MONST_CHARACTER";
      break;
    case 4:
      if ( this[4976] )
        v3 = "COMBINEPRISONGUARD_MONST_BUGS";
      else
        v3 = "COMBINE_MONST_BUGS";
      break;
    case 5:
    case 12:
      v3 = "COMBINEPRISONGUARD_MONST_PARASITES";
      if ( !this[4976] )
        v3 = "COMBINE_MONST_PARASITES";
      break;
    case 19:
      if ( this[4976] )
        v3 = "COMBINEPRISONGUARD_MONST_ZOMBIES";
      else
        v3 = "COMBINE_MONST_ZOMBIES";
      break;
    default:
      return sub_100AC410((int)(this + 4244), v3, 2, 2);
  }
  return sub_100AC410((int)(this + 4244), v3, 2, 2);
}
