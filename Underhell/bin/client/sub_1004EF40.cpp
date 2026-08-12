int __thiscall sub_1004EF40(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h] BYREF
  char v11; // [esp+17h] [ebp-1h] BYREF

  sub_10233590(0, 0, 1);
  this[564] = v10;
  sub_10233210(&v10);
  v2 = *(_DWORD *)dword_10413178;
  v3 = (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1);
  if ( (*(int (__thiscall **)(int, int))(v2 + 60))(dword_10413178, v3) == 1 )
  {
    v5 = *(_DWORD *)dword_10413178;
    v6 = (*(int (__thiscall **)(_DWORD *, int, int *))(this[1] + 36))(this + 1, 1, &v9);
    (*(void (__thiscall **)(int, int))(v5 + 64))(dword_10413178, v6);
    v7 = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)v9 + 44))(v9, "$crackmaterial", &v11, 0);
    if ( v11 )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 24))(v7);
      return sub_102334D0(v8, "ClientEffect textures", 1);
    }
    else
    {
      return sub_10233300(v9);
    }
  }
  else
  {
    Warning("Encountered func_breakablesurf that has a material applied to more than one surface!\n");
    return sub_102334D0("debug/debugempty", "Other textures", 1);
  }
}
