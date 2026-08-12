_BYTE *__thiscall sub_1022AA10(_DWORD *this, _DWORD *a2, char *Str)
{
  _BYTE *v3; // esi
  _DWORD *v4; // eax
  char v5; // cl
  char v6; // dl
  char v7; // cl
  char v8; // dl
  char *v10; // [esp-8h] [ebp-18h]
  float v11; // [esp+4h] [ebp-Ch] BYREF
  float v12; // [esp+8h] [ebp-8h] BYREF
  float v13; // [esp+Ch] [ebp-4h] BYREF

  v3 = a2;
  v10 = Str;
  *a2 = 0;
  v4 = sub_1022A6A0(this, v10, 0);
  if ( v4 )
  {
    v5 = *((_BYTE *)v4 + 16);
    switch ( v5 )
    {
      case 6:
        v6 = *((_BYTE *)v4 + 13);
        *v3 = *((_BYTE *)v4 + 12);
        v7 = *((_BYTE *)v4 + 14);
        v3[1] = v6;
        v8 = *((_BYTE *)v4 + 15);
        v3[2] = v7;
        v3[3] = v8;
        return v3;
      case 3:
        *v3 = (int)*((float *)v4 + 3);
        return v3;
      case 2:
        *v3 = *((_BYTE *)v4 + 12);
        return v3;
      case 1:
        sscanf((const char *const)v4[1], "%f %f %f %f", &a2, &v13, &v12, &v11);
        *v3 = (int)*(float *)&a2;
        v3[1] = (int)v13;
        v3[2] = (int)v12;
        Str = (char *)(int)v11;
        v3[3] = (_BYTE)Str;
        break;
    }
  }
  return v3;
}
