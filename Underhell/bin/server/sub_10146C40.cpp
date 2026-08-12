int __thiscall sub_10146C40(int this)
{
  int v2; // eax
  unsigned int v3; // esi

  *(float *)(this + 276) = 0.0;
  *(_BYTE *)(this + 308) = 0;
  *(float *)(this + 76) = 0.0;
  *(_WORD *)(this + 28) = 0;
  *(_BYTE *)(this + 30) = 0;
  *(float *)(this + 64) = 1.0;
  *(_WORD *)(this + 32) = 1;
  *(float *)(this + 68) = -1.0;
  *(_DWORD *)(this + 228) = sub_10145E80((_DWORD *)this, "vehicle_wheel_fl_height");
  *(_DWORD *)(this + 232) = sub_10145E80((_DWORD *)this, "vehicle_wheel_fr_height");
  *(_DWORD *)(this + 236) = sub_10145E80((_DWORD *)this, "vehicle_wheel_rl_height");
  *(_DWORD *)(this + 240) = sub_10145E80((_DWORD *)this, "vehicle_wheel_rr_height");
  *(_DWORD *)(this + 244) = sub_10145E80((_DWORD *)this, "vehicle_wheel_fl_spin");
  *(_DWORD *)(this + 248) = sub_10145E80((_DWORD *)this, "vehicle_wheel_fr_spin");
  *(_DWORD *)(this + 252) = sub_10145E80((_DWORD *)this, "vehicle_wheel_rl_spin");
  *(_DWORD *)(this + 256) = sub_10145E80((_DWORD *)this, "vehicle_wheel_rr_spin");
  *(_DWORD *)(this + 260) = sub_10145E80((_DWORD *)this, "vehicle_steer");
  *(_DWORD *)(this + 264) = sub_10145E80((_DWORD *)this, "vehicle_action");
  v2 = sub_10145E80((_DWORD *)this, "vehicle_guage");
  *(_DWORD *)(this + 268) = v2;
  sub_10145F10((_DWORD *)this, v2, 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 260), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 228), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 232), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 236), 0.0);
  sub_10145F10((_DWORD *)this, *(_DWORD *)(this + 240), 0.0);
  v3 = *(_DWORD *)(this + 4);
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    return sub_100BCCF0(0);
  else
    return sub_100BCCF0((_DWORD *)off_1061BE18[4 * (v3 & 0xFFF) + 1]);
}
