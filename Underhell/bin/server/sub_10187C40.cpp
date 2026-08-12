char __usercall sub_10187C40@<al>(int a1@<ecx>, int a2@<esi>)
{
  char result; // al
  int v4; // ebx
  const char *v5; // eax
  const char *v6; // ecx
  const char *v7; // edi
  const char *v8; // eax
  char *v9; // esi
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // [esp+8h] [ebp-28h]
  __int64 v16; // [esp+8h] [ebp-28h]
  char *v17; // [esp+Ch] [ebp-24h]
  int v18; // [esp+10h] [ebp-20h]
  float v19; // [esp+20h] [ebp-10h] BYREF
  int v20; // [esp+24h] [ebp-Ch]
  float v21; // [esp+28h] [ebp-8h]
  char *String1; // [esp+2Ch] [ebp-4h] BYREF

  if ( 0.0 != *(float *)(a1 + 932) && (*(_DWORD *)(a1 + 248) & 0x100) != 0 )
    return sub_10187310((_DWORD *)a1, a2);
  LOBYTE(String1) = *(_DWORD *)(a1 + 944) != 0;
  result = sub_10186050(a1, (char)String1);
  if ( result )
  {
    v4 = 0;
    if ( !*(_DWORD *)(a1 + 944) || (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 744))(a1)) != 0 )
    {
      v8 = *(const char **)(a1 + 940);
      String1 = 0;
      if ( !v8 )
        v8 = String;
      sub_101812F0(a1, a2, (int *)&String1, (int)v8, 0);
      v9 = String1;
      if ( String1 )
      {
        if ( v4 )
        {
          if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
            sub_100DAE60(v4);
          sub_100E0D20((int)v9, (float *)(v4 + 580));
          if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
            sub_100DAE60(v4);
          v10 = *(_DWORD *)(v4 + 708);
          v19 = 0.0;
          v21 = 0.0;
          v20 = v10;
          sub_100E0EA0((int)v9, &v19);
          sub_10185AA0(v4, (unsigned int)v9);
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          sub_100E0D20((int)v9, (float *)(a1 + 580));
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          v11 = *(_DWORD *)(a1 + 708);
          v19 = 0.0;
          v21 = 0.0;
          v20 = v11;
          sub_100E0EA0((int)v9, &v19);
        }
        v18 = a1;
        v17 = String1;
        if ( String1 )
          v15 = *(_DWORD *)(*(int (__thiscall **)(char *, int, char *, int))(*(_DWORD *)String1 + 8))(
                             String1,
                             -1,
                             String1,
                             a1);
        else
          LOBYTE(v15) = -1;
        sub_1002A0F0((int *)(a1 + 812), v15, (int)v17, v18);
        if ( (*(_BYTE *)(a1 + 248) & 0x10) != 0 )
          sub_10035270((int)v9, v12, 512);
        sub_100352C0((int)v9, v12, 2048);
        if ( (*(_BYTE *)(a1 + 248) & 0x40) == 0 )
          sub_100352C0((int)v9, v13, 4);
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)a1 + 724))(a1, v9);
        sub_10260750(v9);
        (*(void (__thiscall **)(char *, int))(*(_DWORD *)v9 + 76))(v9, a1);
        sub_10185930(v14, (int)v9);
        result = (*(int (__thiscall **)(int, char *))(*(_DWORD *)a1 + 728))(a1, v9);
        ++*(_DWORD *)(a1 + 908);
        if ( (*(_BYTE *)(a1 + 248) & 0x20) == 0 )
        {
          if ( *(int *)(dword_106B3E7C + 48) < 3 )
            --*(_DWORD *)(a1 + 800);
          else
            --*(_DWORD *)(a1 + 804);
          result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 740))(a1);
          if ( result )
          {
            HIDWORD(v16) = a1;
            LODWORD(v16) = a1;
            sub_1010DD80((_DWORD *)(a1 + 836), v16, 0.0);
            result = sub_100EC3F0((_DWORD *)a1, 0, 0.0, 0);
            *(_DWORD *)(a1 + 200) = 0;
          }
        }
      }
      else
      {
        return Warning("NULL Ent in NPCMaker!\n");
      }
    }
    else
    {
      v5 = *(const char **)(a1 + 944);
      if ( !v5 )
        v5 = String;
      v6 = *(const char **)(a1 + 260);
      if ( !v6 )
        v6 = String;
      v7 = *(const char **)(a1 + 92);
      if ( !v7 )
        v7 = String;
      return DevMsg(2, "%s '%s' failed to find a valid spawnpoint in destination group: '%s'\n", v7, v6, v5);
    }
  }
  return result;
}
