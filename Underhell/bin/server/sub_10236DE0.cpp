int __thiscall sub_10236DE0(int this)
{
  sub_100E33C0((char *)this, 1);
  *(_DWORD *)this = &CSkyCamera::`vftable';
  *(_DWORD *)(this + 800) = &sky3dparams_t::`vftable';
  *(_DWORD *)(this + 824) = &sky3dparams_t::NetworkVar_fog::`vftable';
  *(_DWORD *)(this + 896) = dword_106C4AE8;
  dword_106C4AE8 = this;
  if ( *(_DWORD *)(this + 868) != COERCE_INT(1.0) )
  {
    (**(void (__thiscall ***)(int, int))(this + 824))(this + 824, this + 868);
    *(float *)(this + 868) = 1.0;
  }
  return this;
}
