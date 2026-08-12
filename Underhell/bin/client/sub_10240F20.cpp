void __userpurge sub_10240F20(unsigned int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax
  bool v6; // bl
  char v7; // al
  int v8; // ebp
  int v9; // eax
  char v10; // bl
  void (__thiscall *v11)(unsigned int *, int); // edx
  int v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  char v15; // [esp+15h] [ebp-1h]
  _UNKNOWN *retaddr; // [esp+16h] [ebp+0h]

  v5 = (*(int (__thiscall **)(unsigned int *))*a1)(a1);
  if ( sub_10236A90(a2, v5) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 532))(a1) )
    {
      v6 = (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA68 + 60))(
             dword_1047CA68,
             79,
             a2,
             a3)
        || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80);
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
        || (HIBYTE(retaddr) = 0,
            (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84)) )
      {
        HIBYTE(retaddr) = 1;
      }
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
        || (v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82)) != 0 )
      {
        v7 = 1;
      }
      v8 = v6;
      if ( v15 )
        v8 |= 2u;
      if ( v7 )
        v8 |= 4u;
      if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 288))(a1) )
      {
        v9 = sub_10240220(a1 + 33);
        (*(void (__thiscall **)(int, int, unsigned int *))(*(_DWORD *)v9 + 84))(v9, a4, a1);
      }
      else if ( byte_1047CAD8 || !(*(unsigned __int8 (__thiscall **)(unsigned int *, int, int))(*a1 + 440))(a1, a4, v8) )
      {
        v10 = byte_1047CAD8;
        v11 = *(void (__thiscall **)(unsigned int *, int))(*a1 + 468);
        byte_1047CAD8 = 1;
        v11(a1, a4);
        byte_1047CAD8 = v10;
      }
    }
    else
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 24))(dword_1047CA6C);
      if ( (*(int (__thiscall **)(unsigned int *))*a1)(a1) == v12 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 220))(dword_1047CA68, a4);
      v13 = (_DWORD *)sub_10229D00(32);
      if ( v13 )
      {
        v14 = sub_1022B1A0(v13, (int)"KeyCodeTyped", "code", a4);
        sub_10236860(a1, v14);
      }
      else
      {
        sub_10236860(a1, 0);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 220))(dword_1047CA68, a4);
  }
}
