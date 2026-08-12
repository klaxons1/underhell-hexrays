int __userpurge sub_10240560@<eax>(
        _BYTE *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  _BYTE *v9; // edi
  int result; // eax
  int v11; // ebp
  __int16 v12; // ax
  int v13; // ebx
  int v14; // esi
  int v15; // eax
  _DWORD *v16; // ebx
  bool v17; // cc
  int v18; // ebp
  int v19; // edi
  int (__thiscall **v20)(int, int, int); // esi
  int v21; // eax
  int (__thiscall ***v22)(_DWORD, _DWORD, int); // eax
  int v23; // edi
  void (__thiscall **v24)(int, int); // esi
  int v25; // eax
  int v26; // edi
  int (__thiscall **v27)(int, int, int); // esi
  int v28; // eax
  int v29; // eax
  int v30; // ebp
  int v31; // edi
  int (__thiscall **v32)(int, int, int); // esi
  int v33; // eax
  int (__thiscall ***v34)(_DWORD); // eax
  int v35; // edi
  void (__thiscall **v36)(int); // esi
  unsigned int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // ecx
  int v41; // [esp+8Ch] [ebp-2Ch]
  char v42; // [esp+9Fh] [ebp-19h]
  int v43; // [esp+A0h] [ebp-18h]
  float v44; // [esp+A4h] [ebp-14h]
  _BYTE *v45; // [esp+A8h] [ebp-10h]
  int v46; // [esp+B4h] [ebp-4h] BYREF
  int retaddr; // [esp+B8h] [ebp+0h] BYREF

  v9 = a1;
  result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 128))(a1);
  if ( (_BYTE)result )
  {
    v44 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA6C + 424))(dword_1047CA6C);
    if ( (v9[80] & 2) != 0 )
    {
      if ( !(_BYTE)a6 )
        goto LABEL_7;
      LOBYTE(a5) = 1;
    }
    if ( (_BYTE)a6 )
      *((_WORD *)v9 + 40) &= ~2u;
LABEL_7:
    v11 = (**(int (__thiscall ***)(_BYTE *, int, int, int))v9)(v9, a4, a3, a2);
    v45 = (_BYTE *)v11;
    (*(void (__thiscall **)(int, int, int *, int *, int *, int *))(*(_DWORD *)dword_1047CA70 + 44))(
      dword_1047CA70,
      v11,
      &v46,
      &retaddr,
      &a5,
      &a6);
    if ( a5 <= v46 || a6 <= retaddr )
      LOBYTE(a8) = 0;
    (*(void (__stdcall **)(float))(*(_DWORD *)dword_1047CA6C + 420))(COERCE_FLOAT(LODWORD(v44)));
    if ( *((_DWORD *)v9 + 19)
      && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)v9 + 19) + 36))(*((_DWORD *)v9 + 19)) )
    {
      if ( !(_BYTE)a8 )
        goto LABEL_22;
      if ( (v9[80] & 4) != 0 && *((_DWORD *)v9 + 19) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 32))(dword_1047CA6C, v11, 0);
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 496))(v9);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 36))(dword_1047CA6C, v11);
      }
    }
    if ( (_BYTE)a8 )
    {
      v12 = *((_WORD *)v9 + 40);
      if ( (v12 & 0x18) != 0 )
      {
        if ( (v12 & 8) != 0 )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 32))(dword_1047CA6C, v11, 0);
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 488))(v9);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 36))(dword_1047CA6C, v11);
        }
        if ( (v9[80] & 0x10) != 0 )
        {
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 32))(dword_1047CA6C, v11, 1);
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 492))(v9);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 36))(dword_1047CA6C, v11);
        }
      }
    }
