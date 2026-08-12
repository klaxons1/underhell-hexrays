char __stdcall sub_10295210(int a1, int a2)
{
  _BYTE *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  _BYTE *v11; // eax
  const char *v12; // eax
  char result; // al

  v2 = (_BYTE *)sub_1042A070(a2);
  *(_DWORD *)a1 = *sub_10162BE0(&a2, v2);
  v3 = sub_1042B460("busy_anim", (int)"ACT_INVALID");
  *(_DWORD *)(a1 + 4) = sub_10008FB0(v3);
  v4 = sub_1042B460("entry_anim", (int)"ACT_INVALID");
  *(_DWORD *)(a1 + 8) = sub_10008FB0(v4);
  v5 = sub_1042B460("exit_anim", (int)"ACT_INVALID");
  *(_DWORD *)(a1 + 12) = sub_10008FB0(v5);
  v6 = (_BYTE *)sub_1042B460("busy_sequence", 0);
  *(_DWORD *)(a1 + 16) = *sub_10162BE0(&a2, v6);
  v7 = (_BYTE *)sub_1042B460("entry_sequence", 0);
  *(_DWORD *)(a1 + 20) = *sub_10162BE0(&a2, v7);
  v8 = (_BYTE *)sub_1042B460("exit_sequence", 0);
  *(_DWORD *)(a1 + 24) = *sub_10162BE0(&a2, v8);
  v9 = (_BYTE *)sub_1042B460("busy_sound", 0);
  *(_DWORD *)(a1 + 28) = *sub_10162BE0(&a2, v9);
  v10 = (_BYTE *)sub_1042B460("entry_sound", 0);
  *(_DWORD *)(a1 + 32) = *sub_10162BE0(&a2, v10);
  v11 = (_BYTE *)sub_1042B460("exit_sound", 0);
  *(_DWORD *)(a1 + 36) = *sub_10162BE0(&a2, v11);
  sub_1042AE90("min_time", 10.0);
  *(float *)(a1 + 40) = 10.0;
  sub_1042AE90("max_time", 20.0);
  *(float *)(a1 + 44) = 20.0;
  *(_BYTE *)(a1 + 52) = sub_1042AE10("use_automovement", 0) != 0;
  v12 = (const char *)sub_1042B460("interrupts", (int)"BA_INT_DANGER");
  if ( !strcmp(v12, "BA_INT_PLAYER") )
  {
    *(_DWORD *)(a1 + 48) = 2;
    return 1;
  }
  else if ( !strcmp(v12, "BA_INT_DANGER") )
  {
    result = 1;
    *(_DWORD *)(a1 + 48) = 1;
  }
  else if ( !strcmp(v12, "BA_INT_AMBUSH") )
  {
    *(_DWORD *)(a1 + 48) = 3;
    return 1;
  }
  else if ( !strcmp(v12, "BA_INT_COMBAT") )
  {
    *(_DWORD *)(a1 + 48) = 4;
    return 1;
  }
  else
  {
    if ( !strcmp(v12, "BA_INT_ZOMBIESLUMP") )
      *(_DWORD *)(a1 + 48) = 5;
    else
      *(_DWORD *)(a1 + 48) = strcmp(v12, "BA_INT_SIEGE_DEFENSE") != 0 ? 0 : 6;
    return 1;
  }
  return result;
}
