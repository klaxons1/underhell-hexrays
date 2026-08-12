int (__thiscall ***__thiscall sub_103EA3C0(void *this))(_DWORD, _DWORD)
{
  int v2; // eax
  int (__thiscall ***result)(_DWORD, _DWORD); // eax
  int (__thiscall ***v4)(_DWORD, _DWORD); // esi

  sub_102075B0(this);
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 340))(this);
  result = (int (__thiscall ***)(_DWORD, _DWORD))__RTDynamicCast(
                                                   v2,
                                                   0,
                                                   (struct _s_RTTICompleteObjectLocator *)&IServerVehicle `RTTI Type Descriptor',
                                                   (int)&CBaseServerVehicle `RTTI Type Descriptor',
                                                   0);
  v4 = result;
  if ( result )
  {
    result = (int (__thiscall ***)(_DWORD, _DWORD))(**result)(result, 0);
    if ( result )
      return (int (__thiscall ***)(_DWORD, _DWORD))((int (__thiscall *)(int (__thiscall ***)(_DWORD, _DWORD)))(*v4)[71])(v4);
  }
  return result;
}
