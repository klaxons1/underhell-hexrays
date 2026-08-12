void __usercall sub_101BCF70(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ebx
  _BYTE v11[248]; // [esp+8h] [ebp-40Ch] BYREF
  int v12; // [esp+100h] [ebp-314h]
  unsigned int v13; // [esp+104h] [ebp-310h]

  v3 = *(_DWORD *)dword_10413178;
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, 1);
  v5 = (*(int (__thiscall **)(int, int))(v3 + 12))(dword_10413178, v4);
  v6 = (*(int (__thiscall **)(int, int, const char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 8))(
         dword_1047C968 + 4,
         v5,
         "rb",
         0);
  v7 = v6;
  if ( v6 )
  {
    (**(void (__thiscall ***)(int, _BYTE *, int, int))(dword_1047C968 + 4))(dword_1047C968 + 4, v11, 1036, v6);
    if ( v13 % 0x58 )
    {
      Warning("CWorldLights: unknown world light lump\n");
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v7);
    }
    else
    {
      (*(void (__thiscall **)(int, int, int, _DWORD, int))(*(_DWORD *)(dword_1047C968 + 4) + 16))(
        dword_1047C968 + 4,
        v7,
        v12,
        0,
        a2);
      v8 = v13 / 0x58;
      *(_DWORD *)(a1 + 12) = v13 / 0x58;
      v9 = sub_100DDA40((88 * (unsigned __int64)v8) >> 32 != 0 ? -1 : 88 * v8);
      v10 = v13;
      *(_DWORD *)(a1 + 16) = v9;
      (**(void (__thiscall ***)(int, int, int, int))(dword_1047C968 + 4))(dword_1047C968 + 4, v9, v10, v7);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v7);
      DevMsg("CWorldLights: load successful (%d lights at 0x%p)\n", *(_DWORD *)(a1 + 12), *(const void **)(a1 + 16));
    }
  }
  else
  {
    Warning("CWorldLights: unable to open map\n");
  }
}
