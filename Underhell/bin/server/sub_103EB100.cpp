int (__thiscall ***__thiscall sub_103EB100(_DWORD *this, int a2))(_DWORD, _DWORD)
{
  int v3; // eax
  int (__thiscall ***result)(_DWORD, _DWORD); // eax
  unsigned int v5; // eax
  int *v6; // eax

  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 340))(this);
  result = (int (__thiscall ***)(_DWORD, _DWORD))__RTDynamicCast(
                                                   v3,
                                                   0,
                                                   (struct _s_RTTICompleteObjectLocator *)&IServerVehicle `RTTI Type Descriptor',
                                                   (int)&CBaseServerVehicle `RTTI Type Descriptor',
                                                   0);
  if ( result )
  {
    result = (int (__thiscall ***)(_DWORD, _DWORD))(**result)(result, 0);
    if ( result )
    {
      v5 = this[410];
      if ( v5 == -1 || off_1061BE18[4 * (this[410] & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = (int *)off_1061BE18[4 * (this[410] & 0xFFF) + 1];
      result = (int (__thiscall ***)(_DWORD, _DWORD))sub_102600F0(v6, (int)"#Valve_Hint_JeepKeys");
      ++this[480];
    }
  }
  return result;
}
