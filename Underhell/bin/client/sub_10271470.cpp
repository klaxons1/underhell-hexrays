char __userpurge sub_10271470@<al>(int *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, _DWORD *a5, int a6)
{
  int v7; // eax
  char result; // al
  _DWORD *v9; // eax
  int v10; // ebp
  _DWORD *v11; // ebx
  int v12; // edi
  int v13; // ebx
  int v14; // ebp
  void (__thiscall **v15)(int, int, int, int); // edi
  int v16; // eax
  int v18; // [esp+1Ch] [ebp-14h]
  _DWORD *v19; // [esp+2Ch] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+30h] [ebp+0h]

  v7 = *a1;
  if ( (_BYTE)a5 == 1 )
  {
    result = (*(int (**)(void))(v7 + 204))();
    if ( !result )
      return result;
    (*(void (__thiscall **)(int *, int, int, int))(*a1 + 248))(a1, a1[95], a4, a3);
    v9 = (_DWORD *)sub_10229D00(32);
    v10 = 0;
    if ( v9 )
    {
      v11 = sub_10229D20(v9, (int)"RadioButtonChecked");
      v19 = v11;
    }
    else
    {
      v19 = 0;
      v11 = 0;
    }
    sub_1022ACE0(v11, "panel", (int)a1);
    sub_1022ACA0(v11, "tabposition", a1[95]);
    v12 = (*(int (__thiscall **)(int *))(*a1 + 148))(a1);
    a5 = (_DWORD *)v12;
    if ( v12 )
    {
      retaddr = 0;
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70, v12) > 0 )
      {
        do
        {
          v13 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA70 + 72))(
                  dword_1047CA70,
                  v12,
                  v10,
                  a2);
          if ( v13 != (*(int (__thiscall **)(int *))*a1)(a1) )
          {
            v14 = dword_1047CA74;
            v15 = (void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA74 + 80);
            v18 = (*(int (__thiscall **)(int *, _DWORD))*a1)(a1, 0.0);
            v16 = sub_1022AD00(a5);
            (*v15)(v14, v13, v16, v18);
            v12 = a6;
            v10 = (int)a5;
          }
          ++v10;
          a2 = v12;
          a5 = (_DWORD *)v10;
        }
        while ( v10 < (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70) );
        v11 = v19;
      }
    }
    (*(void (__thiscall **)(int *, _DWORD))(*a1 + 48))(a1, 0);
    (*(void (__thiscall **)(int *, _DWORD *))(*a1 + 180))(a1, v11);
  }
  else
  {
    if ( (*(int (**)(void))(v7 + 68))() )
      a1[95] = (*(int (__thiscall **)(int *))(*a1 + 68))(a1);
    (*(void (__thiscall **)(int *, _DWORD))(*a1 + 248))(a1, 0);
  }
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*a1 + 244))(a1, 0, 0);
  (*(void (__thiscall **)(int *))(*a1 + 16))(a1);
  return sub_1025B670(a1, (char)a5);
}
