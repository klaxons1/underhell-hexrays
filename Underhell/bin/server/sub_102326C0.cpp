int __usercall sub_102326C0@<eax>(int *a1@<ecx>, int a2@<edi>)
{
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  const char *v9; // eax
  const char *v10; // ebx
  int v11; // edi
  const char *v12; // eax
  float v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+Ch] [ebp-14h]
  const char *v15; // [esp+18h] [ebp-8h]
  const char *v16; // [esp+1Ch] [ebp-4h]

  if ( !dword_10693628 || *(_BYTE *)(dword_10693628 + 812) )
  {
    if ( sub_1022FAF0(a1) )
    {
      sub_10232210((int)a1);
      v16 = (const char *)a1[206];
      if ( !v16 )
        v16 = String;
      v4 = a1[220];
      if ( v4 == -1 || off_1061BE18[4 * (a1[220] & 0xFFF) + 2] != (unsigned int)a1[220] >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (a1[220] & 0xFFF) + 1];
      v15 = *(const char **)(v5 + 260);
      if ( !v15 )
        v15 = String;
      if ( v4 == -1 || off_1061BE18[4 * (a1[220] & 0xFFF) + 2] != (unsigned int)a1[220] >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (a1[220] & 0xFFF) + 1];
      v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 72))(
             dword_106B31D0,
             *(_DWORD *)(v6 + 24),
             a2);
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
      v9 = sub_100D6390(a1);
      return DevMsg(2, "scripted_sequence %d:\"%s\" using NPC %d:\"%s\"(%s)\n", v8, v9, v7, v15, v16);
    }
    else
    {
      sub_102320D0((int)a1);
      v10 = (const char *)a1[206];
      if ( !v10 )
        v10 = String;
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
      v12 = sub_100D6390(a1);
      DevMsg(2, "scripted_sequence %d:\"%s\" can't find NPC \"%s\"\n", v11, v12, v10);
      v13 = *(float *)(dword_106B31C8 + 12) + 1.0;
      return sub_100EC4A0(a1, v13, 0);
    }
  }
  else
  {
    v14 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0(a1, v14, 0);
  }
}
