int __thiscall sub_10226520(int this, char *String1, int a3, char a4, char a5)
{
  _DWORD *v6; // eax
  unsigned int v7; // eax
  int result; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // esi
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int i; // esi
  _DWORD v21[32]; // [esp+Ch] [ebp-80h]

  if ( !_stricmp(String1, "Player") || !_stricmp(String1, "!player") )
  {
    if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
      return sub_10261B20();
    return 0;
  }
  if ( !_stricmp(String1, "!target1") )
  {
    if ( sub_1012B040((unsigned int *)(this + 852), 0) )
    {
      v6 = sub_10225530((_DWORD *)this, *(char **)(this + 820), a4);
      sub_10019680((_DWORD *)(this + 852), (int)v6);
    }
    v7 = *(_DWORD *)(this + 852);
    if ( v7 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 852) & 0xFFF) + 2] == v7 >> 12 )
      return off_1061BE18[4 * (*(_DWORD *)(this + 852) & 0xFFF) + 1];
    return 0;
  }
  if ( !_stricmp(String1, "!target2") )
  {
    if ( sub_1012B040((unsigned int *)(this + 856), 0) )
    {
      v9 = sub_10225530((_DWORD *)this, *(char **)(this + 824), a4);
      sub_10019680((_DWORD *)(this + 856), (int)v9);
    }
    return sub_1026A890(this + 856);
  }
  else if ( !_stricmp(String1, "!target3") )
  {
    if ( sub_1012B040((unsigned int *)(this + 860), 0) )
    {
      v10 = sub_10225530((_DWORD *)this, *(char **)(this + 828), a4);
      sub_10019680((_DWORD *)(this + 860), (int)v10);
    }
    return sub_1026A890(this + 860);
  }
  else if ( !_stricmp(String1, "!target4") )
  {
    if ( sub_1012B040((unsigned int *)(this + 864), 0) )
    {
      v11 = sub_10225530((_DWORD *)this, *(char **)(this + 832), a4);
      sub_10019680((_DWORD *)(this + 864), (int)v11);
    }
    return sub_1026A890(this + 864);
  }
  else if ( !_stricmp(String1, "!target5") )
  {
    if ( sub_1012B040((unsigned int *)(this + 868), 0) )
    {
      v12 = sub_10225530((_DWORD *)this, *(char **)(this + 836), a4);
      sub_10019680((_DWORD *)(this + 868), (int)v12);
    }
    return sub_1026A890(this + 868);
  }
  else if ( !_stricmp(String1, "!target6") )
  {
    if ( sub_1012B040((unsigned int *)(this + 872), 0) )
    {
      v13 = sub_10225530((_DWORD *)this, *(char **)(this + 840), a4);
      sub_10019680((_DWORD *)(this + 872), (int)v13);
    }
    return sub_1026A890(this + 872);
  }
  else if ( !_stricmp(String1, "!target7") )
  {
    if ( sub_1012B040((unsigned int *)(this + 876), 0) )
    {
      v14 = sub_10225530((_DWORD *)this, *(char **)(this + 844), a4);
      sub_10019680((_DWORD *)(this + 876), (int)v14);
    }
    return sub_1026A890(this + 876);
  }
  else if ( !_stricmp(String1, "!target8") )
  {
    if ( sub_1012B040((unsigned int *)(this + 880), 0) )
    {
      v15 = sub_10225530((_DWORD *)this, *(char **)(this + 848), a4);
      sub_10019680((_DWORD *)(this + 880), (int)v15);
    }
    return sub_1026A890(this + 880);
  }
  else
  {
    if ( !a3 || !sub_100D7680(a3) )
    {
      v19 = 0;
      for ( i = 0; i < 32; ++i )
      {
        v19 = sub_1012BF20(&dword_1069E3E0, (int)v19, String1, 0, a3, 0, 0);
        if ( !v19 )
          break;
        v21[i] = v19;
      }
      if ( i > 0 )
        return v21[RandomInt(0, i - 1)];
      return 0;
    }
    v16 = 0;
    if ( a5 )
    {
      v17 = (_DWORD *)sub_10184390(12);
      if ( v17 )
      {
        *v17 = &CSceneFindMarkFilter::`vftable';
        v17[1] = -1;
        v17[2] = -1;
        v16 = v17;
      }
      else
      {
        v16 = 0;
      }
      sub_10225630(v16, a3);
    }
    v18 = sub_100D7680(a3);
    result = (*(int (__thiscall **)(int, char *, _DWORD *))(*(_DWORD *)v18 + 2000))(v18, String1, v16);
    if ( !result && v16 )
      return (*(int (__thiscall **)(_DWORD *))(*v16 + 4))(v16);
  }
  return result;
}
