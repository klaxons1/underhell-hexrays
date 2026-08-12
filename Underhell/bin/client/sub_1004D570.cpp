int __thiscall sub_1004D570(int this)
{
  int v1; // eax

  *(_DWORD *)this = &C_EnvTonemapController::`vftable';
  *(_DWORD *)(this + 4) = &C_EnvTonemapController::`vftable';
  *(_DWORD *)(this + 8) = &C_EnvTonemapController::`vftable';
  *(_DWORD *)(this + 12) = &C_EnvTonemapController::`vftable';
  if ( dword_103DAB88 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (dword_103DAB88 & 0xFFF) + 2) != (unsigned int)dword_103DAB88 >> 12 )
  {
    v1 = 0;
  }
  else
  {
    v1 = *((_DWORD *)off_103DCD74 + 4 * (dword_103DAB88 & 0xFFF) + 1);
  }
  if ( v1 == this )
  {
    byte_1043A878 = 0;
    byte_1043A879 = 0;
    byte_1043A87A = 0;
  }
  return sub_1003D350(this);
}
