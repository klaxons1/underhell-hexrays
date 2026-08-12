void __thiscall sub_10122570(void *this, float a2)
{
  bool v3; // zf
  int v4; // ecx
  int v5; // edx
  double v6; // st6
  int v7; // ecx
  int v8; // eax
  double v9; // st6
  unsigned int v10; // eax
  char *v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  char *v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  _DWORD v18[7]; // [esp+14h] [ebp-44h] BYREF
  float v19; // [esp+30h] [ebp-28h]
  int v20; // [esp+34h] [ebp-24h]
  char v21; // [esp+38h] [ebp-20h]
  __int16 v22; // [esp+39h] [ebp-1Fh]
  int v23; // [esp+3Ch] [ebp-1Ch]
  int v24[5]; // [esp+40h] [ebp-18h] BYREF
  __int16 v25; // [esp+54h] [ebp-4h]

  v3 = (*((_BYTE *)this + 80) & 1) == 0;
  *((_DWORD *)this + 15) = 0;
  if ( !v3 )
  {
    v4 = *((_DWORD *)this + 14);
    v5 = *((_DWORD *)this + 11);
    v19 = 0.0;
    v6 = *((float *)this + 18) * *((float *)this + 4);
    v18[0] = v4;
    v7 = *((_DWORD *)this + 16);
    v25 = -1;
    v8 = *((_DWORD *)this + 8);
    *(float *)&v18[2] = v6;
    v9 = *(float *)this;
    v18[6] = 0;
    v20 = 0;
    v22 = 0;
    v23 = -1;
    memset(v24, 0, sizeof(v24));
    v18[1] = v5;
    v18[3] = v8;
    v18[4] = v7 | 1;
    v18[5] = (int)v9;
    v21 = 0;
    if ( a2 != 0.0 )
      v19 = a2;
    v10 = *((_DWORD *)this + 13);
    if ( v10 != -1
      && (v11 = (char *)off_103DCD74 + 16 * (*((_DWORD *)this + 13) & 0xFFF) + 4,
          v12 = v10 >> 12,
          *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 13) & 0xFFF) + 2) == v12)
      && *(_DWORD *)v11 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 13) & 0xFFF) + 2) == v12 )
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v11 + 8) + 36))(*(_DWORD *)v11 + 8);
      else
        v13 = (*(int (**)(void))(MEMORY[8] + 36))();
    }
    else
    {
      v13 = -1;
    }
    sub_10121280((int)this + 76, v13, (int)v18);
    v14 = *((_DWORD *)this + 13);
    if ( v14 != -1
      && (v15 = (char *)off_103DCD74 + 16 * (*((_DWORD *)this + 13) & 0xFFF) + 4,
          v16 = v14 >> 12,
          *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 13) & 0xFFF) + 2) == v16)
      && *(_DWORD *)v15 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 13) & 0xFFF) + 2) == v16 )
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)v15 + 8) + 36))(*(_DWORD *)v15 + 8);
      else
        v17 = (*(int (**)(void))(MEMORY[8] + 36))();
    }
    else
    {
      v17 = -1;
    }
    sub_10120E20((int)this + 76, v17, *((char **)this + 12), (int)v24, *((float *)this + 26), 1);
    sub_1011A810(v24);
  }
  *((_DWORD *)this + 17) = 1;
}
