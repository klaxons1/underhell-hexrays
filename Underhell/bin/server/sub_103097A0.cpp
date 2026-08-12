int __thiscall sub_103097A0(_DWORD *this)
{
  float *v2; // eax
  int result; // eax
  int i; // esi
  int v5; // edi
  const char *v6; // eax
  float *v7; // eax
  _BYTE v8[4]; // [esp+14h] [ebp-4h] BYREF

  sub_100422B0(this);
  v2 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
  result = sub_1012BFF0(&dword_1069E3E0, 0, v2, 2500.0);
  for ( i = result; result; i = result )
  {
    if ( *(_DWORD *)(i + 420) != 1
      && (*(char **)(i + 92) == "prop_physics"
       || sub_100D6240((_DWORD *)i, "prop_physics")
       || *(char **)(i + 92) == "func_physbox"
       || sub_100D6240((_DWORD *)i, "func_physbox")) )
    {
      v5 = *(_DWORD *)(i + 424);
      if ( v5 )
      {
        if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v5 + 116))(*(_DWORD *)(i + 424)) <= 750.0
          && ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 116))(v5) >= 8.0 )
        {
          sub_100AB500(&off_1060AFB4, i);
          if ( *(_DWORD *)(dword_106E3074 + 48) == 5 )
          {
            v6 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)i + 28))(i, v8);
            if ( !v6 )
              v6 = String;
            Msg("Antlion Guard: Added prop with model '%s' to sense list.\n", v6);
            *(_DWORD *)(i + 236) |= 4u;
          }
        }
      }
    }
    v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
    result = sub_1012BFF0(&dword_1069E3E0, i, v7, 2500.0);
  }
  return result;
}
