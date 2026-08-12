char __userpurge sub_1032F830@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, float a4, char a5, float a6, char a7)
{
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  _DWORD *v11; // eax
  int *v12; // esi
  double v13; // st7
  char result; // al
  int v15; // esi
  float v17; // [esp+2Ch] [ebp+14h]

  sub_1001F740((void *)a1, a4, a5, a6, a7);
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC, a3, a2) == 1 )
  {
    v8 = *(_DWORD *)(a1 + 416);
    if ( v8 != -1 )
    {
      v9 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 416) & 0xFFF) + 1];
      v10 = v8 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 416) & 0xFFF) + 2] == v10 )
      {
        if ( *v9 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 416) & 0xFFF) + 2] == v10 )
            v11 = (_DWORD *)*v9;
          else
            v11 = 0;
          sub_100EAB80(v11, 4);
        }
      }
    }
  }
  v12 = (int *)(a1 + 220);
  v17 = (float)*(int *)(a1 + 220);
  if ( (((double (__cdecl *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(-2.0, 2.0) + 10.0) * 5.0 <= v17 )
    v13 = (((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -2.0,
             2.0)
         + 10.0)
        * 5.0;
  else
    v13 = (double)*v12;
  if ( *v12 != (int)v13 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *v12 = (int)v13;
  }
  result = sub_10295590((_BYTE *)(a1 + 3652));
  if ( !result )
  {
    v15 = *(_DWORD *)(a1 + 2372);
    switch ( v15 )
    {
      case 6:
        v15 = 126;
        break;
      case 11:
        v15 = 127;
        break;
      case 1:
        v15 = 125;
        break;
    }
    result = sub_10022CA0((_DWORD *)a1, v15);
    if ( result )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, v15);
  }
  return result;
}
