int __thiscall sub_101AE680(int this)
{
  int v2; // esi
  const char *v4; // eax

  v2 = this + 844;
  *(float *)(this + 844) = *(float *)(this + 844) - *(float *)(this + 716);
  *(float *)(this + 848) = *(float *)(this + 848) - *(float *)(this + 720);
  *(float *)(this + 852) = *(float *)(this + 852) - *(float *)(this + 724);
  if ( off_10689714() > 1.0 )
    return sub_1025F3D0(v2, 0.0020000001);
  v4 = sub_100D6390((_DWORD *)this);
  Warning("phys_motor %s does not have a valid axis helper, and self-destructed!\n", v4);
  *(float *)(this + 836) = 0.0;
  sub_100EC4A0((int *)this, -1.0, 0);
  return sub_1025FAC0(this);
}
