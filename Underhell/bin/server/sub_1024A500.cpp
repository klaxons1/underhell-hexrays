int __thiscall sub_1024A500(float *this)
{
  int result; // eax
  int v3; // eax

  sub_1024A470(this);
  if ( sub_100D8840(this) <= 0 || (result = sub_100D8840(this), result > 32) )
  {
    v3 = sub_100D8840(this);
    Warning("info_vehicle_groundspawn with invalid team number: %d\n", v3);
    return sub_1025FAC0(this);
  }
  return result;
}
