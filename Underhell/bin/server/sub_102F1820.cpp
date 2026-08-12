void __thiscall sub_102F1820(float *this, int a2, BOOL a3)
{
  _DWORD **v4; // edi
  float v5; // [esp+4h] [ebp-4h]

  v5 = 1.0;
  v4 = (_DWORD **)(a3 + 4 * (a2 == 0) + 104);
  if ( (char *)(*v4)[23] == "prop_vehicle_airboat"
    || sub_100D6240(*v4, "prop_vehicle_airboat")
    || (char *)(*v4)[23] == "prop_vehicle_jeep"
    || sub_100D6240(*v4, "prop_vehicle_jeep") )
  {
    v5 = 100.0;
  }
  this[300] = v5 * this[300];
  sub_10213530((int)this, a2, a3);
  this[300] = this[300] / v5;
}
