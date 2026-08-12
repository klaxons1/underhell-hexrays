char __thiscall sub_10182190(_DWORD *this, int *a2, const char *a3)
{
  int (__thiscall *v6)(int *); // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  int *v10; // esi
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int **v14; // edi
  int v15; // esi
  int v16; // eax
  int v18; // [esp+14h] [ebp+8h]

  if ( a2 )
  {
    v6 = *(int (__thiscall **)(int *))(*a2 + 4);
    v18 = this[63];
    v7 = v6(a2);
    if ( (*(int (__thiscall **)(_DWORD *, int))(v18 + 16))(this + 63, v7) )
    {
      v8 = (const char *)(*(int (__thiscall **)(int *))(*a2 + 4))(a2);
      DevMsg("CBaseViewport::AddNewPanel: panel with name '%s' already exists.\n", v8);
      return 0;
    }
    else
    {
      v9 = this[70];
      v10 = this + 69;
      v11 = this[72];
      if ( v11 + 1 > v9 )
        sub_1010AFF0(v10, v11 - v9 + 1);
      ++v10[3];
      v12 = *v10;
      v13 = v10[3] - v11 - 1;
      v10[4] = *v10;
      if ( v13 > 0 )
        memcpy((void *)(v12 + 4 * v11 + 4), (const void *)(v12 + 4 * v11), 4 * v13);
      v14 = (int **)(*v10 + 4 * v11);
      if ( v14 )
        *v14 = a2;
      v15 = *a2;
      v16 = (*(int (__thiscall **)(_DWORD *))*this)(this);
      (*(void (__thiscall **)(int *, int))(v15 + 40))(a2, v16);
      return 1;
    }
  }
  else
  {
    DevMsg("CBaseViewport::AddNewPanel(%s): NULL panel.\n", a3);
    return 0;
  }
}
