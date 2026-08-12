int __thiscall sub_1001F610(_DWORD *this, char a2, char a3)
{
  char v3; // bl
  int v4; // esi

  switch ( this[436] )
  {
    case 1:
      v3 = a3;
      v4 = a3 != 0 ? 150 : 117;
      break;
    case 2:
      v3 = a3;
      v4 = a3 != 0 ? 151 : 118;
      break;
    case 3:
      v3 = a3;
      v4 = a3 != 0 ? 152 : 119;
      break;
    case 4:
      v3 = a3;
      v4 = a3 != 0 ? 153 : 120;
      break;
    case 5:
      v3 = a3;
      v4 = a3 != 0 ? 154 : 121;
      break;
    case 6:
      v3 = a3;
      v4 = a3 != 0 ? 155 : 122;
      break;
    case 7:
      v3 = a3;
      v4 = a3 != 0 ? 156 : 123;
      break;
    default:
      v3 = a3;
      if ( a2 )
        v4 = a3 != 0 ? 145 : 63;
      else
        v4 = a3 != 0 ? 144 : 62;
      break;
  }
  if ( sub_100BDCE0(v4) == -1 && (!a2 || (v4 = v3 != 0 ? 145 : 63, sub_100BDCE0(v4) == -1)) )
    return v3 != 0 ? 144 : 62;
  else
    return v4;
}
