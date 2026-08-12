float *__thiscall sub_101C2EC0(float *this)
{
  int v2; // eax
  int v3; // eax

  *(_DWORD *)this = &CPhysicsPushedEntities::`vftable';
  *((_DWORD *)this + 2) = 8;
  *((_DWORD *)this + 3) = 8;
  this[1] = 0.0;
  v2 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 128);
  *((_DWORD *)this + 1) = v2;
  *((_DWORD *)this + 5) = v2;
  this[4] = 0.0;
  *((_DWORD *)this + 7) = 32;
  *((_DWORD *)this + 8) = 32;
  this[6] = 0.0;
  v3 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 3328);
  this[9] = 0.0;
  *((_DWORD *)this + 6) = v3;
  *((_DWORD *)this + 10) = v3;
  this[20] = -1.0;
  return this;
}
