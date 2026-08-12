int __thiscall sub_10181B30(_DWORD *this, const char *a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  int v5; // edi
  int *v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // esi
  int v12; // eax

  v3 = this;
  result = strcmp(a2, "all");
  if ( result )
  {
    if ( !strcmp(a2, "active") )
      result = v3[12];
    else
      result = (*(int (__thiscall **)(_DWORD *, const char *))(*v3 + 16))(v3, a2);
    if ( result )
    {
      v10 = v3 - 63;
      v11 = *(v3 - 63);
      v12 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)result + 32))(result, a3, 0.0);
      return (*(int (__thiscall **)(_DWORD *, int))(v11 + 136))(v10, v12);
    }
  }
  else
  {
    v5 = 0;
    if ( (int)v3[9] > 0 )
    {
      v6 = v3 - 63;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v3[6] + 4 * v5);
        v8 = *v6;
        v9 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 32))(v7, a3, 0.0);
        result = (*(int (__thiscall **)(int *, int))(v8 + 136))(v6, v9);
        if ( ++v5 >= this[9] )
          break;
        v3 = this;
      }
    }
  }
  return result;
}
