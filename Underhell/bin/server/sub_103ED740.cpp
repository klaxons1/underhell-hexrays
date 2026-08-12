void __thiscall sub_103ED740(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  _BYTE *v8; // eax
  _DWORD *v9; // edi
  float *v10; // eax
  double v11; // st7
  double v12; // st7
  int v13; // ebx
  int v14; // eax
  double v15; // st7
  double v16; // st7
  float v17; // [esp+Ch] [ebp-1Ch]
  float v18; // [esp+Ch] [ebp-1Ch]
  int v19; // [esp+10h] [ebp-18h]
  _BYTE v20[4]; // [esp+24h] [ebp-4h] BYREF
  int savedregs; // [esp+28h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 1936);
  if ( v2 == -1 )
    return;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1936) & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 || !*v3 )
    return;
  v4 = *(_DWORD *)(this + 1940);
  if ( v4 == -1
    || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 1940) & 0xFFF) + 1],
        v6 = v4 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 1940) & 0xFFF) + 2] != v6)
    || !*v5 )
  {
    if ( *(_BYTE *)(this + 1916) || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 868))(this) )
    {
      v12 = *(float *)(dword_106B31C8 + 12);
      v19 = off_10682B0C;
    }
    else
    {
      v13 = *(_DWORD *)this;
      v14 = sub_1026A890((unsigned int *)(this + 1936));
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, int, _BYTE *))(v13 + 548))(this, v14, 16395, v20) )
      {
        v18 = *(float *)(dword_106B31C8 + 12) + 0.2;
        sub_100EC3F0((_DWORD *)this, (int)sub_103ED740, v18, off_10682B0C);
        v15 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 1932);
        if ( v15 >= 15.0 )
        {
          v16 = v15 * 0.01666666666666667;
          if ( v16 <= 1.0 )
          {
            if ( v16 < 0.0 )
              v16 = 0.0;
          }
          else
          {
            v16 = 1.0;
          }
          if ( v16 > RandomFloat(0.0, 1.0) )
          {
            sub_103ECC50(this);
            v11 = *(float *)(dword_106B31C8 + 12) + 45.0;
            v19 = off_10682B0C;
            goto LABEL_17;
          }
        }
        return;
      }
      *(float *)(this + 1932) = *(float *)(dword_106B31C8 + 12);
      v12 = *(float *)(dword_106B31C8 + 12);
      v19 = off_10682B0C;
    }
LABEL_16:
    v11 = v12 + 10.0;
LABEL_17:
    v17 = v11;
    sub_100EC3F0((_DWORD *)this, (int)sub_103ED740, v17, v19);
    return;
  }
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 1940) & 0xFFF) + 2] == v6 )
    v7 = *v5;
  else
    v7 = 0;
  v8 = (_BYTE *)__RTDynamicCast(
                  v7,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CNPC_Seagull `RTTI Type Descriptor',
                  0);
  v9 = v8;
  if ( v8 )
  {
    if ( v8[3628] == 1 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v8 + 264))(v8) )
      {
        v10 = (float *)sub_10019640(v9);
        sub_103EB7C0(this, (int)&savedregs, v10);
      }
      v11 = *(float *)(dword_106B31C8 + 12) + 45.0;
      v19 = off_10682B0C;
      goto LABEL_17;
    }
    *(_DWORD *)(this + 1940) = -1;
    v12 = *(float *)(dword_106B31C8 + 12);
    v19 = off_10682B0C;
    goto LABEL_16;
  }
}
