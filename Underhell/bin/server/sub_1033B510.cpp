char *__thiscall sub_1033B510(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // eax
  char *v3; // eax
  int v4; // esi
  int v5; // edx
  int *v6; // ecx
  unsigned int v7; // esi
  int *v8; // ecx
  _DWORD *v9; // eax
  int i; // esi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  signed int v14; // ecx
  unsigned int j; // edi
  unsigned int v16; // ebx
  signed int v17; // esi
  unsigned int *v18; // eax
  signed int k; // eax
  int v20; // eax
  const char *v21; // esi
  char *result; // eax
  const char *v23; // eax
  int v24; // edi
  bool v25; // zf
  const char *v26; // eax
  char *v27; // eax
  char *v28; // eax
  char v29[256]; // [esp+Ch] [ebp-34Ch] BYREF
  char Buffer[256]; // [esp+10Ch] [ebp-24Ch] BYREF
  _DWORD v31[15]; // [esp+20Ch] [ebp-14Ch] BYREF
  char String[128]; // [esp+248h] [ebp-110h] BYREF
  int Src; // [esp+2C8h] [ebp-90h] BYREF
  _DWORD v34[29]; // [esp+2CCh] [ebp-8Ch] BYREF
  signed int v35; // [esp+340h] [ebp-18h]
  int *p_Src; // [esp+344h] [ebp-14h]
  int v37; // [esp+348h] [ebp-10h] BYREF
  _DWORD *v38; // [esp+34Ch] [ebp-Ch] BYREF
  int v39; // [esp+350h] [ebp-8h] BYREF
  char v40; // [esp+357h] [ebp-1h]

  v1 = this;
  v38 = this;
  v2 = CommandLine_Tier0();
  if ( (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 12))(v2, "-makereslists", 0) && !byte_106E6508 )
  {
    byte_106E6508 = 1;
    sub_10334C70(v1, 1);
    sub_10334C70(v1, 2);
    sub_10334C70(v1, 3);
  }
  if ( !v1[1442] )
  {
    v3 = *(char **)(dword_106B31C8 + 60);
    if ( !v3 )
      v3 = (char *)::String;
    sub_104299C0(String, v3, 0x100u);
    _strlwr(String);
    v4 = 0;
    while ( !sub_104295F0(String, (&off_1066F68C)[2 * v4]) )
    {
      if ( (unsigned int)++v4 >= 7 )
        goto LABEL_12;
    }
    v1[1442] = dword_1066F690[2 * v4];
LABEL_12:
    if ( !v1[1442] )
      v1[1442] = 1;
  }
  if ( (v1[62] & 0xC40000) != 0 || !*(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 28))(v1, &v39) )
  {
    v5 = sub_10219A30() / 1024;
    v39 = v5;
    if ( v1[212] != v5 )
    {
      if ( *((_BYTE *)v1 + 84) )
      {
        *((_BYTE *)v1 + 88) |= 1u;
      }
      else
      {
        v6 = (int *)v1[6];
        if ( v6 )
        {
          sub_100194B0(v6, 848);
          v5 = v39;
        }
      }
      v1[212] = v5;
    }
    if ( (v1[62] & 0x400000) != 0 )
      v40 = 109;
    else
      v40 = (v1[62] & 0x800000) != 0 ? 0x66 : 0;
    v7 = v1[62] & 0xFF3BFFFF;
    if ( v1[62] != v7 )
    {
      if ( *((_BYTE *)v1 + 84) )
      {
        *((_BYTE *)v1 + 88) |= 1u;
      }
      else
      {
        v8 = (int *)v1[6];
        if ( v8 )
          sub_100194B0(v8, 248);
      }
      v1[62] = v7;
    }
    if ( (v1[62] & 0x10) != 0 )
    {
      v9 = sub_10162BE0(&v39, "models/humans/male_cheaple.mdl");
LABEL_71:
      v1[115] = *v9;
      return (char *)sub_100D8500(v1);
    }
    memset(v31, 0, sizeof(v31));
    for ( i = 0; i < sub_1016BFB0(&dword_10690DF8); ++i )
    {
      v11 = sub_1002A680(&dword_10690DF8);
      v12 = __RTDynamicCast(
              *(_DWORD *)(v11 + 4 * i),
              0,
              (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
              (int)&CNPC_Citizen `RTTI Type Descriptor',
              0);
      if ( v12 )
      {
        if ( (_DWORD *)v12 != v1 )
        {
          v13 = *(_DWORD *)(v12 + 5776);
          if ( v13 <= 0xE )
            ++v31[v13];
        }
      }
    }
    v14 = 0;
    v35 = 0;
    p_Src = &Src;
    for ( j = 0; j < 0xF; ++j )
    {
      if ( !v40 || *(&off_1066E904)[j] == v40 )
      {
        v16 = v31[j];
        v17 = v14++;
        p_Src = &Src;
        v35 = v14;
        if ( v14 - v17 - 1 > 0 )
        {
          memcpy(&v34[2 * v17 + 1], &v34[2 * v17 - 1], 8 * (v14 - v17 - 1));
          v14 = v35;
        }
        v18 = &v34[2 * v17 - 1];
        if ( v18 )
        {
          *v18 = j;
          v18[1] = v16;
          v14 = v35;
        }
        v1 = v38;
      }
    }
    if ( v14 > 1 )
    {
      qsort(&Src, v14, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
      v14 = v35;
    }
    for ( k = 0; k < v14; ++k )
    {
      if ( v34[2 * k] > v34[0] )
        break;
    }
    v20 = v34[2 * (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, k - 1)
            - 1];
    v1[1444] = v20;
    v21 = (&off_1066E904)[v20];
    v1[115] = 0;
    result = (char *)sub_100D8500(v1);
    v35 = 0;
    p_Src = &Src;
    if ( v21 )
      goto LABEL_67;
  }
  result = (char *)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 28))(v1, &v39);
  if ( !*(_DWORD *)result )
    return result;
  v23 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*v1 + 28))(v1, &v39);
  if ( !v23 )
    v23 = ::String;
  result = strrchr(v23, 47);
  if ( result )
  {
    v21 = result + 1;
    if ( v1[1444] == -1 )
    {
      v24 = 0;
      while ( 1 )
      {
        result = (char *)_stricmp((&off_1066E904)[v24], v21);
        if ( !result )
          break;
        if ( (unsigned int)++v24 >= 0xF )
          goto LABEL_66;
      }
      v1[1444] = v24;
    }
  }
  else
  {
    result = (char *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v1 + 28))(v1, &v38);
    v21 = *(const char **)result;
    if ( !*(_DWORD *)result )
      return result;
  }
LABEL_66:
  if ( *v21 )
  {
LABEL_67:
    if ( v1[1442] == 4 )
      return result;
    v25 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v1 + 1532))(v1) == 0;
    v26 = "m";
    if ( v25 )
      v26 = ::String;
    v27 = sub_1001E280(Buffer, (&off_1066E940)[v1[1442]], v26);
    v28 = sub_1001E280(v29, "models/Humans/%s/%s", v27, v21);
    v9 = sub_10162BE0(&v37, v28);
    goto LABEL_71;
  }
  return result;
}
