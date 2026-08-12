_DWORD *__thiscall sub_10206190(int this, int a2)
{
  char *v3; // eax
  _DWORD *result; // eax
  _DWORD *v5; // edi
  unsigned int v6; // eax
  _DWORD *v7; // ecx
  const char *v8; // eax
  int *v9; // eax
  int *v10; // esi
  int v11; // eax
  int v12; // eax
  const char *v13; // [esp-8h] [ebp-10h]
  int v14; // [esp-8h] [ebp-10h]
  const char *v15; // [esp-4h] [ebp-Ch]

  v3 = *(char **)(this + 212);
  if ( !v3 )
    v3 = (char *)String;
  result = sub_1012BF20(&dword_1069E3E0, 0, v3, this, *(_DWORD *)a2, *(_DWORD *)(a2 + 4), 0);
  v5 = result;
  if ( result )
  {
    if ( sub_10205F20(result) )
    {
      if ( (*(_BYTE *)(this + 248) & 2) != 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 320))(v5) )
        {
          v9 = (int *)sub_1001F4B0((int)v5);
          v10 = v9;
          if ( v9 )
          {
            v9[823] |= 4u;
            sub_100EA940(v9, 2);
            HIBYTE(a2) = 1;
            sub_1015B210((_BYTE *)v10 + 2272, (_BYTE *)&a2 + 3);
            HIBYTE(a2) = 1;
            sub_1015B240((_BYTE *)v10 + 2273, (_BYTE *)&a2 + 3);
            *(float *)&a2 = 0.0;
            sub_1015B270((float *)v10 + 569, (float *)&a2);
            v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
            sub_100DC4E0((float *)v10, (float *)(v11 + 60));
            v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 48;
            v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
            sub_100D5D10(v12 + 36, v14);
          }
        }
      }
      (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*v5 + 416))(v5, this + 800, this + 812, 0);
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 320))(v5);
      if ( (_BYTE)result )
      {
        if ( byte_106C761C )
        {
          byte_106C1B24 = 1;
          flt_106C1B28 = *(float *)(this + 812);
          flt_106C1B2C = *(float *)(this + 816);
          flt_106C1B30 = *(float *)(this + 820);
        }
        else
        {
          byte_106C1B24 = 0;
        }
      }
    }
    else
    {
      v6 = v5[77];
      if ( v6 == -1 || off_1061BE18[4 * (v5[77] & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = (_DWORD *)off_1061BE18[4 * (v5[77] & 0xFFF) + 1];
      v15 = sub_100D6390(v7);
      v13 = sub_100D6390(v5);
      v8 = sub_100D6390((_DWORD *)this);
      return (_DWORD *)Warning("ERROR: (%s) can't teleport object (%s) as it has a parent (%s)!\n", v8, v13, v15);
    }
  }
  return result;
}
