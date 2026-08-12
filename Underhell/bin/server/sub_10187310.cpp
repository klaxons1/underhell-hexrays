char __usercall sub_10187310@<al>(_DWORD *a1@<ecx>, int a2@<esi>)
{
  char result; // al
  const char *v4; // eax
  char *v5; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  int v9; // [esp+8h] [ebp-1Ch]
  __int64 v10; // [esp+8h] [ebp-1Ch]
  char *v11; // [esp+Ch] [ebp-18h]
  _DWORD *v12; // [esp+10h] [ebp-14h]
  char *String1; // [esp+20h] [ebp-4h] BYREF

  result = sub_10186050((int)a1, 1);
  if ( result )
  {
    v4 = (const char *)a1[235];
    String1 = 0;
    if ( !v4 )
      v4 = String;
    sub_101812F0((int)a1, a2, (int *)&String1, (int)v4, 0);
    v5 = String1;
    if ( String1 )
    {
      if ( sub_10185E70((int)a1, (int)String1) )
      {
        v12 = a1;
        v11 = String1;
        if ( String1 )
          v9 = *(_DWORD *)(*(int (__thiscall **)(char *, int, char *, _DWORD *))(*(_DWORD *)String1 + 8))(
                            String1,
                            -1,
                            String1,
                            a1);
        else
          LOBYTE(v9) = -1;
        sub_1002A0F0(a1 + 203, v9, (int)v11, (int)v12);
        sub_10035270((int)v5, v6, 4);
        sub_100352C0((int)v5, v7, 2048);
        (*(void (__thiscall **)(_DWORD *, char *))(*a1 + 724))(a1, v5);
        sub_10260750(v5);
        (*(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v5 + 76))(v5, a1);
        sub_10185930(v8, (int)v5);
        result = (*(int (__thiscall **)(_DWORD *, char *))(*a1 + 728))(a1, v5);
        ++a1[227];
        if ( (a1[62] & 0x20) == 0 )
        {
          if ( *(int *)(dword_106B3E7C + 48) < 3 )
            --a1[200];
          else
            --a1[201];
          result = (*(int (__thiscall **)(_DWORD *))(*a1 + 740))(a1);
          if ( result )
          {
            HIDWORD(v10) = a1;
            LODWORD(v10) = a1;
            sub_1010DD80(a1 + 209, v10, 0.0);
            result = sub_100EC3F0(a1, 0, 0.0, 0);
            a1[50] = 0;
          }
        }
      }
      else
      {
        return sub_1025FAE0(v5);
      }
    }
    else
    {
      return Warning("NULL Ent in NPCMaker!\n");
    }
  }
  return result;
}
