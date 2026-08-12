char __thiscall sub_100F2C50(_WORD *this, int a2, int a3, Concurrency::details::SchedulingRing *a4)
{
  char result; // al
  int v6; // eax

  switch ( sub_10418360(a4) )
  {
    case 2:
      result = sub_100F2BD0(this, a2, a3, (int)a4);
      break;
    case 3:
      result = sub_100EE100(this, a2, a3, (int)a4);
      break;
    case 4:
      result = sub_100F1980(this, a2, a3, (int)a4);
      break;
    case 5:
      result = 1;
      break;
    case 6:
      result = sub_100EE650(this, a2, a3, a4);
      break;
    case 7:
      result = sub_100F1F30((int)this, a2, a3, a4);
      break;
    case 8:
      result = sub_100F17D0((float *)this, a2, a3, (int)a4);
      break;
    case 10:
      result = sub_100EF160(this, a2, a3, (int)a4);
      break;
    default:
      v6 = sub_10418360(a4);
      Msg("unknown type %d in ProcessSceneEvent()\n", v6);
      result = 0;
      break;
  }
  return result;
}
