int __thiscall sub_1004F410(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  char *v6; // edi
  int (__thiscall ***v7)(_DWORD); // eax
  int v9; // eax
  int v10; // [esp-Ch] [ebp-14h]

  v4 = a2;
  v5 = a3;
  this[8 * a2 + 516 + 4 * a2 + 4 * a3] = 0xFFFF;
  v6 = (char *)&this[8 * v4 + 4 * v4 + 4 * v5];
  v10 = a4;
  *((_DWORD *)v6 + 517) = v5;
  sub_102334D0(v10, "ClientEffect textures", 1);
  v7 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_DWORD, const char *, char *, _DWORD))(**((_DWORD **)v6 + 518)
                                                                                                 + 44))(
                                       *((_DWORD *)v6 + 518),
                                       "$basetexture",
                                       (char *)&a2 + 3,
                                       0);
  if ( !HIBYTE(a2) )
    return sub_10233410(0);
  v9 = (**v7)(v7);
  return sub_10233410(v9);
}
