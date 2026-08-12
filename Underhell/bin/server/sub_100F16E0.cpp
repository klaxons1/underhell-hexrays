char __thiscall sub_100F16E0(_DWORD *this, float *a2, int a3, int a4, void *a5, int a6)
{
  char result; // al

  switch ( sub_10418360(a4) )
  {
    case 2:
    case 5:
      goto LABEL_7;
    case 3:
      sub_10019680((_DWORD *)a2 + 9, a6);
LABEL_7:
      result = 1;
      break;
    case 4:
      result = sub_100F1660(this, (int)a2, a3, a4, (int)a5, a6);
      break;
    case 6:
      result = sub_100ED0B0(this, a2, a3, a4, a5, a6);
      break;
    case 7:
      result = sub_100ED040(this, a2, a3, a4, a5, a6);
      break;
    case 8:
      result = sub_100ECAF0(this, (int)a2, a3, a4, (int)a5, a6);
      break;
    case 10:
      sub_100ECE90(a2, (float *)this);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
