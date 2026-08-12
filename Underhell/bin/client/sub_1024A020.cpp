int __thiscall sub_1024A020(int this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  const char *v4; // eax
  const char *v5; // edi
  const char *v6; // edi
  int v7; // eax
  const char *v8; // eax
  char *v9; // ebp
  unsigned int v10; // kr04_4
  char *v11; // eax
  int v12; // eax
  int v13; // edi
  char *v14; // ebp
  int v15; // eax
  int *v16; // edi
  unsigned int v17; // kr08_4
  char *v18; // eax
  int v19; // ebx
  int v20; // ebp
  int v21; // eax
  int v22; // eax
  int v23; // ebp
  int (__thiscall *v24)(int); // edx
  int v25; // eax
  int v26; // eax
  char v27; // al
  char v28; // al
  int v29; // edi
  int v30; // eax
  int v32; // [esp+14h] [ebp-304h]
  int v33; // [esp+14h] [ebp-304h]
  char Buffer; // [esp+18h] [ebp-300h] BYREF
  _BYTE v35[255]; // [esp+19h] [ebp-2FFh] BYREF
  _BYTE v36[512]; // [esp+118h] [ebp-200h] BYREF

  v2 = a2;
  sub_10241C00((int *)this, a2);
  v4 = (const char *)sub_1022B4C0(a2, "labelText", 0);
  v5 = v4;
  if ( v4 )
  {
    if ( *v4 == 37 && v4[strlen(v4) - 1] == 37 )
    {
      (*(void (__thiscall **)(int, const char *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
        dword_1047CA78,
        v5,
        v36,
        512);
      _snprintf(&Buffer, 0x100u, "#var_%s", v5);
      (*(void (__thiscall **)(int, _BYTE *, _BYTE *, const char *))(*(_DWORD *)dword_1047CA78 + 52))(
        dword_1047CA78,
        v35,
        v36,
        Locale);
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)this + 772))(this, &Buffer);
    }
    else
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 772))(this, v5);
    }
  }
  v6 = (const char *)sub_1022B4C0(a2, "textAlignment", (int)Locale);
  v7 = _stricmp(v6, "north-west");
  if ( v7 )
  {
    if ( !_stricmp(v6, "north") )
    {
      v7 = 1;
    }
    else if ( !_stricmp(v6, "north-east") )
    {
      v7 = 2;
    }
    else if ( !_stricmp(v6, "west") )
    {
      v7 = 3;
    }
    else if ( !_stricmp(v6, "center") )
    {
      v7 = 4;
    }
    else if ( !_stricmp(v6, "east") )
    {
      v7 = 5;
    }
    else if ( !_stricmp(v6, "south-west") )
    {
      v7 = 6;
    }
    else if ( !_stricmp(v6, "south") )
    {
      v7 = 7;
    }
    else
    {
      if ( _stricmp(v6, "south-east") )
        goto LABEL_24;
      v7 = 8;
    }
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 788))(this, v7);
LABEL_24:
  v8 = (const char *)sub_1022B4C0(a2, "associate", (int)Locale);
  v9 = (char *)v8;
  if ( *v8 )
  {
    v10 = strlen(v8);
    v11 = (char *)sub_100DDA40(v10 + 1);
    *(_DWORD *)(this + 272) = v11;
    sub_102282F0(v11, v9, v10 + 1);
  }
  if ( sub_1022A800(a2, "dulltext", 0) == 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 812))(this, 1);
  }
  else if ( sub_1022A800(a2, "brighttext", 0) == 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 812))(this, 2);
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 812))(this, 0);
  }
  v12 = sub_1022B4C0(a2, "font", (int)Locale);
  v13 = dword_1047CA7C;
  v14 = (char *)v12;
  v32 = *(_DWORD *)dword_1047CA7C;
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 80))(this);
  v16 = (int *)(*(int (__thiscall **)(int, int))(v32 + 32))(v13, v15);
  if ( *v14 )
  {
    sub_10034930(*(_DWORD *)(this + 276));
    v17 = strlen(v14);
    v18 = (char *)sub_100DDA40(v17 + 1);
    *(_DWORD *)(this + 276) = v18;
    sub_102282F0(v18, v14, v17 + 1);
    v19 = *(_DWORD *)this;
    v20 = *v16;
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v22 = (*(int (__thiscall **)(int *, _DWORD, int))(v20 + 12))(v16, *(_DWORD *)(this + 276), v21);
    (*(void (__thiscall **)(int, int))(v19 + 816))(this, v22);
    v2 = a2;
  }
  else if ( *(_DWORD *)(this + 276) )
  {
    sub_10034930(*(_DWORD *)(this + 276));
    v23 = *(_DWORD *)this;
    v24 = *(int (__thiscall **)(int))(*(_DWORD *)this + 84);
    *(_DWORD *)(this + 276) = 0;
    v33 = *v16;
    v25 = v24(this);
    v26 = (*(int (__thiscall **)(int *, const char *, int))(v33 + 12))(v16, "Default", v25);
    (*(void (__thiscall **)(int, int))(v23 + 816))(this, v26);
  }
  v27 = sub_1022A800(v2, "centerwrap", 0) > 0;
  *(_BYTE *)(this + 283) = v27;
  sub_1027D080(v27);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  v28 = sub_1022A800(v2, "wrap", 0) > 0;
  *(_BYTE *)(this + 282) = v28;
  sub_1027D060(v28);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
  v29 = sub_1022A800(v2, "textinsetx", *(_DWORD *)(this + 240));
  v30 = sub_1022A800(v2, "textinsety", *(_DWORD *)(this + 244));
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 792))(this, v29, v30);
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 244))(this, 1, 0);
}
