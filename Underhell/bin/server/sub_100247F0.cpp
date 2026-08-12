int __thiscall sub_100247F0(char *this)
{
  int v2; // ecx
  char *v3; // esi
  float *v4; // eax
  double v5; // st7
  double v6; // st4
  double v7; // st5
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  char *v11; // esi
  unsigned int v12; // edi
  float v14; // [esp+4h] [ebp-83Ch]
  _DWORD v15[514]; // [esp+14h] [ebp-82Ch] BYREF
  char v16[12]; // [esp+81Ch] [ebp-24h] BYREF
  char v17[12]; // [esp+828h] [ebp-18h] BYREF
  float v18; // [esp+834h] [ebp-Ch]
  char *v19; // [esp+838h] [ebp-8h]
  float v20; // [esp+83Ch] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)this + 658) )
  {
    v2 = *((_DWORD *)this + 63) >> 11;
    v18 = 16384.0;
    v19 = 0;
    if ( (v2 & 1) != 0 )
      sub_100DAE60(this);
    sub_10261520((int)(this + 580), 1024.0, 0);
    v3 = (char *)sub_1025EEE0(v15);
    if ( v3 )
    {
      do
      {
        if ( v3 != this && (sub_100D7680(v3) || v3[256] < 0) )
        {
          if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
            sub_100DAE60(this);
          v4 = (float *)(*(int (__thiscall **)(char *, char *))(*(_DWORD *)v3 + 504))(v3, v17);
          v5 = *((float *)this + 145) - *v4;
          v6 = *((float *)this + 146) - v4[1];
          v7 = *((float *)this + 147) - v4[2];
          v14 = v7 * v7 + v6 * v6 + v5 * v5;
          v8 = off_10689708(v14);
          v20 = v8;
          if ( v8 < v18 )
          {
            v9 = *(_DWORD *)this;
            v10 = (*(int (__thiscall **)(char *, char *))(*(_DWORD *)v3 + 504))(v3, v16);
            if ( (*(unsigned __int8 (__thiscall **)(char *, int))(v9 + 1820))(this, v10) )
            {
              v19 = v3;
              v18 = v20;
            }
          }
        }
        ++v15[0];
        v3 = (char *)sub_1025EEE0(v15);
      }
      while ( v3 );
      v11 = v19;
      if ( v19 )
      {
        v20 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 5));
        *((float *)this + 658) = (double)SLODWORD(v20) + *(float *)(dword_106B31C8 + 12);
        *((_DWORD *)this + 666) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v11 + 8))(v11);
      }
    }
  }
  v12 = *((_DWORD *)this + 666);
  if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (v12 & 0xFFF) + 1];
}
