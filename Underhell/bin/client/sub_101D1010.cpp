int __userpurge sub_101D1010@<eax>(
        _BYTE *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        _DWORD *a4,
        int a5,
        unsigned __int8 (__cdecl *a6)(_DWORD, int, int),
        int a7,
        int a8)
{
  int v8; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // ebp
  _BYTE *v19; // [esp+5Ch] [ebp-94h]
  int v20; // [esp+60h] [ebp-90h]
  char v21; // [esp+67h] [ebp-89h]
  unsigned int v22; // [esp+68h] [ebp-88h]
  float v23; // [esp+68h] [ebp-88h]
  unsigned int v24; // [esp+6Ch] [ebp-84h]
  unsigned int v25; // [esp+70h] [ebp-80h]
  unsigned int v26; // [esp+74h] [ebp-7Ch]
  unsigned int v27; // [esp+80h] [ebp-70h]
  int v28; // [esp+94h] [ebp-5Ch]
  _BYTE v30[12]; // [esp+9Ch] [ebp-54h] BYREF
  _BYTE v31[52]; // [esp+A8h] [ebp-48h] BYREF
  char v32[12]; // [esp+DCh] [ebp-14h] BYREF
  char v33[4]; // [esp+E8h] [ebp-8h] BYREF

  v8 = a4[1];
  if ( v8 != *(_DWORD *)(a5 + 4) )
    return 1;
  v10 = a4[2];
  if ( v10 != *(_DWORD *)(a5 + 8) )
    return 1;
  v11 = (unsigned int)(v8 + 3) >> 2;
  v12 = (unsigned int)(v10 + 3) >> 2;
  v26 = v11;
  v27 = v12;
  (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 20))(a1);
  (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 20))(a1);
  if ( (*(int (__thiscall **)(_DWORD *))(*a4 + 8))(a4) != 1 || (v21 = 1, a1[11]) )
    v21 = 0;
  v13 = 0;
  v25 = 0;
  if ( !v12 )
    return 0;
  v24 = 0;
  while ( 1 )
  {
    if ( v11 )
    {
      v14 = 4 * v13;
      v15 = 0;
      v22 = v26;
      do
      {
        if ( v21 )
        {
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *, int, int, _BYTE *))(*a4 + 28))(
            a4,
            v15,
            v14,
            4,
            4,
            v32,
            a3,
            a2,
            v19);
          (*(void (__thiscall **)(_BYTE *, char *, _BYTE *))(*(_DWORD *)a1 + 44))(a1, v33, v30 + 4 * a5 + 2);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a4 + 48))(a4, v15, v14, 4, 4, v33);
          (*(void (__thiscall **)(_BYTE *, char *, _BYTE *, int))(*(_DWORD *)a1 + 44))(
            a1,
            v33,
            v30 + 4 * (_DWORD)a6 + 2,
            v20);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *, int, int, _BYTE *))(*a4 + 20))(
            a4,
            v15,
            v14,
            4,
            4,
            v30,
            a3,
            a2,
            v19);
          (*(void (__thiscall **)(_BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)a1 + 40))(a1, v31, v30 + 4 * a5 + 2);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a4 + 40))(a4, v15, v14, 4, 4, v31);
          (*(void (__thiscall **)(_BYTE *, _BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 40))(
            a1,
            v31,
            v30 + 4 * (_DWORD)a6 + 2,
            v20);
        }
        v20 = 4;
        v19 = v30;
        a2 = v14;
        a3 = v15;
        (*(void (**)(void))(*(_DWORD *)v28 + 216))();
        v15 += 4;
        --v22;
      }
      while ( v22 );
      v11 = v26;
      v12 = v27;
    }
    if ( a6 )
    {
      v23 = (double)v24 * 100.0 / (double)(v11 * v12);
      if ( a6(LODWORD(v23), a7, a8) )
        break;
    }
    v24 += v11;
    v13 = ++v25;
    if ( v25 >= v12 )
      return 0;
  }
  return 2;
}
