char *__thiscall sub_1025C680(void *this, int a2)
{
  __int64 v2; // rdi
  char *result; // eax
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // eax
  char *v7; // edi
  char *v8; // [esp+10h] [ebp-2030h]
  _BYTE v9[8192]; // [esp+20h] [ebp-2020h] BYREF
  _BYTE v10[12]; // [esp+2020h] [ebp-20h] BYREF
  _BYTE v11[12]; // [esp+202Ch] [ebp-14h] BYREF
  int v12; // [esp+2038h] [ebp-8h]
  int v13; // [esp+203Ch] [ebp-4h]

  HIDWORD(v2) = this;
  result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 196))(dword_106B3CDC);
  if ( !(_BYTE)result && !*(_BYTE *)(HIDWORD(v2) + 1156) )
  {
    LODWORD(v2) = a2;
    *(_BYTE *)(HIDWORD(v2) + 1156) = 1;
    if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
      v13 = a2;
    else
      v13 = sub_10261B20();
    v12 = sub_102595B0((_DWORD *)v13, (char *)(HIDWORD(v2) + 1124));
    v8 = (char *)(HIDWORD(v2) + 1124);
    if ( !v12 )
      return (char *)DevMsg(2, "Player isn't in the transition volume %s, aborting\n", v8);
    result = (char *)sub_10254F80(v8);
    if ( result )
    {
      if ( v12 == 1 )
      {
        v4 = *(_DWORD *)dword_106B31D0;
        v5 = sub_10019640(result);
        v6 = (*(int (__thiscall **)(int, _DWORD *))(v4 + 44))(dword_106B31D0, v5);
        (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)dword_106B31D0 + 48))(
          dword_106B31D0,
          v6,
          0x2000,
          v9);
        if ( v13 )
        {
          (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)(v13 + 320) + 60))(v13 + 320, v10, v11);
          if ( !(*(unsigned __int8 (__thiscall **)(int, _BYTE *, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_106B31D0 + 56))(
                  dword_106B31D0,
                  v10,
                  v11,
                  v9,
                  0x2000) )
            return (char *)Warning(
                             "Player isn't in the landmark's (%s) PVS, aborting\n",
                             (const char *)(HIDWORD(v2) + 1124));
        }
        LODWORD(v2) = a2;
      }
      sub_10255000();
      dword_106C7618 = 0;
      byte_106C75D8 = 0;
      sub_104299C0(&byte_106C75D8, (char *)(HIDWORD(v2) + 1124), 0x20u);
      sub_104299C0(byte_106C75F8, (char *)(HIDWORD(v2) + 1092), 0x20u);
      sub_10019680((_DWORD *)(HIDWORD(v2) + 880), v2);
      sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1160), v2, 0.0);
      sub_1025B6D0((char *)HIDWORD(v2));
      if ( *(_DWORD *)(dword_106C765C + 48) )
        Msg("CHANGE LEVEL: %s %s\n", byte_106C75F8, &byte_106C75D8);
      if ( *(_DWORD *)(dword_106C765C + 48) )
      {
        result = (char *)sub_10222EC0(0);
        v7 = result;
        if ( result )
        {
          ((void (__thiscall *)(int (***)(), char *))(*off_10646704)[1])(off_10646704, result);
          *((_DWORD *)v7 + 6) = sub_10259790(v7 + 28, 16);
          result = (char *)((int (__thiscall *)(int (***)()))(*off_10646704)[4])(off_10646704);
        }
        *(_DWORD *)(HIDWORD(v2) + 196) = 0;
      }
      else
      {
        return (char *)(**(int (__thiscall ***)(int, char *, char *))dword_106B31D0)(
                         dword_106B31D0,
                         byte_106C75F8,
                         &byte_106C75D8);
      }
    }
  }
  return result;
}
