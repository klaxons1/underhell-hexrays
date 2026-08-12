void sub_1005F8D0()
{
  int v0; // esi
  int v1; // edi
  const char *v2; // ebx
  _DWORD v3[5]; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v4[5]; // [esp+20h] [ebp-30h] BYREF
  _DWORD v5[2]; // [esp+34h] [ebp-1Ch] BYREF
  int v6; // [esp+3Ch] [ebp-14h]
  int v7; // [esp+40h] [ebp-10h]
  int v8; // [esp+44h] [ebp-Ch]
  _DWORD v9[2]; // [esp+48h] [ebp-8h] BYREF

  v0 = 0;
  memset(v4, 0, sizeof(v4));
  memset(v3, 0, sizeof(v3));
  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9[0] = "COND_ABANDON_TIME_EXPIRED";
  v9[1] = 100000;
  sub_10229160(0, v9);
  sub_1004BBC0(&dword_106924B0, (int)"CAI_StandoffBehavior", (int)&unk_10690E5C, (int)&dword_10690E10);
  sub_1004C500((int)v4, sub_10333A80);
  sub_1004C500((int)v3, sub_10333A80);
  sub_1004C500((int)v5, sub_10333A80);
  v1 = v5[0];
  if ( v7 <= 0 )
  {
LABEL_6:
    if ( v6 >= 0 )
    {
      if ( v1 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
    }
    return;
  }
  while ( 1 )
  {
    v2 = *(const char **)(v1 + 8 * v0);
    if ( sub_1016BF80(&unk_10690E6C) - 1000000000 < 256 )
      break;
    DevWarning("Exceeded max number of conditions (%d), ignoring condition %s\n", 256, v2);
LABEL_5:
    if ( ++v0 >= v7 )
      goto LABEL_6;
  }
  if ( (unsigned __int8)sub_1007DB90(*(_DWORD *)(v1 + 8 * v0), *(_DWORD *)(v1 + 8 * v0 + 4), "condition", off_10605774) )
    goto LABEL_5;
  if ( v6 >= 0 && v1 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v1);
}
