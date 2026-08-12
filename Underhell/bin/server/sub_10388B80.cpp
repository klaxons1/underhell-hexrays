void __thiscall sub_10388B80(void *this, int a2)
{
  const char *v3; // esi

  if ( a2 )
  {
    v3 = "METROPOLICE_KILL_MONST";
    switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) )
    {
      case 1:
        v3 = "METROPOLICE_KILL_PLAYER";
        break;
      case 2:
      case 7:
      case 8:
      case 18:
        v3 = "METROPOLICE_KILL_CITIZENS";
        break;
      case 3:
        v3 = "METROPOLICE_KILL_CHARACTER";
        break;
      case 4:
        v3 = "METROPOLICE_KILL_BUGS";
        break;
      case 5:
      case 12:
        v3 = "METROPOLICE_KILL_PARASITES";
        break;
      case 19:
        v3 = "METROPOLICE_KILL_ZOMBIES";
        break;
      default:
        break;
    }
    sub_100AC410((int)this + 5160, v3, 2, 2);
  }
}
