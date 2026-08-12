_DWORD *__thiscall sub_101DDB10(unsigned int this, int *a2)
{
  int v4; // edx
  char v5; // al
  char *v6; // eax
  _DWORD *result; // eax
  char *v8; // ecx
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  const char *v11; // esi
  const char *v12; // eax
  _DWORD *v13; // edi
  int v14; // ecx
  _DWORD v15[512]; // [esp+18h] [ebp-814h]
  _BYTE v16[4]; // [esp+818h] [ebp-14h] BYREF
  int v17; // [esp+81Ch] [ebp-10h]
  int v18; // [esp+820h] [ebp-Ch]
  _DWORD *v19; // [esp+824h] [ebp-8h]
  _DWORD *v20; // [esp+828h] [ebp-4h]
  int i; // [esp+834h] [ebp+8h]

  v4 = *a2;
  v5 = *(_BYTE *)(this + 248) & 1;
  LOBYTE(v18) = (*(_DWORD *)(this + 248) & 2) != 0;
  LOBYTE(v17) = v5;
  sub_1010DD80((_DWORD *)(this + 800), __SPAIR64__(this, v4), 0.0);
  v6 = *(char **)(this + 824);
  if ( !v6 )
    v6 = (char *)String;
  v20 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, *a2, a2[1], 0);
  result = 0;
  for ( i = 0; (unsigned int)i < 0x200; ++i )
  {
    v8 = *(char **)(this + 212);
    if ( !v8 )
      v8 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, (int)result, v8, 0, *a2, a2[1], 0);
    if ( !result )
      break;
    v15[i] = result;
  }
  v9 = v20;
  if ( v20 && i > 0 )
    i = 1;
  v19 = 0;
  if ( i > 0 )
  {
    do
    {
      v10 = (_DWORD *)v15[(_DWORD)v19];
      if ( *((_BYTE *)v10 + 306) == 6 )
      {
        v11 = (const char *)v10[23];
        if ( !v11 )
          v11 = String;
        Msg("ERROR phys_convert %s ! Already MOVETYPE_VPHYSICS\n", v11);
      }
      else
      {
        sub_1016AF10(v15[(_DWORD)v19]);
        if ( v9 )
        {
          (*(void (__thiscall **)(_DWORD *))(*v10 + 592))(v10);
          v12 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v9 + 28))(v9, v16);
          if ( !v12 )
            v12 = String;
          (*(void (__thiscall **)(_DWORD *, const char *))(*v10 + 104))(v10, v12);
        }
        v13 = sub_101DD0B0((float *)v10, v17, v18);
        if ( v13 )
        {
          if ( *(float *)(this + 828) > 0.0 )
          {
            v14 = v13[106];
            if ( v14 )
              (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v14 + 112))(*(float *)(this + 828));
          }
          v13[65] = v10[65];
          sub_102626B0(v10, v13);
          sub_1016B1C0(v10, v13);
          sub_101129A0((unsigned __int16 *)v10 + 160, *((_WORD *)v10 + 178) | 4);
          sub_100EAB80(v10, 32);
          sub_1025FAC0(v10);
        }
        v9 = v20;
      }
      result = (_DWORD *)((char *)v19 + 1);
      v19 = result;
    }
    while ( (int)result < i );
  }
  return result;
}
