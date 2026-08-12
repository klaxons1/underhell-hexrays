void __thiscall sub_1016F5B0(int *this, int a2, int a3, _DWORD *a4, char a5)
{
  switch ( a2 )
  {
    case 1:
      if ( a5 )
        sub_1016CC00(this, a3, (int)a4);
      else
        sub_1016E6A0(this, a3, a4);
      break;
    case 2:
      if ( a5 )
        sub_1016CA30(this, a3, (int)a4);
      else
        sub_1016BE90(this, a3, (int)a4);
      break;
    case 4:
      if ( a5 )
        sub_1016D240(this, a3, (int)a4);
      else
        sub_1016BEC0(this, a3, (int)a4);
      break;
    case 5:
      if ( a5 )
        sub_1016C040(this, a3, (int)a4);
      else
        sub_1016C2E0(a3, (int)a4);
      break;
    case 6:
      if ( a5 )
        sub_1016CE50(this, a3, (int)a4);
      break;
    case 7:
      if ( !a5 )
        sub_1016BEF0(this, a3, (int)a4);
      break;
    default:
      return;
  }
}
