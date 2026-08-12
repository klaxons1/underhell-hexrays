int __userpurge sub_101D90B0@<eax>(
        int a1@<ecx>,
        char *a2@<ebx>,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int8 (__cdecl *a5)(_DWORD, int, int),
        int a6,
        int a7)
{
  int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // ebx
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  void (__thiscall **v16)(int, float *); // ebp
  float *v17; // eax
  int v20; // [esp+3Ch] [ebp-174h]
  char v21; // [esp+4Bh] [ebp-165h]
  unsigned int v22; // [esp+4Ch] [ebp-164h]
  float v23; // [esp+4Ch] [ebp-164h]
  unsigned int v24; // [esp+50h] [ebp-160h]
  unsigned int v25; // [esp+54h] [ebp-15Ch]
  unsigned int v26; // [esp+58h] [ebp-158h]
  unsigned int v27; // [esp+5Ch] [ebp-154h]
  char v28[8]; // [esp+60h] [ebp-150h] BYREF
  char v29; // [esp+68h] [ebp-148h] BYREF
  char v30[8]; // [esp+70h] [ebp-140h] BYREF
  _BYTE v31[56]; // [esp+78h] [ebp-138h] BYREF
  char v32[8]; // [esp+B0h] [ebp-100h] BYREF
  float v33[62]; // [esp+B8h] [ebp-F8h] BYREF

  v8 = a3[1];
  if ( v8 != a4[1] )
    return 1;
  v9 = a3[2];
  if ( v9 != a4[2] )
    return 1;
  v10 = (unsigned int)(v8 + 3) >> 2;
  v11 = (unsigned int)(v9 + 3) >> 2;
  v26 = v10;
  v27 = v11;
  if ( (*(int (**)(void))(*a3 + 8))() != 1 || (v21 = 1, *(_BYTE *)(a1 + 11)) )
    v21 = 0;
  v12 = 0;
  v22 = 0;
  if ( !v11 )
    return 0;
  v24 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      v13 = 4 * v12;
      v14 = 0;
      v25 = v10;
      do
      {
        v15 = *(_DWORD *)a1;
        if ( v21 )
        {
          (*(void (__thiscall **)(int, _DWORD *, int, int, char *, char *, int))(v15 + 124))(
            a1,
            a3,
            v14,
            v13,
            v30,
            a2,
            v20);
          v16 = (void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 68);
          v20 = sub_101D8970(a1, (int)v31);
          v17 = (float *)v31;
        }
        else
        {
          (*(void (__thiscall **)(int, _DWORD *, int, int, char *, char *, int))(v15 + 120))(
            a1,
            a3,
            v14,
            v13,
            v32,
            a2,
            v20);
          v16 = (void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 64);
          v20 = sub_101D8D50(a1, v33);
          v17 = v33;
        }
        a2 = &v29;
        (*v16)(a1, v17);
        (*(void (__thiscall **)(_DWORD *, int, int, char *, int))(*a4 + 216))(a4, v14, v13, v28, 4);
        v14 += 4;
        --v25;
      }
      while ( v25 );
      v10 = v26;
      v11 = v27;
      v12 = v22;
    }
    if ( a5 )
    {
      v23 = (double)v24 * 100.0 / (double)(v10 * v11);
      if ( a5(LODWORD(v23), a6, a7) )
        break;
    }
    v24 += v10;
    v22 = ++v12;
    if ( v12 >= v11 )
      return 0;
  }
  return 2;
}
