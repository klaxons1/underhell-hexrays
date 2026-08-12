void __thiscall sub_102E6A20(int this)
{
  int v2; // ebx
  double v3; // st7
  int *v4; // ecx
  double v5; // st7
  bool v6; // zf
  char v7; // cl
  char v8; // al
  unsigned int v9; // ecx
  int *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  float *v15; // eax
  float v16; // [esp+4h] [ebp-28h]
  float v17; // [esp+4h] [ebp-28h]
  float v18; // [esp+8h] [ebp-24h]
  float v19[3]; // [esp+18h] [ebp-14h] BYREF
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  if ( (*(_BYTE *)(this + 252) & 1) == 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
    v2 = 0;
    v16 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v16, 0);
    if ( *(_DWORD *)(this + 1120) )
    {
      v3 = *(float *)(dword_106B31C8 + 16);
      v21 = *(int *)(dword_106B31C8 + 16);
      if ( v3 > 0.1 )
      {
        v3 = 0.1;
        *(float *)&v21 = 0.1;
      }
      if ( *(_BYTE *)(this + 113) != 2 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v4 = *(int **)(this + 24);
          if ( v4 )
          {
            sub_100194B0(v4, 113);
            v3 = *(float *)&v21;
          }
        }
        *(_BYTE *)(this + 113) = 2;
      }
      v5 = v3 * 256.0;
      if ( v5 < 1.0 )
        v5 = 1.0;
      v6 = *(_DWORD *)(this + 1120) == -1;
      v21 = (int)v5;
      v18 = (float)(int)v5;
      v17 = (float)*(unsigned __int8 *)(this + 119);
      if ( v6 )
      {
        sub_10424B10(0.0, v17, v18);
        v20 = (int)0.0;
        v7 = (int)0.0;
      }
      else
      {
        sub_10424B10(255.0, v17, v18);
        v20 = (int)255.0;
        v7 = (int)255.0;
      }
      sub_100FB020(this, v7);
      v8 = *(_BYTE *)(this + 119);
      if ( v8 )
      {
        if ( v8 == -1 )
          *(_DWORD *)(this + 1120) = 0;
        else
          sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
      else
      {
        sub_1025FAC0(this);
      }
    }
    v9 = *(_DWORD *)(this + 412);
    if ( v9 != -1 )
    {
      v10 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
      v11 = v9 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v11 )
      {
        if ( *v10 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v11 )
            v12 = *v10;
          else
            v12 = 0;
          if ( *(_BYTE *)(v12 + 447) >= 3u )
            sub_10035360((int *)this, 32);
          else
            sub_100EAB80((_DWORD *)this, 32);
          v13 = *(_DWORD *)(this + 412);
          if ( v13 == -1 )
            goto LABEL_35;
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == *(_DWORD *)(this + 412) >> 12 )
            v2 = off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] != v13 >> 12 )
LABEL_35:
            v14 = 0;
          else
            v14 = off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
          if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
            sub_100DAE60(v14);
          v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 532))(v2);
          v19[0] = *(float *)(v14 + 580) + *v15;
          v19[1] = v15[1] + *(float *)(v14 + 584);
          v19[2] = v15[2] + *(float *)(v14 + 588);
          sub_100E0D20(this, v19);
        }
      }
    }
  }
}
