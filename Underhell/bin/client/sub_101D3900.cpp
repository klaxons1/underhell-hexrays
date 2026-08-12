int __stdcall sub_101D3900(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  _BYTE *v11; // [esp+18h] [ebp-170h]
  int v12; // [esp+1Ch] [ebp-16Ch]
  unsigned int i; // [esp+30h] [ebp-158h]
  _DWORD *v14; // [esp+34h] [ebp-154h]
  _DWORD *v15; // [esp+38h] [ebp-150h]
  unsigned int v16; // [esp+3Ch] [ebp-14Ch]
  char v17[8]; // [esp+40h] [ebp-148h] BYREF
  _BYTE v18[8]; // [esp+48h] [ebp-140h] BYREF
  char v19[56]; // [esp+50h] [ebp-138h] BYREF
  char v20[8]; // [esp+88h] [ebp-100h] BYREF
  char v21[248]; // [esp+90h] [ebp-F8h] BYREF

  v2 = a1[1];
  if ( v2 != a2[1] )
    return 1;
  v3 = a1[2];
  if ( v3 != a2[2] )
    return 1;
  v4 = (unsigned int)(v2 + 3) >> 2;
  v5 = (unsigned int)(v3 + 3) >> 2;
  v14 = (_DWORD *)v4;
  v16 = v5;
  (*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  v6 = 0;
  for ( i = 0; v6 < v5; i = v6 )
  {
    if ( v4 )
    {
      v7 = 4 * v6;
      v8 = 0;
      v15 = v14;
      do
      {
        (*(void (__thiscall **)(_DWORD *, int, int, char *, int, _BYTE *, int))(*a1 + 212))(
          a1,
          v8,
          v7,
          v17,
          2,
          v11,
          v12);
        v9 = *v14;
        v12 = 1;
        v11 = v18;
        if ( HIBYTE(i) )
        {
          (*(void (__stdcall **)(char *))(v9 + 100))(v19);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, _BYTE *))(*a2 + 208))(a2, v8, v7, 4, 4, v18);
        }
        else
        {
          (*(void (__stdcall **)(char *))(v9 + 96))(v21);
          (*(void (__thiscall **)(_DWORD *, int, int, int, int, char *))(*a2 + 196))(a2, v8, v7, 4, 4, v20);
        }
        v8 += 4;
        v15 = (_DWORD *)((char *)v15 - 1);
      }
      while ( v15 );
      v4 = (unsigned int)v14;
      v5 = v16;
      v6 = i;
    }
    ++v6;
  }
  return 0;
}
