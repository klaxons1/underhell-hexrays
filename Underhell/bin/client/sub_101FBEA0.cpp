int __thiscall sub_101FBEA0(void *this, int a2)
{
  int v3; // ecx
  int (__thiscall *v5)(int, const char *, int *, int); // eax
  int v6; // eax
  int (__thiscall ***v7)(_DWORD); // esi
  int v8; // eax
  int (__thiscall ***v9)(_DWORD); // esi
  void *v10; // eax

  v3 = a2;
  if ( !a2 )
    return 0;
  v5 = *(int (__thiscall **)(int, const char *, int *, int))(*(_DWORD *)a2 + 44);
  LOBYTE(a2) = 0;
  v6 = v5(v3, "$basetexture", &a2, 1);
  v7 = (int (__thiscall ***)(_DWORD))v6;
  if ( !(_BYTE)a2 )
    return 0;
  if ( !v6 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6) )
    return 0;
  v8 = (**v7)(v7);
  v9 = (int (__thiscall ***)(_DWORD))v8;
  if ( !v8 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 60))(v8) )
    return 0;
  v10 = (void *)(**v9)(v9);
  return sub_101FBDE0((int)this, v10, (int)v9);
}
