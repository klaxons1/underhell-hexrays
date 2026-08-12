int __userpurge sub_101D1280@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // ebp
  int v13; // edx
  void (__thiscall *v14)(_DWORD *, int, int); // edx
  _BYTE *v18; // [esp+6Ch] [ebp-17Ch]
  _BYTE *v19; // [esp+6Ch] [ebp-17Ch]
  unsigned int v20; // [esp+7Ch] [ebp-16Ch]
  unsigned int v21; // [esp+80h] [ebp-168h]
  int v22; // [esp+84h] [ebp-164h]
  unsigned int i; // [esp+88h] [ebp-160h]
  unsigned int v24; // [esp+90h] [ebp-158h]
  _BYTE v25[28]; // [esp+94h] [ebp-154h] BYREF
  _BYTE v26[64]; // [esp+B0h] [ebp-138h] BYREF
  _BYTE v27[64]; // [esp+F0h] [ebp-F8h] BYREF
  _BYTE v28[64]; // [esp+130h] [ebp-B8h] BYREF
  _BYTE v29[64]; // [esp+170h] [ebp-78h] BYREF
  _DWORD v30[4]; // [esp+1B0h] [ebp-38h] BYREF
  _BYTE v31[16]; // [esp+1C0h] [ebp-28h] BYREF
  _BYTE v32[16]; // [esp+1D0h] [ebp-18h] BYREF
  char v33[4]; // [esp+1E0h] [ebp-8h] BYREF

  v6 = a4[1];
  if ( v6 != a5[1] )
    return 1;
  v7 = a4[2];
  if ( v7 != a5[2] )
    return 1;
  v8 = (unsigned int)(v6 + 3) >> 2;
  v9 = (unsigned int)(v7 + 3) >> 2;
  v21 = v8;
  v24 = v9;
  v22 = (*(int (__thiscall **)(int *))(*a1 + 20))(a1) != 12 ? 0 : 2;
  (*(int (__thiscall **)(int *))(*a1 + 20))(a1);
  (*(int (__thiscall **)(_DWORD *))(*a5 + 8))(a5);
  v10 = 0;
  for ( i = 0; v10 < v9; i = v10 )
  {
    if ( v8 )
    {
      v11 = 4 * v10;
      v12 = 0;
      v20 = v21;
      do
      {
        (*(void (__thiscall **)(_DWORD *, int, int, _BYTE *, int, int, int, _BYTE *))(*a4 + 212))(
          a4,
          v12,
          v11,
          v25,
          4,
          a3,
          a2,
          v18);
        v13 = *a1;
        v19 = &v25[4 * v24 + 12];
        if ( HIBYTE(v21) )
        {
          (*(void (__thiscall **)(int *, _BYTE *, _BYTE *))(v13 + 84))(a1, v32, v19);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a5 + 108))(a5, v12, v11, 4, 4, v32);
          (*(void (__thiscall **)(int *, _BYTE *, _BYTE *))(*a1 + 84))(a1, v31, &v25[4 * v22 + 12]);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a5 + 128))(a5, v12, v11, 4, 4, v31);
          (*(void (__thiscall **)(int *, _BYTE *, _BYTE *, char *))(*a1 + 124))(a1, v32, v31, v33);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a5 + 148))(a5, v12, v11, 4, 4, v33);
          memset(v30, 0, sizeof(v30));
          v14 = *(void (__thiscall **)(_DWORD *, int, int))(*a5 + 168);
          v18 = v30;
        }
        else
        {
          (*(void (__thiscall **)(int *, _BYTE *, _BYTE *))(v13 + 80))(a1, v27, v19);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a5 + 96))(a5, v12, v11, 4, 4, v27);
          (*(void (__thiscall **)(int *, _BYTE *, _BYTE *))(*a1 + 80))(a1, v26, &v25[4 * v22 + 12]);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a5 + 116))(a5, v12, v11, 4, 4, v26);
          (*(void (__thiscall **)(int *, _BYTE *, _BYTE *, _BYTE *))(*a1 + 120))(a1, v27, v26, v29);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a5 + 136))(a5, v12, v11, 4, 4, v29);
          memset(v28, 0, sizeof(v28));
          v14 = *(void (__thiscall **)(_DWORD *, int, int))(*a5 + 156);
          v18 = v28;
        }
        a2 = 4;
        a3 = 4;
        v14(a5, v12, v11);
        v12 += 4;
        --v20;
      }
      while ( v20 );
      v8 = v21;
      v9 = v24;
      v10 = i;
    }
    ++v10;
  }
  return 0;
}
