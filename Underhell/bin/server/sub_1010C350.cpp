char __thiscall sub_1010C350(char *this, float *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 4) - 1;
  switch ( *((_DWORD *)this + 4) )
  {
    case 1:
      *a2 = *(float *)this;
      break;
    case 2:
    case 9:
      LOBYTE(v2) = (_BYTE)a2;
      *a2 = *(float *)this;
      break;
    case 3:
    case 0xF:
      LOBYTE(v2) = (_BYTE)a2;
      *a2 = *(float *)this;
      a2[1] = *((float *)this + 1);
      a2[2] = *((float *)this + 2);
      break;
    case 5:
      v2 = *(_DWORD *)this;
      *a2 = *(float *)this;
      break;
    case 6:
      LOBYTE(v2) = *this != 0;
      *(_BYTE *)a2 = v2;
      break;
    case 7:
      *(_WORD *)a2 = *(_WORD *)this;
      break;
    case 8:
      LOBYTE(v2) = (_BYTE)a2;
      *(_BYTE *)a2 = *this;
      break;
    case 0xC:
      v2 = sub_1026A890(this + 12);
      *(_DWORD *)a2 = v2;
      break;
    case 0xD:
      *a2 = *((float *)this + 3);
      break;
    default:
      return v2;
  }
  return v2;
}
