int __usercall sub_102E4B10@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  char *v6; // edi
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  float v11; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)a1 + 104))(a1, "models/player/jake_casual.mdl");
  sub_101F6B00((int *)a1, a2);
  if ( !*(_BYTE *)(a1 + 2329) )
    sub_102DECC0((void *)a1);
  v3 = *(_DWORD *)(a1 + 5084);
  v11 = 100.0;
  if ( v3 != COERCE_INT(100.0) )
  {
    (**(void (__thiscall ***)(int, int))(a1 + 5080))(a1 + 5080, a1 + 5084);
    *(float *)(a1 + 5084) = 100.0;
  }
  v4 = *(_DWORD *)(a1 + 2252);
  v5 = v4 | 0x80;
  if ( v4 != (v4 | 0x80) )
  {
    (**(void (__thiscall ***)(int, int))(a1 + 2192))(a1 + 2192, a1 + 2252);
    *(_DWORD *)(a1 + 2252) = v5;
  }
  v6 = (char *)*sub_10162BE0(&v11, "player_squad");
  v7 = sub_100B0F90(&dword_10695280, v6);
  if ( !v7 )
    v7 = sub_100B2200(&dword_10695280, v6);
  *(_DWORD *)(a1 + 5376) = v7;
  sub_102E0CB0(a1);
  v8 = *(_DWORD *)(a1 + 5128);
  v11 = 100.0;
  if ( v8 != COERCE_INT(100.0) )
  {
    (**(void (__thiscall ***)(int, int))(a1 + 5080))(a1 + 5080, a1 + 5128);
    *(float *)(a1 + 5128) = 100.0;
  }
  sub_102DBB80((_DWORD *)a1);
  v9 = *(_DWORD *)a1;
  *(float *)(a1 + 5608) = 1.0;
  return (*(int (__thiscall **)(int))(v9 + 1636))(a1);
}
