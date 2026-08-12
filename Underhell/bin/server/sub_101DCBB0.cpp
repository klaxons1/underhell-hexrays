char **__thiscall sub_101DCBB0(_DWORD *this, char *String2, char *a3, char **a4, char **a5)
{
  char *v5; // eax
  char *v7; // esi
  char *v8; // eax
  char *v9; // eax
  char *v10; // edi
  char **result; // eax
  int v12; // eax
  int v13; // eax

  v5 = String2;
  if ( !String2 )
    v5 = (char *)String;
  v7 = sub_101B60F0(v5, this);
  v8 = a3;
  if ( !a3 )
    v8 = (char *)String;
  v9 = sub_101B60F0(v8, this);
  v10 = v9;
  if ( v7 )
  {
    if ( v9 )
    {
      v12 = (*(int (__thiscall **)(char *))(*(_DWORD *)v7 + 68))(v7);
      if ( v12 )
        ((void (__thiscall *)(int (__stdcall ***)(int, int), _DWORD *, int))**off_1061BE1C)(off_1061BE1C, this, v12);
      v13 = (*(int (__thiscall **)(char *))(*(_DWORD *)v10 + 68))(v10);
      if ( v13 )
        result = (char **)((int (__thiscall *)(int (__stdcall ***)(int, int), _DWORD *, int))**off_1061BE1C)(
                            off_1061BE1C,
                            this,
                            v13);
      else
        result = a4;
      *a4 = v7;
      *a5 = v10;
    }
    else
    {
      result = (char **)dword_106BAFEC;
      *a4 = (char *)dword_106BAFEC;
      *a5 = v7;
    }
  }
  else
  {
    result = (char **)dword_106BAFEC;
    *a4 = (char *)dword_106BAFEC;
    *a5 = v10;
  }
  return result;
}
