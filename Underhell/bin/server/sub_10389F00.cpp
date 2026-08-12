int __thiscall sub_10389F00(int this, int a2)
{
  int result; // eax

  result = a2 - 1000;
  switch ( a2 )
  {
    case 1000:
      result = sub_100AC4A0(this + 5160, "METROPOLICE_AS_HIT_RALLY", 0, 2);
      break;
    case 1001:
      result = sub_100AC4A0(this + 5160, "METROPOLICE_AS_HIT_ASSAULT", 0, 2);
      break;
    case 1002:
      result = sub_100AC410(this + 5160, "METROPOLICE_AS_ADV_RALLY", 1, 3);
      if ( result >= 0 )
        goto LABEL_5;
      break;
    case 1003:
      result = sub_100AC410(this + 5160, "METROPOLICE_AS_ADV_ASSAULT", 1, 3);
      if ( result >= 0 )
LABEL_5:
        result = sub_100B1890(*(_DWORD **)(this + 2796), dword_106E9D50, 0, 0);
      break;
    case 1004:
      result = sub_10388C20((_DWORD *)this);
      break;
    case 1005:
      result = sub_100AC410(this + 5160, "METROPOLICE_GO_ALERT", 0, 2);
      break;
    default:
      return result;
  }
  return result;
}
