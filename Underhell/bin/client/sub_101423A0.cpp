int __thiscall sub_101423A0(void *this, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  unsigned __int8 v5; // al
  int v7; // esi
  unsigned __int8 v8; // al

  if ( a4 && *a4 )
  {
    v4 = *(_DWORD *)dword_10413168;
    v5 = (*(int (__thiscall **)(void *, _DWORD, _DWORD *, int))(*(_DWORD *)this + 144))(this, *a4, a4 + 1, a3);
    return (*(int (__thiscall **)(int, _DWORD))(v4 + 168))(dword_10413168, v5);
  }
  else
  {
    v7 = *(_DWORD *)dword_10413168;
    v8 = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 144))(this, 1, a2 + 44, a3);
    return (*(int (__thiscall **)(int, _DWORD))(v7 + 168))(dword_10413168, v8);
  }
}
