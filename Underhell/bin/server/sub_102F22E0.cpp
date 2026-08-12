int *__thiscall sub_102F22E0(_DWORD *this)
{
  const char *v2; // eax
  int *result; // eax
  int *v4; // esi
  float v5; // [esp+0h] [ebp-10h]

  sub_10150680((int)this);
  if ( this[53] )
  {
    result = (int *)sub_101811E0("lookdoorthinker", -1);
    v4 = result;
    if ( result )
    {
      sub_100EC3F0(result, (int)sub_102F2270, 0.0, 0);
      v4[200] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
      v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
      return (int *)sub_100EC4A0(v4, v5, 0);
    }
  }
  else
  {
    v2 = sub_100D6390(this);
    return (int *)Warning("ERROR: DoorLook (%s) given no target.  Rejecting spawn.\n", v2);
  }
  return result;
}
