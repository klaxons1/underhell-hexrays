int __thiscall sub_101D36E0(
        _BYTE *this,
        int *a2,
        _DWORD *a3,
        unsigned __int8 (__cdecl *a4)(_DWORD, int, int),
        int a5,
        int a6)
{
  int *v6; // ebx
  int v7; // edi
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  void (__thiscall **v16)(void *, _BYTE *, _BYTE *, int, int, int, float); // ebx
  int v17; // eax
  int v19; // [esp+40h] [ebp-180h]
  int v20; // [esp+40h] [ebp-180h]
  int v21; // [esp+44h] [ebp-17Ch]
  char v22; // [esp+5Bh] [ebp-165h]
  void (__thiscall **v23)(void *, _BYTE *, _BYTE *, int, int, int, int); // [esp+5Ch] [ebp-164h]
  float v24; // [esp+5Ch] [ebp-164h]
  unsigned int v25; // [esp+60h] [ebp-160h]
  unsigned int v26; // [esp+64h] [ebp-15Ch]
  unsigned int v27; // [esp+68h] [ebp-158h]
  unsigned int v28; // [esp+6Ch] [ebp-154h]
  unsigned int v29; // [esp+70h] [ebp-150h]
  float v30; // [esp+74h] [ebp-14Ch]
  _BYTE v31[8]; // [esp+78h] [ebp-148h] BYREF
  _BYTE v32[64]; // [esp+80h] [ebp-140h] BYREF
  _BYTE v33[256]; // [esp+C0h] [ebp-100h] BYREF

  v6 = a2;
  v7 = a2[1];
  if ( v7 != a3[1] )
    return 1;
  v9 = a2[2];
  if ( v9 != a3[2] )
    return 1;
  v28 = (unsigned int)(v9 + 3) >> 2;
  v10 = (unsigned int)(v7 + 3) >> 2;
  v29 = v10;
  if ( (*(int (__thiscall **)(int *))(*a2 + 8))(a2) != 1 || (v22 = 1, this[11]) )
    v22 = 0;
  v11 = 0;
  v27 = 0;
  v30 = (double)(unsigned __int8)this[41] / 255.0;
  if ( !v28 )
    return 0;
  v26 = 0;
  while ( 1 )
  {
    if ( v10 )
    {
      v12 = 4 * v11;
      v13 = 0;
      v25 = v29;
      while ( 1 )
      {
        v14 = *v6;
        if ( v22 )
        {
          (*(void (__thiscall **)(int *, int, int, int, int, _BYTE *))(v14 + 188))(v6, v13, v12, 4, 4, v32);
          v23 = (void (__thiscall **)(void *, _BYTE *, _BYTE *, int, int, int, int))(*(_DWORD *)this + 60);
          v21 = (unsigned __int8)this[41];
          v19 = (unsigned __int8)this[40];
          v15 = sub_101D8970(v32);
          (*v23)(this, v32, v31, v15, 1, v19, v21);
        }
        else
        {
          (*(void (__thiscall **)(int *, int, int, int, int, _BYTE *))(v14 + 176))(v6, v13, v12, 4, 4, v33);
          v16 = (void (__thiscall **)(void *, _BYTE *, _BYTE *, int, int, int, float))(*(_DWORD *)this + 56);
          v20 = (unsigned __int8)this[40];
          v17 = sub_101D8D50(v33);
          (*v16)(this, v33, v31, v17, 1, v20, COERCE_FLOAT(LODWORD(v30)));
          v6 = a2;
        }
        (*(void (__thiscall **)(_DWORD *, int, unsigned int, _BYTE *, int))(*a3 + 216))(a3, v13, 4 * v27, v31, 2);
        v13 += 4;
        if ( !--v25 )
          break;
        v12 = 4 * v27;
      }
      v10 = v29;
    }
    if ( a4 )
    {
      v24 = (double)v26 * 100.0 / (double)(v10 * v28);
      if ( a4(LODWORD(v24), a5, a6) )
        break;
    }
    v26 += v10;
    v11 = ++v27;
    if ( v27 >= v28 )
      return 0;
  }
  return 2;
}
