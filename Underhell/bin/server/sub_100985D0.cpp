void __userpurge sub_100985D0(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4, char a5)
{
  int v6; // ecx
  _DWORD *v7; // edi
  int v8; // ebx
  unsigned int v9; // eax
  int v10; // ecx
  const char *v11; // eax
  int v12; // [esp+10h] [ebp-38h]
  char v13; // [esp+10h] [ebp-38h]
  float v14; // [esp+10h] [ebp-38h]
  int v15; // [esp+14h] [ebp-34h]
  const char *v16; // [esp+14h] [ebp-34h]
  _DWORD v18[5]; // [esp+24h] [ebp-24h] BYREF
  unsigned int v19; // [esp+38h] [ebp-10h]
  char ArgList[4]; // [esp+40h] [ebp-8h]
  unsigned int v21; // [esp+44h] [ebp-4h]

  if ( a3 )
  {
    v18[4] = 0;
    LOBYTE(v18[0]) = 0;
    *(_DWORD *)ArgList = 0;
    v19 = 15;
    v21 = -1;
    a1[1098] = a4;
    if ( sub_10098560(a1, a3, v18, a5) )
    {
      if ( *(_DWORD *)(dword_1069388C + 48) )
      {
        v15 = sub_100D6390(a3);
        v12 = sub_100D6390(a1);
        if ( a5 )
          Warning("Q&A: '%s' answered the Hello from '%s'\n", v12, v15);
        else
          Warning("Q&A: '%s' answered the Question from '%s'\n", v12, v15);
      }
      if ( v21 == -1 || off_1061BE18[4 * (v21 & 0xFFF) + 2] != v21 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (v21 & 0xFFF) + 1];
      if ( v6 )
        a1[1093] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      else
        a1[1093] = -1;
      v7 = (_DWORD *)v18[0];
      if ( v19 < 0x10 )
        v7 = v18;
      v13 = ArgList[0];
      v8 = *(_DWORD *)ArgList;
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 1656))(a1, v7);
      if ( (unsigned __int8)sub_100B0150(v13, 0, a2) )
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 2248))(a1, v7, v8);
      v9 = a1[1093];
      if ( v9 == -1 || off_1061BE18[4 * (a1[1093] & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (a1[1093] & 0xFFF) + 1];
      sub_100D7680(v10);
      v14 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 10.0);
      sub_10092A80(v14, COERCE_INT(20.0));
    }
    else if ( *(_DWORD *)(dword_1069388C + 48) )
    {
      v16 = (const char *)sub_100D6390(a3);
      v11 = (const char *)sub_100D6390(a1);
      Warning("Q&A: '%s' couldn't answer '%s'\n", v11, v16);
    }
    if ( v19 >= 0x10 )
      sub_10184660(v18[0]);
  }
}
