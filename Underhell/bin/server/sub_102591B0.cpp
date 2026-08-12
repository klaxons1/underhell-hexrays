void __thiscall sub_102591B0(int this)
{
  *(_DWORD *)(this + 1116) = -1;
  *(float *)(this + 1128) = -1.0;
  *(_BYTE *)(this + 1140) = 0;
  sub_102586B0(this);
  sub_102575A0(this);
  if ( 0.0 == *(float *)(this + 808) )
    *(float *)(this + 808) = 0.2;
  *(_DWORD *)(this + 196) = sub_102560C0;
  *(float *)(this + 808) = -1.0;
}
