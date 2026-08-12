char __thiscall sub_102E5C70(int *this, int a2)
{
  int v3; // eax
  float *v4; // esi

  LOBYTE(v3) = (*(int (__thiscall **)(int *, int))(*this + 752))(this, a2);
  if ( (_BYTE)v3 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 208))(a2);
    v4 = (float *)v3;
    if ( v3 )
    {
      if ( *(const char **)(v3 + 92) == "weapon_physcannon" || sub_100D6240((_DWORD *)v3, "weapon_physcannon") )
        LOBYTE(v3) = sub_103FEA80(v4);
      else
        LOBYTE(v3) = sub_100C3210(
                       v4,
                       0,
                       *(float *)(dword_106B31C8 + 12),
                       0,
                       this[279],
                       SLODWORD(flt_106F1CA8),
                       SLODWORD(flt_106F1CAC),
                       SLODWORD(flt_106F1CB0),
                       0);
    }
  }
  return v3;
}