LABEL_22:
    v13 = 0;
    v43 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 68))(dword_1047CA70, v11);
    if ( v43 > 0 )
    {
      do
      {
        v14 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA70 + 72))(
                dword_1047CA70,
                v11,
                v13,
                v41);
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 312))(dword_1047CA6C, v14) )
        {
          v41 = a9;
          (*(void (__stdcall **)(int, int))(*(_DWORD *)dword_1047CA70 + 160))(v14, a8);
        }
        else
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 196))(dword_1047CA6C, v14);
          v41 = 0;
          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_1047CA70 + 160))(v14, 0);
        }
        ++v13;
      }
      while ( v13 < v43 );
    }
    if ( !v42 )
    {
      if ( !(_BYTE)a7 )
      {
LABEL_59:
        (*(void (__cdecl **)())(*(_DWORD *)dword_1047CA6C + 420))();
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 192))(dword_1047CA6C, v11);
      }
      if ( (v9[80] & 4) != 0 && *((_DWORD *)v9 + 19) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 32))(dword_1047CA6C, v11, 0);
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 496))(v9);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 36))(dword_1047CA6C, v11);
      }
    }
    if ( (_BYTE)a7 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 288))(v9) )
      {
        v15 = sub_10240220((unsigned int *)v9 + 33);
        v16 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 56))(v15);
        v17 = v16[3] <= 0;
        a7 = 0;
        if ( !v17 )
        {
          do
          {
            v18 = 4 * a7;
            if ( *(_DWORD *)(4 * a7 + *v16) == -1
              || (a8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
                         dword_1047CA74,
                         *(_DWORD *)(4 * a7 + *v16))) == 0 )
            {
              v22 = 0;
            }
            else
            {
              v19 = dword_1047CA70;
              v20 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
              v21 = sub_10278FB0();
              v22 = (int (__thiscall ***)(_DWORD, _DWORD, int))(*v20)(v19, a8, v21);
            }
            v23 = dword_1047CA6C;
            v24 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 32);
            v25 = (**v22)(v22, 0, v41);
            (*v24)(v23, v25);
            if ( *(_DWORD *)(v18 + *v16) == -1
              || (a9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
                         dword_1047CA74,
                         *(_DWORD *)(v18 + *v16))) == 0 )
            {
              v29 = 0;
            }
            else
            {
              v26 = dword_1047CA70;
              v27 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
              v28 = sub_10278FB0();
              v29 = (*v27)(v26, a9, v28);
            }
            (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 500))(v29);
            if ( *(_DWORD *)(v18 + *v16) == -1
              || (v30 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
                          dword_1047CA74,
                          *(_DWORD *)(v18 + *v16))) == 0 )
            {
              v34 = 0;
            }
            else
            {
              v31 = dword_1047CA70;
              v32 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
              v33 = sub_10278FB0();
              v34 = (int (__thiscall ***)(_DWORD))(*v32)(v31, v30, v33);
            }
            v35 = dword_1047CA6C;
            v36 = (void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 36);
            v41 = (**v34)(v34);
            (*v36)(v35);
            v17 = ++a7 < v16[3];
          }
          while ( v17 );
          v11 = LODWORD(v44);
          v9 = v45;
        }
        v37 = *((_DWORD *)v9 + 33);
        if ( v37 == -1
          || (v38 = v37 & 0xFFFFF, (v37 & 0xFFFFF) >= dword_10481998)
          || (v39 = *(_DWORD *)(dword_1048198C + 8 * v38), ((v39 ^ (v37 >> 20) & 0x7FF) & 0x7FFFFFFF) != 0)
          || (v39 & 0x80000000) == 0x80000000 )
        {
          v40 = 0;
        }
        else
        {
          v40 = *(_DWORD *)(dword_1048198C + 8 * v38 + 4);
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 72))(v40);
      }
      if ( (v9[80] & 0x20) != 0 )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 32))(dword_1047CA6C, v11, 0);
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v9 + 504))(v9);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 36))(dword_1047CA6C, v11);
      }
    }
    goto LABEL_59;
  }
  return result;
}
