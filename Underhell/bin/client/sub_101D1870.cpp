int __thiscall sub_101D1870(void *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  char *v12; // [esp+54h] [ebp-88h]
  char v13; // [esp+67h] [ebp-75h]
  int *i; // [esp+68h] [ebp-74h]
  unsigned int v15; // [esp+6Ch] [ebp-70h]
  unsigned int v16; // [esp+70h] [ebp-6Ch]
  unsigned int v17; // [esp+74h] [ebp-68h]
  char v18[4]; // [esp+7Ch] [ebp-60h] BYREF
  char v19; // [esp+80h] [ebp-5Ch] BYREF
  char v20[4]; // [esp+84h] [ebp-58h] BYREF
  char v21[64]; // [esp+88h] [ebp-54h] BYREF
  char v22[4]; // [esp+C8h] [ebp-14h] BYREF
  char v23[12]; // [esp+CCh] [ebp-10h] BYREF

  v13 = HIBYTE(this);
  v3 = a2[1];
  if ( v3 != a3[1] )
    return 1;
  v4 = a2[2];
  if ( v4 != a3[2] )
    return 1;
  v5 = (unsigned int)(v3 + 3) >> 2;
  v6 = (unsigned int)(v4 + 3) >> 2;
  v15 = v5;
  v17 = v6;
  (*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
  v7 = 0;
  for ( i = 0; v7 < v6; i = (int *)v7 )
  {
    if ( v5 )
    {
      v8 = 4 * v7;
      v9 = 0;
      v16 = v15;
      do
      {
        (*(void (__thiscall **)(_DWORD *, int, int, char *, int, char *))(*a2 + 212))(a2, v9, v8, v18, 2, v12);
        v10 = *i;
        v12 = &v19;
        if ( v13 )
        {
          (*(void (__stdcall **)(char *))(v10 + 84))(v23);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 108))(a3, v9, v8, 4, 4, v22);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 128))(a3, v9, v8, 4, 4, v22);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 148))(a3, v9, v8, 4, 4, v22);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 168))(a3, v9, v8, 4, 4, v22);
        }
        else
        {
          (*(void (__stdcall **)(char *))(v10 + 80))(v21);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 96))(a3, v9, v8, 4, 4, v20);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 116))(a3, v9, v8, 4, 4, v20);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 136))(a3, v9, v8, 4, 4, v20);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a3 + 156))(a3, v9, v8, 4, 4, v20);
        }
        v9 += 4;
        --v16;
      }
      while ( v16 );
      v5 = v15;
      v6 = v17;
      v7 = (unsigned int)i;
    }
    ++v7;
  }
  return 0;
}
