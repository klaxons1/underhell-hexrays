char __usercall sub_10187120@<al>(int *a1@<ecx>, int a2@<edi>)
{
  char result; // al
  const char *v4; // eax
  char *v5; // edi
  int v6; // edx
  int *v7; // ecx
  unsigned int v8; // edx
  int *v9; // ecx
  int v10; // [esp+18h] [ebp-20h]
  __int64 v11; // [esp+18h] [ebp-20h]
  char *v12; // [esp+1Ch] [ebp-1Ch]
  int v13; // [esp+30h] [ebp-8h]
  unsigned int v14; // [esp+30h] [ebp-8h]
  char *String1; // [esp+34h] [ebp-4h] BYREF

  result = sub_10186050((int)a1, 1);
  if ( result )
  {
    v4 = (const char *)a1[235];
    String1 = 0;
    if ( !v4 )
      v4 = String;
    sub_101812F0(a2, (int)a1, (int *)&String1, (int)v4, 0);
    if ( String1 )
    {
      v12 = String1;
      v5 = String1;
      v10 = *(_DWORD *)(*(int (__cdecl **)(int))(*(_DWORD *)String1 + 8))(-1);
      sub_1002A0F0(a1 + 203, v10, (int)v12, (int)a1);
      sub_10186AA0(v5);
      v6 = *((_DWORD *)v5 + 62) | 4;
      v13 = v6;
      if ( *((_DWORD *)v5 + 62) != v6 )
      {
        if ( v5[84] )
        {
          v5[88] |= 1u;
        }
        else
        {
          v7 = (int *)*((_DWORD *)v5 + 6);
          if ( v7 )
          {
            sub_100194B0(v7, 248);
            v6 = v13;
          }
        }
        *((_DWORD *)v5 + 62) = v6;
      }
      v8 = *((_DWORD *)v5 + 62) & 0xFFFFF7FF;
      v14 = v8;
      if ( *((_DWORD *)v5 + 62) != v8 )
      {
        if ( v5[84] )
        {
          v5[88] |= 1u;
        }
        else
        {
          v9 = (int *)*((_DWORD *)v5 + 6);
          if ( v9 )
          {
            sub_100194B0(v9, 248);
            v8 = v14;
          }
        }
        *((_DWORD *)v5 + 62) = v8;
      }
      (*(void (__thiscall **)(int *, char *))(*a1 + 724))(a1, v5);
      sub_10260750(v5);
      (*(void (__thiscall **)(char *, int *))(*(_DWORD *)v5 + 76))(v5, a1);
      LOBYTE(v14) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, 0);
      (*(void (__thiscall **)(char *))(*(_DWORD *)v5 + 136))(v5);
      (*(void (__thiscall **)(int, int, unsigned int))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, v14);
      result = (*(int (__thiscall **)(int *, char *))(*a1 + 728))(a1, v5);
      ++a1[227];
      if ( (a1[62] & 0x20) == 0 )
      {
        if ( *(int *)(dword_106B3E7C + 48) < 3 )
          --a1[200];
        else
          --a1[201];
        result = (*(int (__thiscall **)(int *))(*a1 + 740))(a1);
        if ( result )
        {
          HIDWORD(v11) = a1;
          LODWORD(v11) = a1;
          sub_1010DD80(a1 + 209, v11, 0.0);
          result = sub_100EC3F0(a1, 0, 0.0, 0);
          a1[50] = 0;
        }
      }
    }
    else
    {
      return Warning("NULL Ent in NPCMaker!\n");
    }
  }
  return result;
}
