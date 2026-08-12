_DWORD *__thiscall sub_100DF6B0(int this, char *a2)
{
  int v2; // eax
  char v4; // cl
  int v5; // ebx
  _DWORD *result; // eax
  _DWORD *v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ecx
  int (__thiscall *v13)(int, int); // eax
  float v14; // [esp+4h] [ebp-8h]
  int v15; // [esp+8h] [ebp-4h] BYREF
  _DWORD *v16; // [esp+14h] [ebp+8h]

  v2 = (int)a2;
  v14 = *((float *)off_103DC81C + 3);
  v4 = *a2;
  v5 = -1;
  v15 = -1;
  if ( v4 == 64 )
  {
    result = sub_100DF360((_DWORD *)this, a2 + 1, &v15);
    v5 = v15;
  }
  else
  {
    if ( v4 == 35 )
      v2 = (int)(a2 + 1);
    result = (_DWORD *)sub_10076700(v2);
  }
  v7 = result;
  v16 = result;
  if ( result )
  {
    if ( result[15] )
    {
      v8 = 0;
      v9 = this + 17156;
      while ( !*(_DWORD *)v9 || _stricmp(*(const char **)(*(_DWORD *)v9 + 40), (const char *)v7[15]) )
      {
        ++v8;
        v9 += 4;
        if ( v8 >= 16 )
          goto LABEL_15;
        v7 = v16;
      }
      *(_DWORD *)(this + 4 * v8 + 17156) = 0;
      *(float *)(this + 4 * v8 + 17236) = 0.0;
LABEL_15:
      v5 = v15;
    }
    if ( v5 != -1 )
    {
      v10 = 0;
      while ( *(unsigned __int8 *)(this + v10 + 17220) != v5 )
      {
        if ( ++v10 >= 16 )
          goto LABEL_22;
      }
      *(_BYTE *)(v10 + this + 17220) = -1;
      *(float *)(this + 4 * v10 + 17236) = 0.0;
      *(_DWORD *)(this + 4 * v10 + 17156) = 0;
    }
LABEL_22:
    v11 = 0;
    v12 = (_DWORD *)(this + 17156);
    while ( *v12 )
    {
      ++v11;
      ++v12;
      if ( v11 >= 16 )
        goto LABEL_27;
    }
    *(_BYTE *)(v11 + this + 17220) = v5;
    *(float *)(this + 4 * v11 + 17236) = v14;
    *(_DWORD *)(this + 4 * v11 + 17156) = v16;
LABEL_27:
    v13 = *(int (__thiscall **)(int, int))(*(_DWORD *)(this + 44) + 124);
    *(float *)(this + 17304) = v14;
    *(_BYTE *)(this + 17384) = 1;
    return (_DWORD *)v13(this + 44, 1);
  }
  return result;
}
