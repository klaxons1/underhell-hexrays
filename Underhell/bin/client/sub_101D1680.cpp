int __thiscall sub_101D1680(
        _BYTE *this,
        _DWORD *a2,
        _DWORD *a3,
        unsigned __int8 (__cdecl *a4)(_DWORD, int, int),
        int a5,
        int a6)
{
  int v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // edi
  int v12; // esi
  char *v14; // [esp+38h] [ebp-90h]
  char v15; // [esp+47h] [ebp-81h]
  unsigned int v16; // [esp+48h] [ebp-80h]
  float v17; // [esp+48h] [ebp-80h]
  unsigned int v19; // [esp+50h] [ebp-78h]
  unsigned int v20; // [esp+54h] [ebp-74h]
  unsigned int v21; // [esp+58h] [ebp-70h]
  unsigned int v22; // [esp+60h] [ebp-68h]
  char v23[4]; // [esp+68h] [ebp-60h] BYREF
  char v24; // [esp+6Ch] [ebp-5Ch] BYREF
  char v25[4]; // [esp+70h] [ebp-58h] BYREF
  char v26[64]; // [esp+74h] [ebp-54h] BYREF
  char v27[4]; // [esp+B4h] [ebp-14h] BYREF
  char v28[12]; // [esp+B8h] [ebp-10h] BYREF

  v6 = a2[1];
  if ( v6 != a3[1] )
    return 1;
  v7 = a2[2];
  if ( v7 != a3[2] )
    return 1;
  v8 = (unsigned int)(v6 + 3) >> 2;
  v9 = (unsigned int)(v7 + 3) >> 2;
  v21 = v8;
  v22 = v9;
  if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2) != 1 || (v15 = 1, this[11]) )
    v15 = 0;
  v10 = 0;
  v20 = 0;
  if ( !v9 )
    return 0;
  v19 = 0;
  while ( 1 )
  {
    if ( v8 )
    {
      v11 = 4 * v10;
      v12 = 0;
      v16 = v21;
      do
      {
        if ( v15 )
        {
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *, char *))(*a2 + 28))(
            a2,
            v12,
            v11,
            4,
            4,
            v27,
            v14);
          v14 = &v24;
          (*(void (__stdcall **)(char *))(*(_DWORD *)v19 + 44))(v28);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *, char *))(*a2 + 20))(
            a2,
            v12,
            v11,
            4,
            4,
            v25,
            v14);
          v14 = &v24;
          (*(void (__stdcall **)(char *))(*(_DWORD *)v19 + 40))(v26);
        }
        (*(void (__thiscall **)(_DWORD *, int, int, char *, int))(*a3 + 216))(a3, v12, v11, v23, 2);
        v12 += 4;
        --v16;
      }
      while ( v16 );
      v8 = v21;
      v9 = v22;
    }
    if ( a4 )
    {
      v17 = (double)v19 * 100.0 / (double)(v8 * v9);
      if ( a4(LODWORD(v17), a5, a6) )
        break;
    }
    v19 += v8;
    v10 = ++v20;
    if ( v20 >= v9 )
      return 0;
  }
  return 2;
}
