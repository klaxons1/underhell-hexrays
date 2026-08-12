char __thiscall sub_1044C720(int *this, int a2, _BYTE *Src)
{
  UUID *v4; // eax
  char result; // al

  sub_1044C560(this);
  *this = a2;
  v4 = (UUID *)sub_104498A0(dword_1068FEE8[a2]);
  this[2] = (int)v4;
  switch ( a2 )
  {
    case 2:
      result = sub_1044EEC0(Src, v4);
      break;
    case 3:
      result = sub_1044EC20((int)Src, (int)v4);
      break;
    case 4:
      result = sub_1044EE40(Src, v4);
      break;
    case 5:
      if ( v4 )
        sub_10431290(v4);
      result = sub_1044EBD0(Src, this[2]);
      break;
    case 6:
      sub_1044AAE0(v4);
      result = sub_1044F210(Src, this[2]);
      break;
    case 7:
      result = sub_104333C0(Src, v4);
      break;
    case 8:
      if ( v4 )
        v4->Data1 = 0;
      result = sub_1044EF10(Src, this[2]);
      break;
    case 9:
      result = sub_1044EC80((int)Src, (int)v4);
      break;
    case 10:
    case 12:
      result = sub_1044EDB0((int)Src, (int)v4);
      break;
    case 11:
    case 13:
      result = sub_1044ED00((int)Src, (int)v4);
      break;
    case 14:
      result = sub_1044EB50((int)Src, v4);
      break;
    case 16:
      sub_1044B0C0(v4);
      result = sub_1044B6B0((int)Src, this[2]);
      break;
    case 17:
      sub_1044B0C0(v4);
      result = sub_1044B7F0((int)Src, this[2]);
      break;
    case 18:
      sub_1044B0C0(v4);
      result = sub_1044B930((int)Src, this[2]);
      break;
    case 19:
      sub_10241A10(v4);
      result = sub_1044C440((int)Src, (int *)this[2]);
      break;
    case 20:
      sub_1044B0C0(v4);
      result = sub_1044BA60((int)Src, (int *)this[2]);
      break;
    case 21:
      sub_1044B0C0(v4);
      result = sub_1044BB80((int)Src, this[2]);
      break;
    case 22:
      sub_1044B0C0(v4);
      result = sub_1044BCD0((int)Src, this[2]);
      break;
    case 23:
      sub_1044B0C0(v4);
      result = sub_1044BDE0((int)Src, this[2]);
      break;
    case 24:
      sub_1044B0C0(v4);
      result = sub_1044BF20((int)Src, this[2]);
      break;
    case 25:
    case 27:
      sub_1044B0C0(v4);
      result = sub_1044C030((int)Src, this[2]);
      break;
    case 26:
      sub_1044B0C0(v4);
      result = sub_1044C180((int)Src, this[2]);
      break;
    case 28:
      sub_1044B0C0(v4);
      result = sub_1044C290((int)Src, this[2]);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
