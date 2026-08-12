int __thiscall sub_1022AD00(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  const char *v6; // eax
  unsigned int v7; // kr04_4
  void *v8; // eax
  _WORD *v9; // eax
  _WORD *v10; // edx
  int v12; // ebx
  void *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ecx
  int v16; // edi
  int i; // ebx
  int v18; // eax
  int v20; // [esp+Ch] [ebp-4h]

  v2 = KeyValuesSystem();
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, 32);
  if ( v3 )
  {
    v4 = KeyValuesSystem();
    v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, *this);
    *(_DWORD *)v3 = -1;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    *(_DWORD *)(v3 + 28) = 0;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    v5 = KeyValuesSystem();
    *(_DWORD *)v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 12))(v5, v20, 1);
  }
  else
  {
    v3 = 0;
  }
  *(_BYTE *)(v3 + 16) = *((_BYTE *)this + 16);
  switch ( *((_BYTE *)this + 16) )
  {
    case 1:
      v6 = (const char *)this[1];
      if ( v6 )
      {
        v7 = strlen(v6);
        v8 = (void *)sub_100DDA40(v7 + 1);
        *(_DWORD *)(v3 + 4) = v8;
        memcpy_0(v8, (const void *)this[1], v7 + 1);
      }
      break;
    case 2:
      *(_DWORD *)(v3 + 12) = this[3];
      break;
    case 3:
      *(float *)(v3 + 12) = *((float *)this + 3);
      break;
    case 4:
      *(_DWORD *)(v3 + 12) = this[3];
      break;
    case 5:
      v9 = (_WORD *)this[2];
      if ( v9 )
      {
        v10 = v9 + 1;
        while ( *v9++ )
          ;
        v12 = v9 - v10;
        v13 = (void *)sub_100DDA40((unsigned __int64)(unsigned int)(v12 + 1) >> 31 != 0 ? -1 : 2 * (v12 + 1));
        *(_DWORD *)(v3 + 8) = v13;
        memcpy_0(v13, (const void *)this[2], 2 * v12 + 2);
      }
      break;
    case 6:
      *(_BYTE *)(v3 + 12) = *((_BYTE *)this + 12);
      *(_BYTE *)(v3 + 13) = *((_BYTE *)this + 13);
      *(_BYTE *)(v3 + 14) = *((_BYTE *)this + 14);
      *(_BYTE *)(v3 + 15) = *((_BYTE *)this + 15);
      break;
    case 7:
      v14 = (_DWORD *)sub_100DDA40(8);
      *(_DWORD *)(v3 + 4) = v14;
      v15 = (_DWORD *)this[1];
      *v14 = *v15;
      v14[1] = v15[1];
      break;
    default:
      break;
  }
  v16 = this[6];
  for ( i = 0; v16; i = v18 )
  {
    v18 = sub_1022AD00(v16);
    if ( i )
      *(_DWORD *)(i + 20) = v18;
    else
      *(_DWORD *)(v3 + 24) = v18;
    *(_DWORD *)(v18 + 20) = 0;
    v16 = *(_DWORD *)(v16 + 20);
  }
  return v3;
}
