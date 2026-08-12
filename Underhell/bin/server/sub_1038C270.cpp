void __thiscall sub_1038C270(int *this, int a2)
{
  int v4; // eax
  int v5; // edi
  const char *v6; // edi
  int v7; // [esp+1Ch] [ebp+8h]

  if ( a2 && this[699] )
  {
    if ( *((_BYTE *)this + 4892) && sub_102A8560((int)(this + 1219))
      || (v4 = sub_101679A0((int)"gordon_precriminal"), sub_10167A00(v4) != 1) )
    {
      if ( (this[62] & 0x200000) == 0 )
      {
        if ( sub_100B1BD0((void *)this[699], (int)this)
          || sub_100B1470(this[699])
          && (v5 = sub_100B1470(this[699]),
              v7 = (*(int (__thiscall **)(int *))(*this + 368))(this),
              (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5) != v7) )
        {
          v6 = "METROPOLICE_MONST";
          switch ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) )
          {
            case 1:
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) )
                v6 = "METROPOLICE_MONST_PLAYER_VEHICLE";
              else
                v6 = "METROPOLICE_MONST_PLAYER";
              break;
            case 2:
            case 7:
            case 8:
            case 18:
              v6 = "METROPOLICE_MONST_CITIZENS";
              break;
            case 3:
              v6 = "METROPOLICE_MONST_CHARACTER";
              break;
            case 4:
              v6 = "METROPOLICE_MONST_BUGS";
              break;
            case 5:
            case 12:
              v6 = "METROPOLICE_MONST_PARASITES";
              break;
            case 19:
              v6 = "METROPOLICE_MONST_ZOMBIES";
              break;
            default:
              break;
          }
          sub_100AC410((int)(this + 1290), v6, 2, 2);
        }
        else if ( sub_100B1470(this[699]) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*this + 1604))(this, 1) )
            (*(void (__thiscall **)(int *, int, _DWORD))(*this + 1608))(this, 1, 0.0);
        }
      }
    }
  }
}
