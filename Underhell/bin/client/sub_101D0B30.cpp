int __userpurge sub_101D0B30@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        _BYTE *a3@<esi>,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int8 (__cdecl *a6)(_DWORD, int, int),
        int a7,
        int a8)
{
  int v8; // eax
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // eax
  int v14; // edi
  int v15; // esi
  unsigned int i; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  unsigned int j; // eax
  char v26; // [esp+4Fh] [ebp-2A9h]
  unsigned int v27; // [esp+50h] [ebp-2A8h]
  float v28; // [esp+54h] [ebp-2A4h]
  unsigned int v29; // [esp+5Ch] [ebp-29Ch]
  unsigned int v30; // [esp+60h] [ebp-298h]
  unsigned int v31; // [esp+64h] [ebp-294h]
  char v32[8]; // [esp+68h] [ebp-290h] BYREF
  _BYTE v33[8]; // [esp+70h] [ebp-288h] BYREF
  _BYTE v34[72]; // [esp+78h] [ebp-280h] BYREF
  _DWORD v35[16]; // [esp+C0h] [ebp-238h] BYREF
  _BYTE v36[248]; // [esp+100h] [ebp-1F8h] BYREF
  _BYTE v37[256]; // [esp+1F8h] [ebp-100h] BYREF

  v8 = a4[1];
  if ( v8 != a5[1] )
    return 1;
  v10 = a4[2];
  if ( v10 != a5[2] )
    return 1;
  v11 = (unsigned int)(v8 + 3) >> 2;
  v12 = (unsigned int)(v10 + 3) >> 2;
  v31 = v11;
  v30 = v12;
  if ( (*(int (__thiscall **)(_DWORD *))(*a4 + 8))(a4) != 1 || (v26 = 1, *(_BYTE *)(a1 + 11)) )
    v26 = 0;
  v13 = 0;
  v29 = 0;
  if ( !v12 )
    return 0;
  v27 = 0;
  while ( 1 )
  {
    if ( v11 )
    {
      v14 = 4 * v13;
      v15 = 0;
      do
      {
        if ( v26 )
        {
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *, _BYTE *, int))(*a4 + 188))(
            a4,
            v15,
            v14,
            4,
            4,
            v34,
            a3,
            a2);
          for ( i = 0; i < 0x40; i += 16 )
          {
            v17 = (unsigned __int8)v34[i + 13];
            v35[i / 4] = ((unsigned __int8)v34[i + 9] | ((unsigned __int8)v34[i + 10] << 16)) << 8;
            v18 = v17 | ((unsigned __int8)v34[i + 14] << 16);
            v19 = (unsigned __int8)v34[i + 17];
            v35[i / 4 + 1] = v18 << 8;
            v20 = v19 | ((unsigned __int8)v34[i + 18] << 16);
            v21 = (unsigned __int8)v34[i + 21];
            v35[i / 4 + 2] = v20 << 8;
            v35[i / 4 + 3] = (v21 | ((unsigned __int8)v34[i + 22] << 16)) << 8;
          }
          a2 = 0;
          a3 = v33;
          (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)v30 + 68))(v35);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *, _BYTE *, int))(*a4 + 176))(
            a4,
            v15,
            v14,
            4,
            4,
            v37,
            a3,
            a2);
          for ( j = 0; j < 64; *(float *)&v35[j + 13] = *(float *)&v36[j * 4 + 244] )
          {
            *(float *)&v36[j * 4 + 8] = 0.0;
            j += 4;
            *(float *)&v35[j + 15] = *(float *)&v37[j * 4];
            *(float *)&v35[j + 12] = 0.0;
          }
          a2 = 0;
          a3 = v33;
          (*(void (__stdcall **)(_BYTE *))(*(_DWORD *)v30 + 64))(v36);
        }
        (*(void (__thiscall **)(_DWORD *, int, int, char *, int))(*a5 + 216))(a5, v15, v14, v32, 4);
        v15 += 4;
        --v11;
      }
      while ( v11 );
      v11 = v31;
      v12 = v30;
    }
    if ( a6 )
    {
      v28 = (double)v27 * 100.0 / (double)(v11 * v12);
      if ( a6(LODWORD(v28), a7, a8) )
        break;
    }
    v27 += v11;
    v13 = ++v29;
    if ( v29 >= v12 )
      return 0;
  }
  return 2;
}
