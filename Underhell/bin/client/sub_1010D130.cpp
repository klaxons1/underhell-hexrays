char __thiscall sub_1010D130(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v4)(int, const char *, char *, int); // eax
  int v5; // eax
  bool v6; // zf
  int v8; // eax
  char v9; // [esp+7h] [ebp-1h] BYREF

  v4 = *(int (__thiscall **)(int, const char *, char *, int))(*(_DWORD *)a2 + 44);
  v9 = 0;
  v5 = v4(a2, "$basetexture", &v9, 1);
  v6 = v9 == 0;
  this[1] = v5;
  if ( v6 )
    return 0;
  v8 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)dword_1047C96C + 304))(
         dword_1047C96C,
         "decals/YBlood1",
         "Decal textures",
         1);
  this[9] = v8;
  if ( !v8 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 60))(v8) )
    return 0;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this[9] + 40))(this[9]);
  return 1;
}
