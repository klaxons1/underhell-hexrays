void __thiscall sub_1016F6B0(int *this, int a2, int a3, int a4, int a5, char a6)
{
  switch ( a4 )
  {
    case 1:
      if ( a6 )
        sub_1016CC00(this, a5, 1);
      else
        sub_1016E6A0(this, a5, (_DWORD *)1);
      break;
    case 2:
      if ( a6 )
        sub_1016CA30(this, a5, 1);
      else
        sub_1016BE90(this, a5, 1);
      break;
    case 3:
    case 4:
      if ( a6 )
        sub_1016D240(this, a5, 1);
      else
        sub_1016BEC0(this, a5, 1);
      break;
    case 5:
      if ( a6 )
        sub_1016C040(this, a5, 1);
      else
        sub_1016C2E0(a5, 1);
      break;
    default:
      return;
  }
}
