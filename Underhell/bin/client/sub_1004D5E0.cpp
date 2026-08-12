char __thiscall sub_1004D5E0(int this, int a2)
{
  int *v3; // eax

  sub_1003CD40((_DWORD *)this, a2);
  byte_1043A878 = *(_BYTE *)(this + 1184);
  byte_1043A879 = *(_BYTE *)(this + 1185);
  LOBYTE(v3) = *(_BYTE *)(this + 1186);
  byte_1043A87A = (char)v3;
  flt_1043A87C = *(float *)(this + 1188);
  flt_1043A880 = *(float *)(this + 1192);
  flt_1043A884 = *(float *)(this + 1196);
  flt_1043A888 = *(float *)(this + 1200);
  if ( this == 8 )
  {
    dword_103DAB88 = -1;
  }
  else
  {
    v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 8) + 8))(this - 8);
    dword_103DAB88 = *v3;
  }
  return (char)v3;
}
