char *__usercall sub_1027B390@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>)
{
  char *result; // eax
  int v6; // edi
  bool v7; // zf
  char *v8; // eax
  int v9; // ecx
  int v10; // edx
  char v11; // bl
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // ebp
  int v21; // [esp+50h] [ebp-18h] BYREF
  int v22; // [esp+54h] [ebp-14h] BYREF
  int v23[3]; // [esp+58h] [ebp-10h] BYREF
  char *Str; // [esp+64h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+68h] [ebp+0h] BYREF
  int v27; // [esp+6Ch] [ebp+4h]

  result = (char *)sub_1024A6C0(a1);
  if ( *(_BYTE *)(a1 + 354) )
  {
    sub_102361D0((int (__thiscall ***)(void *, int, int))a1, (int)&v22, (int)&v21);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
      dword_1047CA6C,
      255,
      255,
      255,
      255);
    v6 = 0;
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 56))(
      dword_1047CA6C,
      0,
      0,
      v22,
      v21);
    result = (char *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 288) + 832))(
                       *(_DWORD *)(a1 + 288),
                       *(_DWORD *)(a1 + 296));
    v7 = *(_DWORD *)(a1 + 300) == 0;
    Str = result;
    if ( !v7 && (int)result > 0 )
    {
      do
      {
        v8 = (char *)(*(int (__thiscall **)(_DWORD, _DWORD, int, int, int, int))(**(_DWORD **)(a1 + 288) + 836))(
                       *(_DWORD *)(a1 + 288),
                       *(_DWORD *)(a1 + 296),
                       v6,
                       a3,
                       a2,
                       a4);
        v9 = *(_DWORD *)(a1 + 288);
        v10 = *(_DWORD *)(a1 + 296);
        Str = v8;
        v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 844))(v9, v10, v6);
        v12 = 0;
        v27 = (*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 288) + 848))(
                *(_DWORD *)(a1 + 288),
                *(_DWORD *)(a1 + 296),
                v6);
        if ( (v11 & 2) != 0 )
        {
          if ( !*(_DWORD *)(*(_DWORD *)(a1 + 288) + 348) )
            goto LABEL_11;
          v13 = sub_1022A800(*(_DWORD **)(a1 + 300), Str, 0);
          if ( !sub_10279000(*(_DWORD **)(*(_DWORD *)(a1 + 288) + 348), v13) || v13 <= 0 )
            goto LABEL_11;
          v14 = sub_10279020(*(_DWORD **)(*(_DWORD *)(a1 + 288) + 348), v13);
        }
        else
        {
          v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 844))(a1, v6);
        }
        v12 = v14;
LABEL_11:
        v23[0] = 0;
        retaddr = 0;
        if ( v12 )
          (*(void (__thiscall **)(int, int *, _UNKNOWN **))(*(_DWORD *)v12 + 8))(v12, v23, &retaddr);
        v15 = v27;
        if ( v27 < 0 )
          v15 = v23[0];
        v16 = dword_1047CA6C;
        v17 = *(_DWORD *)dword_1047CA6C;
        v22 += v15;
        a4 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))a1);
        a2 = v22;
        a3 = 0;
        result = (char *)(*(int (__thiscall **)(int, int))(v17 + 56))(v16, v22);
        ++v6;
      }
      while ( v6 < (int)Str );
    }
  }
  return result;
}
