int __thiscall sub_10033590(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax

  if ( this[699] )
  {
    if ( (unsigned int)(this[581] - 1) <= 1 )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
      v2 = sub_1007DB30(26);
      if ( v2 != -1 )
      {
        v3 = v2 - 1000000000;
        if ( v3 != -1 && ((1 << (v3 & 0x1F)) & this[(v3 >> 5) + 548]) != 0 )
        {
          v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
          sub_100B1790(v4);
        }
      }
    }
  }
  switch ( this[581] )
  {
    case 1:
      result = sub_10026960(this);
      if ( result == -1 )
        goto LABEL_9;
      break;
    case 2:
      result = sub_10026C70(this);
      if ( result == -1 )
        goto LABEL_9;
      break;
    case 3:
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
        goto LABEL_9;
      DevWarning(2, "***Combat state with no enemy!\n");
      result = 2;
      break;
    case 4:
      result = sub_10033480(this);
      if ( result == -1 )
        goto LABEL_9;
      break;
    case 7:
      result = 7;
      break;
    default:
LABEL_9:
      result = this[584];
      break;
  }
  return result;
}
