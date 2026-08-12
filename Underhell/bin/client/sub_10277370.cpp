void __userpurge sub_10277370(_BYTE *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  bool v6; // bl
  char v7; // al
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  char v11; // [esp+11h] [ebp-15h]
  int v12; // [esp+12h] [ebp-14h] BYREF
  _DWORD v13[2]; // [esp+16h] [ebp-10h] BYREF
  int v14; // [esp+1Eh] [ebp-8h]
  int v15; // [esp+22h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+26h] [ebp+0h]

  if ( a1[948] )
  {
    sub_10251920((int)a1, a2, a3, a5);
  }
  else
  {
    v6 = (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA68 + 60))(
           dword_1047CA68,
           79,
           a4,
           a2)
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
      || (v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84),
          HIBYTE(v12) = 0,
          v7) )
    {
      HIBYTE(v12) = 1;
    }
    v8 = *((_DWORD *)a1 + 244);
    v13[0] = 0;
    v13[1] = 0;
    v14 = 0;
    v15 = 0;
    retaddr = 0;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 852))(v8, v13);
    if ( !v6
      && !v11
      && !a1[969]
      && a1[968]
      && v14 == 1
      && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 788))(a1)
      && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 644))(a1) )
    {
      a1[970] = 1;
    }
    sub_1011A810(&v12);
    v9 = (_DWORD *)sub_10229D00(32);
    if ( v9 )
    {
      v10 = sub_1022B1A0(v9, (int)"MousePressed", "code", a5);
      sub_10236860(a1, v10);
    }
    else
    {
      sub_10236860(a1, 0);
    }
  }
}
