int __thiscall sub_101D2FB0(
        _BYTE *this,
        int *a2,
        _DWORD *a3,
        unsigned __int8 (__cdecl *a4)(_DWORD, int, int),
        int a5,
        int a6)
{
  int *v6; // ebp
  int v7; // edi
  int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // edi
  int v15; // edx
  void (__thiscall **v16)(void *, _BYTE *, _BYTE *, int); // ebp
  int v17; // eax
  _BYTE *v18; // edx
  char v20; // [esp+4Fh] [ebp-165h]
  unsigned int v21; // [esp+50h] [ebp-164h]
  float v22; // [esp+50h] [ebp-164h]
  unsigned int v23; // [esp+54h] [ebp-160h]
  unsigned int v24; // [esp+58h] [ebp-15Ch]
  unsigned int v25; // [esp+5Ch] [ebp-158h]
  unsigned int v26; // [esp+60h] [ebp-154h]
  _BYTE v27[16]; // [esp+64h] [ebp-150h] BYREF
  _BYTE v28[64]; // [esp+74h] [ebp-140h] BYREF
  _BYTE v29[256]; // [esp+B4h] [ebp-100h] BYREF

  v6 = a2;
  v7 = a2[1];
  if ( v7 != a3[1] )
    return 1;
  v9 = a2[2];
  if ( v9 != a3[2] )
    return 1;
  v10 = (unsigned int)(v7 + 3) >> 2;
  v11 = (unsigned int)(v9 + 3) >> 2;
  v25 = v10;
  v26 = v11;
  if ( (*(int (__thiscall **)(int *))(*a2 + 8))(a2) != 1 || (v20 = 1, this[11]) )
    v20 = 0;
  v12 = 0;
  v24 = 0;
  if ( !v11 )
    return 0;
  v23 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      v13 = 4 * v12;
      v14 = 0;
      v21 = v25;
      do
      {
        v15 = *v6;
        if ( v20 )
        {
          (*(void (__thiscall **)(int *, int, int, int, int, _BYTE *))(v15 + 188))(v6, v14, v13, 4, 4, v28);
          v16 = (void (__thiscall **)(void *, _BYTE *, _BYTE *, int))(*(_DWORD *)this + 68);
          v17 = sub_101D8970(v28);
          v18 = v28;
        }
        else
        {
          (*(void (__thiscall **)(int *, int, int, int, int, _BYTE *))(v15 + 176))(v6, v14, v13, 4, 4, v29);
          v16 = (void (__thiscall **)(void *, _BYTE *, _BYTE *, int))(*(_DWORD *)this + 64);
          v17 = sub_101D8D50(v29);
          v18 = v29;
        }
        (*v16)(this, v18, v27, v17);
        (*(void (__thiscall **)(_DWORD *, int, int, _BYTE *, int))(*a3 + 216))(a3, v14, v13, v27, 4);
        v6 = a2;
        v14 += 4;
        --v21;
      }
      while ( v21 );
      v11 = v26;
      v10 = v25;
    }
    if ( a4 )
    {
      v22 = (double)v23 * 100.0 / (double)(v10 * v11);
      if ( a4(LODWORD(v22), a5, a6) )
        break;
    }
    v23 += v10;
    v12 = ++v24;
    if ( v24 >= v11 )
      return 0;
  }
  return 2;
}
