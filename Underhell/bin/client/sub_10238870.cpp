void __userpurge sub_10238870(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        char a17,
        char a18)
{
  bool v19; // zf
  int v20; // esi
  int v21; // edx
  int v22; // edi
  float v23; // ebx
  int v24; // ebp
  void (__stdcall *v25)(_DWORD, int); // eax
  int v26; // [esp+A4h] [ebp-14h]
  int v27; // [esp+A8h] [ebp-10h] BYREF
  int v28; // [esp+ACh] [ebp-Ch] BYREF
  _DWORD *v29; // [esp+B0h] [ebp-8h]
  int v30; // [esp+B4h] [ebp-4h]
  char *retaddr; // [esp+B8h] [ebp+0h]

  v19 = a1[44] == -1;
  v29 = a1;
  if ( !v19
    && a1[46] != -1
    && a1[48] != -1
    && a1[50] != -1
    && ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA6C + 424))(dword_1047CA6C) != 0.0 )
  {
    v30 = (int)((double)HIBYTE(a9) * a10);
    HIBYTE(a9) = v30;
    (*(void (__thiscall **)(_DWORD *, int *, int *, int, int, int))(*a1 + 664))(a1, &v28, &v27, a4, a3, a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, a12);
    v20 = a9;
    v21 = *(_DWORD *)dword_1047CA6C;
    if ( (_BYTE)a16 )
    {
      v24 = a11;
      v22 = a8;
      (*(void (__stdcall **)(int, int, char *, int, int, int, int))(v21 + 456))(
        a8,
        a9 + v30,
        &retaddr[a8],
        a11 + a9 - v30,
        a14,
        a14,
        a16);
      v23 = a10;
      if ( !a17 )
        (*(void (__thiscall **)(int, char *, int, int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 456))(
          dword_1047CA6C,
          &retaddr[a8],
          a9,
          LODWORD(a10) + a8 - (_DWORD)retaddr,
          a9 + a11,
          a14,
          a15,
          a16);
      (*(void (__thiscall **)(int, int, int, int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 456))(
        dword_1047CA6C,
        LODWORD(a10) + a8 - (_DWORD)retaddr,
        a9 + v30,
        a8 + LODWORD(a10),
        a11 + a9 - v30,
        a15,
        a15,
        a16);
    }
    else
    {
      v22 = a8;
      v23 = a10;
      (*(void (__stdcall **)(char *, int, int, int, int, int, _DWORD, int))(v21 + 456))(
        &retaddr[a8],
        a9,
        LODWORD(a10) + a8 - (_DWORD)retaddr,
        a9 + v30,
        a14,
        a14,
        0,
        v26);
      v26 = 0;
      v24 = a12;
      if ( a18 )
      {
        (*(void (__thiscall **)(int, int, char *, int, int, int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 456))(
          dword_1047CA6C,
          a8,
          &retaddr[a9],
          (int)a5 + a8,
          a12 + a9 - (_DWORD)retaddr,
          a14,
          a16,
          0);
        v26 = 0;
        (*(void (__stdcall **)(int, char *, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 456))(
          LODWORD(a10) + a8 - (_DWORD)a5,
          &retaddr[a9],
          a8 + LODWORD(a10),
          a12 + a9 - (_DWORD)retaddr,
          a15,
          a16);
      }
      else
      {
        (*(void (__stdcall **)(int, char *, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 456))(
          a8,
          &retaddr[a9],
          a8 + LODWORD(a10),
          a12 + a9 - (_DWORD)retaddr,
          a14,
          a16);
      }
      (*(void (__thiscall **)(int, char *, int, int, int, int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 456))(
        dword_1047CA6C,
        &retaddr[a8],
        a12 + a9 - v30,
        LODWORD(a10) + a8 - (_DWORD)retaddr,
        a9 + a12,
        a15,
        a15,
        0);
    }
    HIBYTE(a12) = (int)((double)(unsigned int)a14 * 0.0039215689 * (double)HIBYTE(a12));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, a12);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, a5[44]);
    (*(void (__thiscall **)(int, int, int, char *, int))(*(_DWORD *)dword_1047CA6C + 136))(
      dword_1047CA6C,
      v22,
      a9,
      &retaddr[v22],
      a9 + v30);
    v25 = *(void (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_1047CA6C + 128);
    if ( (_BYTE)a16 )
    {
      v25(a5[50], v26);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 136))(dword_1047CA6C);
      HIBYTE(a9) = a12;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, a9);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, v29[46]);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        LODWORD(v23) + v22 - v28,
        v20,
        v22 + LODWORD(v23),
        v20 + v27);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, v29[48]);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        LODWORD(v23) + v22 - v28,
        v24 + v20 - v27,
        v22 + LODWORD(v23),
        v20 + v24);
    }
    else
    {
      v25(a5[46], v26);
      (*(void (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        LODWORD(v23) + v22 - (_DWORD)a5,
        a9,
        v22 + LODWORD(v23),
        &retaddr[a9]);
      HIBYTE(a9) = a12;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, a9);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, v29[48]);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        LODWORD(v23) + v22 - v28,
        v24 + v20 - v27,
        v22 + LODWORD(v23),
        v20 + v24);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, v29[50]);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        v22,
        v24 + v20 - v27,
        v22 + v28,
        v20 + v24);
    }
  }
}
