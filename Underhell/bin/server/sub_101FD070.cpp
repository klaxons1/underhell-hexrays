void *__thiscall sub_101FD070(void *this)
{
  unsigned int v2; // eax

  *(_DWORD *)this = &CPlayerLocalData::`vftable';
  *((_DWORD *)this + 43) = &sky3dparams_t::NetworkVar_fog::`vftable';
  *((_DWORD *)this + 37) = &CPlayerLocalData::NetworkVar_m_skybox3d::`vftable';
  sub_101FCA40((_DWORD *)this + 60);
  *((_DWORD *)this + 60) = &CPlayerLocalData::NetworkVar_m_PlayerFog::`vftable';
  *((_DWORD *)this + 69) = &fogparams_t::`vftable';
  *((_DWORD *)this + 113) = -1;
  *((_DWORD *)this + 86) = &CPlayerLocalData::NetworkVar_m_audio::`vftable';
  sub_101FCBE0((char *)this + 456);
  *((_DWORD *)this + 114) = &CPlayerLocalData::NetworkVar_m_TonemapParams::`vftable';
  if ( *((_DWORD *)this + 111) )
  {
    (**((void (__thiscall ***)(int, int))this + 86))((int)this + 344, (int)this + 444);
    *((_DWORD *)this + 111) = 0;
  }
  if ( *((_DWORD *)this + 112) )
  {
    (**((void (__thiscall ***)(int, int))this + 86))((int)this + 344, (int)this + 448);
    *((_DWORD *)this + 112) = 0;
  }
  v2 = *((_DWORD *)this + 113);
  if ( v2 != -1
    && off_1061BE18[4 * (*((_DWORD *)this + 113) & 0xFFF) + 2] == v2 >> 12
    && off_1061BE18[4 * (*((_DWORD *)this + 113) & 0xFFF) + 1] )
  {
    (**((void (__thiscall ***)(int, int))this + 86))((int)this + 344, (int)this + 452);
    *((_DWORD *)this + 113) = -1;
  }
  *((_DWORD *)this + 27) = 0;
  if ( *((_BYTE *)this + 136) != 1 )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)this + 136);
    *((_BYTE *)this + 136) = 1;
  }
  return this;
}
