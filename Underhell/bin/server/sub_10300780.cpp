char *__thiscall sub_10300780(int this, float *a2)
{
  char *result; // eax
  float v4; // edx
  float v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // ecx
  double v9; // st7
  double v10; // st6
  double v11; // st5
  int v12; // ebx
  int v13; // ecx
  int v14; // esi
  double v15; // st7
  double v16; // st6
  float v17; // [esp+0h] [ebp-DCh]
  int v18[32]; // [esp+20h] [ebp-BCh] BYREF
  _DWORD v19[5]; // [esp+A0h] [ebp-3Ch] BYREF
  float v20[3]; // [esp+B4h] [ebp-28h] BYREF
  char *i; // [esp+C0h] [ebp-1Ch]
  float v22; // [esp+C4h] [ebp-18h]
  float v23; // [esp+C8h] [ebp-14h]
  float v24; // [esp+CCh] [ebp-10h]
  float v25; // [esp+D0h] [ebp-Ch] BYREF
  float v26; // [esp+D4h] [ebp-8h]
  float v27; // [esp+D8h] [ebp-4h]
  float v28; // [esp+E4h] [ebp+8h]

  result = (char *)dword_10698344;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v4 = a2[1];
    v5 = a2[2];
    v22 = *a2;
    v23 = v4;
    v24 = v5;
    v6 = off_10689714();
    v28 = v6;
    v7 = v6 * 0.1;
    v8 = *(_DWORD *)(this + 252) >> 11;
    v25 = v22 * v7;
    v26 = v23 * v7;
    v27 = v7 * v24;
    if ( (v8 & 1) != 0 )
      sub_100DAE60(this);
    v9 = v25 + *(float *)(this + 580);
    v10 = *(float *)(this + 584) + v26;
    v11 = *(float *)(this + 588) + v27;
    v25 = v9 + 48.0;
    v26 = v10 + 48.0;
    v27 = v11 + 64.0;
    v20[0] = v9 - 48.0;
    v20[1] = v10 - 48.0;
    v20[2] = v11;
    sub_1025F990(v19, (int)v18, 32, 0x2000);
    result = (char *)sub_1025F9C0((int)v20, (int)&v25, (int)v19);
    v12 = 0;
    for ( i = result; v12 < (int)i; ++v12 )
    {
      v13 = v18[v12];
      if ( v13 )
      {
        result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 220))(v13);
        if ( result == (char *)4 )
        {
          result = (char *)v18[v12];
          if ( result != (char *)this )
          {
            result = (char *)__RTDynamicCast(
                               (int)result,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                               (int)&CNPC_Antlion `RTTI Type Descriptor',
                               0);
            v14 = (int)result;
            if ( result )
            {
              if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
                sub_100DAE60(this);
              if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
                sub_100DAE60(v14);
              v25 = *(float *)(v14 + 580) - *(float *)(this + 580);
              v26 = *(float *)(v14 + 584) - *(float *)(this + 584);
              v27 = 0.0;
              v17 = off_10689714();
              v15 = sub_10134630(v17, 0.0, 256.0, 1.0, 0.1);
              v16 = v15 * v28;
              v25 = v25 * v16;
              v26 = v26 * v16;
              v27 = v15 * (v28 * 0.25) + v16 * v27;
              sub_100EA150(v14, &v25);
              result = *(char **)(v14 + 2372);
              if ( result != (char *)dword_106E2970
                && result != (char *)dword_106E296C
                && (*(_BYTE *)(v14 + 256) & 1) != 0 )
              {
                result = (char *)sub_1002A570((_DWORD *)v14);
                if ( !(_BYTE)result )
                  result = sub_10023CB0((char *)v14, 73);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
