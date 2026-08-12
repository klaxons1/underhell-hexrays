char __thiscall sub_102AD1D0(int *this, int a2, _BYTE *Src)
{
  UUID *v4; // eax
  char result; // al

  sub_102AD010(this);
  *this = a2;
  v4 = (UUID *)sub_102AAF30(dword_103FEFB8[a2]);
  this[2] = (int)v4;
  switch ( a2 )
  {
    case 2:
      result = sub_102AFF50(Src, v4);
      break;
    case 3:
      result = sub_102AFCB0((int)Src, (int)v4);
      break;
    case 4:
      result = sub_102AFED0(Src, v4);
      break;
    case 5:
      if ( v4 )
        sub_1022D3E0(v4);
      result = sub_102AFC60(Src, this[2]);
      break;
    case 6:
      sub_102AB850(v4);
      result = sub_102B02A0(Src, this[2]);
      break;
    case 7:
      result = sub_102331A0(Src, v4);
      break;
    case 8:
      if ( v4 )
        v4->Data1 = 0;
      result = sub_102AFFA0(Src, this[2]);
      break;
    case 9:
      result = sub_102AFD10((int)Src, (int)v4);
      break;
    case 10:
    case 12:
      result = sub_102AFE40((int)Src, (int)v4);
      break;
    case 11:
    case 13:
      result = sub_102AFD90((int)Src, (int)v4);
      break;
    case 14:
      result = sub_102AFBE0((int)Src, v4);
      break;
    case 16:
      sub_102ABC30(v4);
      result = sub_102AC160((int)Src, this[2]);
      break;
    case 17:
      sub_102ABC30(v4);
      result = sub_102AC2A0((int)Src, this[2]);
      break;
    case 18:
      sub_102ABC30(v4);
      result = sub_102AC3E0((int)Src, this[2]);
      break;
    case 19:
      sub_102ABC30(v4);
      result = sub_102ACEF0((int)Src, (int *)this[2]);
      break;
    case 20:
      sub_102ABC30(v4);
      result = sub_102AC510((int)Src, (int *)this[2]);
      break;
    case 21:
      sub_102ABC30(v4);
      result = sub_102AC630((int)Src, this[2]);
      break;
    case 22:
      sub_102ABC30(v4);
      result = sub_102AC780((int)Src, this[2]);
      break;
    case 23:
      sub_102ABC30(v4);
      result = sub_102AC890((int)Src, this[2]);
      break;
    case 24:
      sub_102ABC30(v4);
      result = sub_102AC9D0((int)Src, this[2]);
      break;
    case 25:
    case 27:
      sub_102ABC30(v4);
      result = sub_102ACBF0((int)Src, this[2]);
      break;
    case 26:
      sub_102ABC30(v4);
      result = sub_102ACAE0((int)Src, this[2]);
      break;
    case 28:
      sub_102ABC30(v4);
      result = sub_102ACD40((int)Src, this[2]);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
