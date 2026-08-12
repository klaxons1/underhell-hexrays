int __userpurge sub_101D0DC0@<eax>(int *a1@<ecx>, float *a2@<ebp>, int a3@<edi>, _DWORD *a4, _DWORD *a5)
{
  int *v5; // esi
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned int v10; // eax
  int v11; // ebp
  int v12; // edi
  int v13; // eax
  unsigned int j; // esi
  void (__thiscall *v15)(_DWORD *, int, int, int); // edx
  unsigned int k; // esi
  char *v20; // [esp+28h] [ebp-2B0h]
  unsigned int v22; // [esp+38h] [ebp-2A0h]
  unsigned int v23; // [esp+3Ch] [ebp-29Ch]
  unsigned int i; // [esp+40h] [ebp-298h]
  unsigned int v25; // [esp+44h] [ebp-294h]
  char v26[12]; // [esp+48h] [ebp-290h] BYREF
  char v27; // [esp+54h] [ebp-284h] BYREF
  _BYTE v28[68]; // [esp+60h] [ebp-278h] BYREF
  char v29[64]; // [esp+A4h] [ebp-234h] BYREF
  float v30[63]; // [esp+E4h] [ebp-1F4h] BYREF
  float v31[62]; // [esp+1E0h] [ebp-F8h] BYREF

  v5 = a1;
  v6 = a4[1];
  if ( v6 != a5[1] )
    return 1;
  v7 = a4[2];
  if ( v7 != a5[2] )
    return 1;
  v8 = (unsigned int)(v6 + 3) >> 2;
  v9 = (unsigned int)(v7 + 3) >> 2;
  v22 = v8;
  v25 = v9;
  (*(int (__thiscall **)(_DWORD *))(*a5 + 8))(a5);
  v10 = 0;
  for ( i = 0; v10 < v9; i = v10 )
  {
    if ( v8 )
    {
      v11 = 4 * v10;
      v12 = 0;
      v23 = v22;
      do
      {
        (*(void (__thiscall **)(_DWORD *, int, int, char *, int, int, float *, char *))(*a4 + 212))(
          a4,
          v12,
          v11,
          v26,
          4,
          a3,
          a2,
          v20);
        v13 = *v5;
        v20 = &v27;
        if ( HIBYTE(v23) )
        {
          (*(void (__thiscall **)(int *, char *))(v13 + 108))(v5, v29);
          for ( j = 0; j < 0x40; j += 4 )
          {
            *(_DWORD *)&v28[j] = ((unsigned __int8)v28[j + 65] | (((unsigned __int8)v28[j + 67] | 0xFFFFFF00) << 8)) << 8;
            *(_DWORD *)&v28[j] |= (unsigned __int8)sub_101C6780(v28[j + 2], v28[j + 1]);
          }
          v15 = *(void (__thiscall **)(_DWORD *, int, int, int))(*a5 + 208);
          a2 = (float *)v28;
        }
        else
        {
          (*(void (__thiscall **)(int *, float *))(v13 + 104))(v5, v30);
          for ( k = 0; k < 64; v30[k + 62] = 1.0 )
          {
            v31[k + 2] = v30[k + 2];
            v31[k + 1] = v30[k];
            v31[k] = sub_101C6890(v30[k], v30[k + 2]);
            k += 4;
          }
          v15 = *(void (__thiscall **)(_DWORD *, int, int, int))(*a5 + 196);
          a2 = v31;
        }
        a3 = 4;
        v15(a5, v12, v11, 4);
        v5 = a1;
        v12 += 4;
        --v23;
      }
      while ( v23 );
      v10 = i;
      v9 = v25;
      v8 = v22;
    }
    ++v10;
  }
  return 0;
}
