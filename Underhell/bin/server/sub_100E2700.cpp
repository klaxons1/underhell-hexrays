void __thiscall sub_100E2700(unsigned __int8 *this, const char *a2, char *String1, char a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  const char *v8; // eax
  const char *v9; // esi
  int v10; // ecx
  int v11; // eax
  const char *v12; // eax
  const char *v13; // esi
  const char *v14; // edi
  const char *v15; // eax
  const char *v16; // esi
  unsigned int v17; // eax
  int v18; // eax
  int v19; // edx

  v5 = *((_DWORD *)this + 75);
  if ( v5 != -1 && (v6 = &off_1061BE18[4 * (*((_DWORD *)this + 75) & 0xFFF) + 1], v7 = v5 >> 12, v6[1] == v7) && *v6 )
  {
    if ( v6[1] == v7 )
      v10 = *v6;
    else
      v10 = 0;
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 208))(v10);
    if ( v11 )
    {
      v14 = String1;
      String1 = (char *)sub_100BEF30(v11, String1);
      if ( String1 )
      {
        sub_100DDB20(this + 305, (char *)&String1);
        v17 = *((_DWORD *)this + 75);
        if ( v17 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 75) & 0xFFF) + 2] != v17 >> 12 )
          v18 = 0;
        else
          v18 = off_1061BE18[4 * (*((_DWORD *)this + 75) & 0xFFF) + 1];
        (*(void (__thiscall **)(unsigned __int8 *, int, _DWORD))(*(_DWORD *)this + 140))(this, v18, this[305]);
        sub_100E0970((int)this, v19, 0, 0);
        if ( !a4 )
        {
          sub_100E10C0((int)this, &flt_106F1CA8);
          sub_100E11A0((int)this, &flt_106F1CB4);
        }
      }
      else
      {
        v15 = (const char *)*((_DWORD *)this + 65);
        if ( !v15 )
        {
          v15 = (const char *)*((_DWORD *)this + 23);
          if ( !v15 )
            v15 = String;
        }
        v16 = (const char *)*((_DWORD *)this + 23);
        if ( !v16 )
          v16 = String;
        Warning("ERROR: Tried to %s for entity %s (%s), but it has no attachment named %s.\n", a2, v16, v15, v14);
      }
    }
    else
    {
      v12 = (const char *)*((_DWORD *)this + 65);
      if ( !v12 )
      {
        v12 = (const char *)*((_DWORD *)this + 23);
        if ( !v12 )
          v12 = String;
      }
      v13 = (const char *)*((_DWORD *)this + 23);
      if ( !v13 )
        v13 = String;
      Warning("ERROR: Tried to %s for entity %s (%s), but its parent has no model.\n", a2, v13, v12);
    }
  }
  else
  {
    v8 = (const char *)*((_DWORD *)this + 65);
    if ( !v8 )
    {
      v8 = (const char *)*((_DWORD *)this + 23);
      if ( !v8 )
        v8 = String;
    }
    v9 = (const char *)*((_DWORD *)this + 23);
    if ( !v9 )
      v9 = String;
    Warning("ERROR: Tried to %s for entity %s (%s), but it has no parent.\n", a2, v9, v8);
  }
}
