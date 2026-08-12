int __thiscall sub_101448A0(int this)
{
  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CFogController::`vftable';
  *(_DWORD *)(this + 800) = &CFogController::NetworkVar_m_fog::`vftable';
  *(_BYTE *)(this + 869) = 0;
  if ( *(_BYTE *)(this + 864) )
  {
    (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 864);
    *(_BYTE *)(this + 864) = 0;
  }
  if ( *(_DWORD *)(this + 844) != COERCE_INT(1.0) )
  {
    (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 844);
    *(float *)(this + 844) = 1.0;
  }
  return this;
}
