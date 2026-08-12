int __thiscall sub_102A7630(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  int v9; // ebx
  char *v10; // eax
  int v11; // eax
  int v12; // esi
  float v13[3]; // [esp+8h] [ebp-18h] BYREF
  int v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-8h]
  _DWORD *v16; // [esp+1Ch] [ebp-4h]

  v2 = this;
  v3 = this[17];
  v16 = this;
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (v3 & 0xFFF) + 1];
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4);
  v6 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 136))(v5, v2[1], 0);
  v7 = (_DWORD *)v6;
  if ( !v6 )
    return -1;
  v9 = 0;
  v15 = 3.4028235e38;
  v14 = -1;
  if ( *(int *)(v6 + 12) > 0 )
  {
    while ( 1 )
    {
      v10 = *(char **)(*v7 + 8 * v9);
      if ( !v10 )
        v10 = (char *)String;
      v11 = sub_100BDF40(v2[1], v10);
      v12 = v11;
      if ( v11 != -1 )
      {
        sub_1029F780(v16, v11, v13, 0);
        if ( v15 > 1.0 )
        {
          v15 = 1.0;
          v14 = v12;
        }
      }
      if ( ++v9 >= v7[3] )
        break;
      v2 = v16;
    }
  }
  return v14;
}
