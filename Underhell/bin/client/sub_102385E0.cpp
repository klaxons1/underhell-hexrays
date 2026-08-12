int __userpurge sub_102385E0@<eax>(
        int *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int result; // eax
  int v16; // edx
  void (__thiscall *v17)(int *, int *, float *, int, int, int); // edx
  int v18; // ebx
  void (__thiscall *v19)(int, int, int, int, int); // eax
  int v20; // [esp+8Ch] [ebp-4h] BYREF

  result = -1;
  if ( a1[44] != -1 && a1[46] != -1 && a1[48] != -1 && a1[50] != -1 )
  {
    v16 = *a1;
    v20 = HIBYTE(a9);
    v17 = *(void (__thiscall **)(int *, int *, float *, int, int, int))(v16 + 664);
    v20 = (int)((double)HIBYTE(a9) * a10);
    HIBYTE(a9) = v20;
    v17(a1, &v20, &a10, a3, a4, a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, a12);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
      dword_1047CA6C,
      a8 + a6,
      a9,
      LODWORD(a10) + a8 - a6,
      a9 + a13);
    v18 = a11;
    if ( (_BYTE)a14 )
    {
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        a8,
        a9 + a13,
        a8 + a6,
        a11 + a9 - a13);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
        dword_1047CA6C,
        LODWORD(a10) + a8 - a6,
        a9 + a13,
        a8 + LODWORD(a10),
        v18 + a9 - a13);
    }
    else
    {
      v19 = *(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48);
      a14 = a8 + LODWORD(a10);
      v19(dword_1047CA6C, a8, a9 + a13, a8 + LODWORD(a10), a11 + a9 - a13);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 48))(dword_1047CA6C, a8 + a6);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, a1[44]);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
      dword_1047CA6C,
      a8,
      a9,
      a8 + v20,
      a9 + LODWORD(a10));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, a1[46]);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
      dword_1047CA6C,
      a7 + a8 - v20,
      a9,
      a8 + a7,
      a9 + LODWORD(a10));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, a1[48]);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
      dword_1047CA6C,
      a7 + a8 - v20,
      v18 + a9 - LODWORD(a10),
      a8 + a7,
      a9 + v18);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, a1[50]);
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
             dword_1047CA6C,
             a8,
             v18 + a9 - LODWORD(a10),
             a8 + v20,
             a9 + v18);
  }
  return result;
}
