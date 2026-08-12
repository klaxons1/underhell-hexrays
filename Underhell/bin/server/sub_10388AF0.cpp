int __thiscall sub_10388AF0(void *this, int a2)
{
  int result; // eax

  result = a2 - 1000;
  switch ( a2 )
  {
    case 1000:
      result = sub_100AC410((int)this + 5160, "METROPOLICE_FT_APPROACH", 1, 2);
      break;
    case 1001:
      result = sub_100AC410((int)this + 5160, "METROPOLICE_FT_MOUNT", 2, 2);
      break;
    case 1002:
      result = sub_100AC410((int)this + 5160, "METROPOLICE_FT_SCAN", 0, 2);
      break;
    case 1003:
      result = sub_100AC410((int)this + 5160, "METROPOLICE_FT_DISMOUNT", 2, 2);
      break;
    default:
      return result;
  }
  return result;
}
