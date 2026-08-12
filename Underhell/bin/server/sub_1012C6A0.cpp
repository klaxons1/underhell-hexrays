_DWORD *__thiscall sub_1012C6A0(_DWORD *this, float *a2, float *a3, float a4)
{
  _DWORD *result; // eax
  _DWORD *v6; // esi
  float *v7; // eax
  double v8; // st7
  const char *v9; // eax
  const char *v10; // eax
  float v11; // [esp+0h] [ebp-14h]
  float v12; // [esp+4h] [ebp-10h]
  float v13; // [esp+8h] [ebp-Ch]
  _DWORD *v14; // [esp+Ch] [ebp-8h]
  float v16; // [esp+20h] [ebp+Ch]
  _DWORD *v17; // [esp+24h] [ebp+10h]

  result = 0;
  v14 = 0;
  v17 = (_DWORD *)this[16385];
  if ( v17 )
  {
    do
    {
      v6 = (_DWORD *)*v17;
      if ( *v17 )
      {
        if ( v6[6] )
        {
          v7 = (float *)(*(int (__thiscall **)(_DWORD))(*v6 + 576))(*v17);
          v11 = *v7 - *a2;
          v12 = v7[1] - a2[1];
          v13 = v7[2] - a2[2];
          off_10689714();
          v8 = a3[1] * v12 + *a3 * v11 + a3[2] * v13;
          if ( v8 > a4 )
          {
            v9 = (const char *)v6[23];
            if ( !v9 )
              v9 = String;
            if ( v9 != "worldspawn" && _stricmp(v9, "worldspawn") )
            {
              v10 = (const char *)v6[23];
              if ( !v10 )
                v10 = String;
              if ( v10 != "soundent" )
              {
                if ( _stricmp(v10, "soundent") )
                {
                  v14 = v6;
                  v16 = v8;
                  a4 = v16;
                }
              }
            }
          }
        }
      }
      else
      {
        DevWarning("NULL entity in global entity list!\n");
      }
      v17 = (_DWORD *)v17[3];
    }
    while ( v17 );
    return v14;
  }
  return result;
}
