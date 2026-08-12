void __thiscall sub_1011AC20(int this, _DWORD *a2, int a3)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  int v13; // ebx
  int v14; // eax
  _BYTE *v15; // eax
  _DWORD *v16; // eax
  _BYTE *v17; // eax
  int v18; // eax
  unsigned int v19; // eax
  double v20; // st7
  int v21; // eax
  int v22; // ecx
  double v23; // st6
  int v24; // eax
  double v25; // st6
  float v26; // [esp+4h] [ebp-14h]
  float v27; // [esp+4h] [ebp-14h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  if ( !byte_1069BF89 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 1212))(a2) )
    return;
  v4 = sub_10118620();
  v5 = *(_DWORD *)(this + 80);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 80) & 0xFFF) + 2] != *(_DWORD *)(this + 80) >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 80) & 0xFFF) + 1];
  if ( v6 != v4 )
  {
    if ( v5 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 80) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 80) & 0xFFF) + 1] )
    {
      *(_BYTE *)(sub_1026A890(this + 80) + 1161) = 0;
    }
    if ( v4 )
    {
      sub_10118B90(v4, 1);
      *(_DWORD *)(this + 80) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    }
    else
    {
      *(_DWORD *)(this + 80) = -1;
    }
  }
  v7 = a3;
  v8 = *(_DWORD *)(a3 + 36);
  v9 = v8 & (v8 ^ *(_DWORD *)(this + 12));
  *(_DWORD *)(this + 12) = v8;
  if ( (*(_BYTE *)(v7 + 36) & 0x20) == 0 )
    *(_DWORD *)(this + 24) &= ~0x20u;
  v10 = v9 & 0x20;
  a3 = v10;
  if ( (v9 & 0x20) != 0 )
  {
    if ( (v9 & 0x800) != 0 )
    {
      if ( sub_101179D0((_DWORD *)this) )
      {
        v11 = (_BYTE *)sub_101179D0((_DWORD *)this);
        if ( sub_101172E0(v11) )
          goto LABEL_37;
      }
      sub_1011A580(this, (int)a2);
    }
    else if ( sub_1026A890(this + 80) )
    {
      if ( !sub_101179D0((_DWORD *)this) || (v12 = (_BYTE *)sub_101179D0((_DWORD *)this), !sub_101172E0(v12)) )
      {
        if ( sub_101179D0((_DWORD *)this) )
        {
          v13 = sub_1026A890(this + 80);
          if ( sub_101179D0((_DWORD *)this) != v13 )
          {
            v14 = sub_101179D0((_DWORD *)this);
            if ( *(_BYTE *)(v14 + 1268) )
              sub_101194F0(v14, 1);
          }
          v10 = a3;
        }
        v15 = (_BYTE *)sub_1026A890(this + 80);
        sub_1011A700(v15);
      }
    }
    else
    {
      if ( !sub_101179D0((_DWORD *)this) )
        goto LABEL_37;
      v16 = (_DWORD *)sub_101179D0((_DWORD *)this);
      if ( !sub_10117730(v16) )
        goto LABEL_37;
      v17 = (_BYTE *)sub_101179D0((_DWORD *)this);
      if ( !sub_101172E0(v17) )
      {
        v18 = sub_101179D0((_DWORD *)this);
        if ( *(_BYTE *)(v18 + 1268) )
          sub_101194F0(v18, 1);
      }
    }
    *(_DWORD *)(v7 + 36) &= ~0x20u;
    *(_DWORD *)(this + 24) |= v10;
  }
LABEL_37:
  v19 = *(_DWORD *)(this + 84);
  v20 = 0.0;
  if ( v19 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 84) & 0xFFF) + 2] == v19 >> 12 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 84) & 0xFFF) + 1] )
    {
      v21 = sub_101179D0((_DWORD *)this);
      v20 = 0.0;
      if ( sub_10117670(v21) )
      {
        *(_DWORD *)(v7 + 36) &= 0xFFFFF9E1;
        *(float *)(v7 + 32) = 0.0;
        *(float *)(v7 + 28) = 0.0;
        *(float *)(v7 + 24) = 0.0;
      }
    }
  }
  *(_DWORD *)(v7 + 36) &= ~*(_DWORD *)(this + 24);
  v22 = *(_DWORD *)(this + 36);
  if ( v22 && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 32) )
  {
    switch ( v22 )
    {
      case 1:
        *(_DWORD *)(this + 36) = 2;
        v23 = *(float *)(dword_106B31C8 + 12);
        a3 = -16777216;
        *(float *)(this + 32) = v23 + 0.35;
        v26 = v20;
        sub_102600B0((int)a2, (int)&a3, 0.30000001, v26, 26);
        break;
      case 2:
        if ( sub_1026A890(this + 88) )
        {
          v24 = sub_1026A890(this + 88);
          sub_10117A40(v24, (int)&savedregs, v7, this, a2);
        }
        *(_DWORD *)(this + 36) = 3;
        *(float *)(this + 32) = *(float *)(dword_106B31C8 + 12) + 0.6;
        break;
      case 3:
        *(_DWORD *)(this + 36) = 0;
        v25 = *(float *)(dword_106B31C8 + 12);
        a3 = -16777216;
        *(float *)(this + 32) = v25 + 0.25;
        v27 = v20;
        sub_102600B0((int)a2, (int)&a3, 0.30000001, v27, 17);
        break;
    }
  }
}
