bool __thiscall sub_10111F30(_DWORD *this)
{
  int v2; // esi
  bool result; // al

  switch ( *((_BYTE *)this + 40) )
  {
    case 0:
      result = 0;
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 6 )
      {
        v2 = this[1];
        if ( *(_BYTE *)(v2 + 306) == 6 )
        {
          if ( *(_DWORD *)(v2 + 424) )
            result = 1;
        }
      }
      break;
    case 2:
    case 3:
    case 5:
    case 6:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
