int __userpurge sub_101D3190@<eax>(int *a1@<ecx>, int a2@<edi>, char *a3@<esi>, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  void (__thiscall *v14)(_DWORD *, int, int, int); // edx
  char *v15; // eax
  char *v19; // [esp+20h] [ebp-16Ch]
  unsigned int i; // [esp+2Ch] [ebp-160h]
  unsigned int v21; // [esp+30h] [ebp-15Ch]
  unsigned int v22; // [esp+34h] [ebp-158h]
  unsigned int v23; // [esp+38h] [ebp-154h]
  char v24[12]; // [esp+3Ch] [ebp-150h] BYREF
  char v25; // [esp+48h] [ebp-144h] BYREF
  char v26; // [esp+54h] [ebp-138h] BYREF
  char v27[60]; // [esp+58h] [ebp-134h] BYREF
  char v28; // [esp+94h] [ebp-F8h] BYREF
  char v29[244]; // [esp+98h] [ebp-F4h] BYREF

  v6 = a4[1];
  if ( v6 != a5[1] )
    return 1;
  v7 = a4[2];
  if ( v7 != a5[2] )
    return 1;
  v8 = (unsigned int)(v6 + 3) >> 2;
  v9 = (unsigned int)(v7 + 3) >> 2;
  v21 = v8;
  v23 = v9;
  (*(int (__thiscall **)(_DWORD *))(*a5 + 8))(a5);
  v10 = 0;
  for ( i = 0; v10 < v9; i = v10 )
  {
    if ( v8 )
    {
      v11 = 4 * v10;
      v12 = 0;
      v22 = v21;
      do
      {
        (*(void (__thiscall **)(_DWORD *, int, int, char *, int, int, char *, char *))(*a4 + 212))(
          a4,
          v12,
          v11,
          v24,
          4,
          a2,
          a3,
          v19);
        v13 = *a1;
        v19 = &v25;
        if ( HIBYTE(v22) )
        {
          (*(void (__thiscall **)(int *, char *))(v13 + 108))(a1, v27);
          v14 = *(void (__thiscall **)(_DWORD *, int, int, int))(*a5 + 208);
          v15 = &v26;
        }
        else
        {
          (*(void (__thiscall **)(int *, char *))(v13 + 104))(a1, v29);
          v14 = *(void (__thiscall **)(_DWORD *, int, int, int))(*a5 + 196);
          v15 = &v28;
        }
        a3 = v15;
        a2 = 4;
        v14(a5, v12, v11, 4);
        v12 += 4;
        --v22;
      }
      while ( v22 );
      v8 = v21;
      v9 = v23;
      v10 = i;
    }
    ++v10;
  }
  return 0;
}
