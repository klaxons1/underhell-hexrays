void __thiscall sub_10357140(int this)
{
  float v2; // edx
  float v3; // eax
  int v4; // edx
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int v11; // edi
  char *v12; // eax
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [esp-4h] [ebp-80h]
  float v20; // [esp+0h] [ebp-7Ch]
  float v21; // [esp+8h] [ebp-74h]
  int v22[20]; // [esp+10h] [ebp-6Ch] BYREF
  float v23[3]; // [esp+60h] [ebp-1Ch] BYREF
  float v24; // [esp+6Ch] [ebp-10h]
  float v25; // [esp+70h] [ebp-Ch]
  float v26; // [esp+74h] [ebp-8h]
  int v27; // [esp+78h] [ebp-4h] BYREF

  *(float *)(this + 4124) = *(float *)(dword_106B31C8 + 12) + 3.0;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v21 = *(float *)(this + 480) * *(float *)(this + 480)
        + *(float *)(this + 476) * *(float *)(this + 476)
        + *(float *)(this + 484) * *(float *)(this + 484);
    if ( off_10689708(v21) > 700.0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v2 = *(float *)(this + 480);
      v3 = *(float *)(this + 484);
      v24 = *(float *)(this + 476);
      v25 = v2;
      v26 = v3;
      off_10689714();
      v23[0] = v24 * 700.0;
      v23[1] = v25 * 700.0;
      v23[2] = 700.0 * v26;
      sub_100DD660(this, v23);
    }
  }
  sub_10247EC0(v22);
  v4 = *(_DWORD *)(this + 252);
  *(float *)&v22[13] = 40000.0;
  if ( (v4 & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_102485A0((float *)v22, (float *)(this + 476), (float *)(this + 580), 1.0);
  v5 = *(_DWORD *)(this + 4228);
  if ( v5 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 1] )
  {
    if ( *(_DWORD *)(this + 848) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 848);
      }
      *(_DWORD *)(this + 848) = 1;
    }
    if ( (*(_DWORD *)(this + 248) & 0x2000) != 0 )
    {
      sub_10320190(this);
      sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
      v20 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)this, v20, 0);
      sub_100EAB80((_DWORD *)this, 32);
    }
    else
    {
      v7 = sub_101D0270(this, 0, (int)v22, 0, 0);
      if ( v7 )
        *(_DWORD *)(this + 4224) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      else
        *(_DWORD *)(this + 4224) = -1;
      v8 = *(_DWORD *)(this + 4224);
      if ( v8 != -1
        && (v9 = &off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 1],
            v10 = v8 >> 12,
            off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] == v10)
        && *v9 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 4224) & 0xFFF) + 2] == v10 )
          v11 = *v9;
        else
          v11 = 0;
        v12 = sub_1025F440("%s_ragdoll", *(const char **)(this + 260));
        *(_DWORD *)(v11 + 260) = *sub_10162BE0(&v27, v12);
        sub_103564E0((_DWORD *)this);
        v13 = *(_DWORD *)(this + 4088);
        if ( v13 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 4088) & 0xFFF) + 2] == v13 >> 12 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 4088) & 0xFFF) + 1] )
          {
            v14 = (int *)sub_1026A890((unsigned int *)(this + 4088));
            sub_100F5880(v14, -1.0);
            v19 = sub_1026A890((unsigned int *)(this + 4224));
            v15 = sub_1026A890((unsigned int *)(this + 4088));
            sub_10284B60(v15, v19, 0);
            v27 = 64;
            v16 = sub_1026A890((unsigned int *)(this + 4088));
            sub_10284420((float *)(v16 + 848), &v27);
            v27 = 128;
            v17 = sub_1026A890((unsigned int *)(this + 4088));
            sub_10284480((float *)(v17 + 852), &v27);
            *(float *)&v27 = 0.5;
            v18 = sub_1026A890((unsigned int *)(this + 4088));
            sub_100C1F20((float *)(v18 + 824), (float *)&v27);
          }
        }
        sub_100EAB80((_DWORD *)this, 32);
        sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
      }
      else
      {
        sub_10355CF0(this);
      }
    }
  }
}
