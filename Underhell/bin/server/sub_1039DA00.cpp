void __thiscall sub_1039DA00(void *this, int a2)
{
  char **v3; // ecx
  char *v4; // ecx
  char *v5; // eax
  _DWORD *v6; // edi
  const char *v7; // eax
  const char *v8; // ebx
  int v9; // edx
  int *v10; // ecx
  int v11; // eax
  char *v12; // edx

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !v4 )
    {
LABEL_7:
      v5 = 0;
      goto LABEL_8;
    }
    v5 = v4;
  }
  else
  {
    v5 = (char *)sub_1010D460((int)v3);
  }
  if ( !v5 || !*v5 )
    goto LABEL_7;
LABEL_8:
  *((_DWORD *)this + 905) = v5;
  if ( !v5 )
    v5 = (char *)String;
  v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
  if ( v6 )
  {
    v9 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
    a2 = v9;
    if ( *((_DWORD *)this + 907) != v9 )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v10 = (int *)*((_DWORD *)this + 6);
        if ( v10 )
        {
          sub_100194B0(v10, 3628);
          v9 = a2;
        }
      }
      *((_DWORD *)this + 907) = v9;
    }
    v11 = (*(int (__thiscall **)(_DWORD *))(*v6 + 208))(v6);
    if ( v11 )
    {
      v12 = (char *)*((_DWORD *)this + 906);
      if ( !v12 )
        v12 = (char *)String;
      a2 = sub_100BEF30(v11, v12);
      sub_1039D7F0((_DWORD *)this + 908, &a2);
    }
    (*(void (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)this + 140))(this, v6, -1);
    sub_100E10C0((int)this, &flt_106F1CA8);
    sub_100E11A0((int)this, &flt_106F1CB4);
  }
  else
  {
    v7 = (const char *)*((_DWORD *)this + 65);
    if ( !v7 )
      v7 = String;
    v8 = (const char *)*((_DWORD *)this + 905);
    if ( !v8 )
      v8 = String;
    Warning("Failed to find animation target %s for npc_puppet (%s)\n", v8, v7);
  }
}
