_BYTE *__thiscall sub_1000C950(__int16 *this)
{
  __int16 *v2; // edi
  char v3; // al
  int *v4; // eax
  int v5; // eax
  const char *v6; // eax
  int *v7; // eax
  int v8; // eax
  const char *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int i; // edi
  _BYTE *result; // eax
  const char *v16; // eax
  char *v17; // [esp-8h] [ebp-10h]
  const char *v18; // [esp-8h] [ebp-10h]
  char *v19; // [esp-8h] [ebp-10h]
  const char *v20; // [esp-8h] [ebp-10h]
  int v21; // [esp-4h] [ebp-Ch]

  if ( *((_DWORD *)this + 509) != -1 )
    *((_DWORD *)this + 509) = -1;
  if ( *((_DWORD *)this + 508) != *((_DWORD *)this + 509) )
    *((_DWORD *)this + 508) = *((_DWORD *)this + 509);
  v2 = this + 1044;
  v21 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)this + 1192))(this);
  v3 = sub_10034D90(this);
  if ( (unsigned __int8)sub_1014F340(dword_10413188, v3, (int)(this + 1044), v21) )
  {
    if ( *(_BYTE *)(sub_1014F160(*v2) + 480) )
    {
      v17 = (char *)(sub_1014F160(*v2) + 480);
      v4 = (int *)sub_101AB1E0();
      v5 = sub_10007E50(v4, v17);
      if ( *((_DWORD *)this + 508) != v5 )
        *((_DWORD *)this + 508) = v5;
      if ( *((_DWORD *)this + 508) == -1 )
      {
        v18 = (const char *)(sub_1014F160(*v2) + 480);
        v6 = (const char *)sub_10034D90(this);
        Msg("ERROR: Weapon (%s) using undefined primary ammo type (%s)\n", v6, v18);
      }
    }
    if ( *(_BYTE *)(sub_1014F160(*v2) + 512) )
    {
      v19 = (char *)(sub_1014F160(*v2) + 512);
      v7 = (int *)sub_101AB1E0();
      v8 = sub_10007E50(v7, v19);
      if ( *((_DWORD *)this + 509) != v8 )
        *((_DWORD *)this + 509) = v8;
      if ( *((_DWORD *)this + 509) == -1 )
      {
        v20 = (const char *)(sub_1014F160(*v2) + 512);
        v9 = (const char *)sub_10034D90(this);
        Msg("ERROR: Weapon (%s) using undefined secondary ammo type (%s)\n", v9, v20);
      }
    }
    sub_10150110((unsigned __int16)*v2);
    if ( *((_DWORD *)this + 497) )
      *((_DWORD *)this + 497) = 0;
    if ( *((_DWORD *)this + 498) )
      *((_DWORD *)this + 498) = 0;
    if ( (*(int (__thiscall **)(__int16 *, _DWORD))(*(_DWORD *)this + 1116))(this, 0) )
    {
      if ( *(_BYTE *)(*(int (__thiscall **)(__int16 *, _DWORD))(*(_DWORD *)this + 1116))(this, 0) )
      {
        v10 = (*(int (__thiscall **)(__int16 *, _DWORD))(*(_DWORD *)this + 1116))(this, 0);
        v11 = sub_10034D70(v10);
        if ( *((_DWORD *)this + 497) != v11 )
          *((_DWORD *)this + 497) = v11;
      }
    }
    if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)this + 1120))(this) )
    {
      if ( *(_BYTE *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)this + 1120))(this) )
      {
        v12 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)this + 1120))(this);
        v13 = sub_10034D70(v12);
        if ( *((_DWORD *)this + 498) != v13 )
          *((_DWORD *)this + 498) = v13;
      }
    }
    for ( i = 0; i < 16; ++i )
    {
      result = (_BYTE *)(*(int (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 1176))(this, i);
      if ( result )
      {
        if ( *result )
          result = (_BYTE *)sub_10120780(result);
      }
    }
  }
  else
  {
    v16 = (const char *)sub_10034D90(this);
    return (_BYTE *)Warning("Error reading weapon data file for: %s\n", v16);
  }
  return result;
}
