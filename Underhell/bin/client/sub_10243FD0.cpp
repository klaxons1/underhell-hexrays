char __usercall sub_10243FD0@<al>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  _BYTE *v3; // eax
  int v4; // edx
  int v5; // eax
  int (__thiscall ***v6)(_DWORD); // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int (__thiscall ***v11)(_DWORD); // edi
  int v12; // ebp
  void (__thiscall **v13)(int, int); // ebx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // ebp
  int (__thiscall **v22)(int, int, int); // ebx
  int v23; // eax
  _BYTE *v24; // ebp
  int v25; // esi
  int v26; // ebx
  int i; // [esp+58h] [ebp-Ch] BYREF
  int v29; // [esp+5Ch] [ebp-8h] BYREF
  int v30; // [esp+60h] [ebp-4h] BYREF

  v3 = (_BYTE *)a1[9];
  if ( *v3 && v3[1] )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v30, &v29);
    *(_DWORD *)(a1[9] + 16) = v30;
    *(_DWORD *)(a1[9] + 20) = v29;
    v4 = a1[9];
    if ( !*(_BYTE *)(v4 + 2) )
    {
      LOBYTE(v3) = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int))(*a1 + 652))(
                     a1,
                     *(_DWORD *)(v4 + 8),
                     *(_DWORD *)(v4 + 12),
                     v30,
                     v29);
      if ( !(_BYTE)v3 )
        return (char)v3;
      *(_BYTE *)(a1[9] + 2) = 1;
      (*(void (__thiscall **)(_DWORD *))(*a1 + 692))(a1);
    }
    if ( !sub_102393B0(&dword_103FCF20) )
    {
      v5 = sub_100DDA40(228);
      if ( v5 )
        v6 = (int (__thiscall ***)(_DWORD))sub_10243D30(v5);
      else
        v6 = 0;
      sub_102393F0(&dword_103FCF20, v6);
      v7 = sub_102393B0(&dword_103FCF20);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 524))(v7, 0);
      v8 = sub_102393B0(&dword_103FCF20);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 520))(v8, 0);
    }
    v3 = (_BYTE *)sub_102393B0(&dword_103FCF20);
    if ( v3 )
    {
      v9 = sub_102393B0(&dword_103FCF20);
      sub_1023FD90(v9, a2, (int)a1);
      v10 = a1[9];
      i = *(_DWORD *)(v10 + 72);
      *(_DWORD *)(v10 + 72) = -1;
      v11 = (int (__thiscall ***)(_DWORD))sub_10240000(a1);
      if ( v11 )
        v11 = (int (__thiscall ***)(_DWORD))((int (__thiscall *)(int (__thiscall ***)(_DWORD), int))(*v11)[159])(
                                              v11,
                                              a1[9] + 24);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 200))(dword_1047CA6C, 13);
      if ( v11 && (v11 != a1 || sub_1023BDE0(a1[9] + 24)) )
      {
        sub_102393F0((_DWORD *)(a1[9] + 72), v11);
        v12 = dword_1047CA6C;
        v13 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 200);
        v14 = ((int (__thiscall *)(int (__thiscall ***)(_DWORD), int))(*v11)[162])(v11, a1[9] + 24);
        (*v13)(v12, v14);
      }
      v15 = sub_10237C80((_DWORD *)(a1[9] + 72));
      if ( v15 != sub_10237C80(&i) )
      {
        if ( sub_10237C80(&i) )
        {
          v16 = sub_102393B0(&i);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 632))(v16, a1[9] + 24);
        }
        if ( sub_10237C80((_DWORD *)(a1[9] + 72)) )
        {
          v17 = sub_102393B0((_DWORD *)(a1[9] + 72));
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 628))(v17, a1[9] + 24);
          v18 = sub_102393B0((_DWORD *)(a1[9] + 72));
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 596))(v18, a1[9] + 24);
          *(_DWORD *)(a1[9] + 76) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
          *(_BYTE *)(a1[9] + 80) = 0;
        }
        if ( sub_102393B0((_DWORD *)(a1[9] + 84)) )
        {
          v19 = sub_102393B0((_DWORD *)(a1[9] + 84));
          if ( v19 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v19 + 120))(v19, 1);
        }
      }
      LOBYTE(v3) = sub_10239430((_DWORD *)(a1[9] + 72));
      if ( (_BYTE)v3 )
      {
        v3 = (_BYTE *)sub_102393B0((_DWORD *)(a1[9] + 84));
        if ( v3 )
        {
          v20 = sub_102393B0((_DWORD *)(a1[9] + 84));
          i = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v20 + 20))(v20, v30, v29, 0);
          if ( i )
          {
            v21 = dword_1047CA70;
            v22 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
            v23 = (*(int (__thiscall **)(_DWORD *))(*a1 + 104))(a1);
            v3 = (_BYTE *)(*v22)(v21, i, v23);
            v24 = v3;
            if ( v3 )
            {
              v3 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 932))(v20);
              v25 = 0;
              for ( i = (int)v3; v25 < i; ++v25 )
              {
                v26 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v20 + 936))(v20, v25);
                v3 = (_BYTE *)sub_1026B780(v26);
                if ( v3 == v24 )
                  LOBYTE(v3) = sub_1026C340(v26);
              }
            }
          }
          else
          {
            LOBYTE(v3) = sub_1026BA50(v20);
          }
        }
      }
    }
  }
  return (char)v3;
}
