void __thiscall sub_100266A0(int this)
{
  int v2; // eax
  char v3; // cl
  _DWORD *v4; // eax
  int v5; // eax
  char v6; // cl
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // cl
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx

  if ( (unsigned __int8)sub_100697A0(23, 1) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
    v2 = sub_1007DB30(17);
    if ( v2 != -1 )
    {
      v3 = v2;
      if ( v2 != 999999999 )
      {
        v4 = (_DWORD *)(this + 4 * ((v2 - 1000000000) >> 5) + 2192);
        *v4 &= ~(1 << (v3 & 0x1F));
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
    v5 = sub_1007DB30(18);
    if ( v5 != -1 )
    {
      v6 = v5;
      if ( v5 != 999999999 )
      {
        v7 = (_DWORD *)(this + 4 * ((v5 - 1000000000) >> 5) + 2192);
        *v7 &= ~(1 << (v6 & 0x1F));
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v8 = sub_1007DB30(18);
  if ( v8 == -1
    || (v9 = v8 - 1000000000, v9 == -1)
    || ((1 << (v9 & 0x1F)) & *(_DWORD *)(this + 4 * (v9 >> 5) + 2192)) == 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
    v13 = sub_1007DB30(17);
    if ( v13 == -1 )
      goto LABEL_21;
    v14 = v13 - 1000000000;
    if ( v14 == -1 || ((1 << (v14 & 0x1F)) & *(_DWORD *)(this + 4 * (v14 >> 5) + 2192)) == 0 )
      goto LABEL_21;
LABEL_20:
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1352))(this);
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(this + 2716) & 0x40) == 0 )
  {
    if ( sub_10023FE0((_DWORD *)this, 18) )
      goto LABEL_21;
    goto LABEL_20;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v10 = sub_1007DB30(18);
  if ( v10 != -1 )
  {
    v11 = v10;
    if ( v10 != 999999999 )
    {
      v12 = (_DWORD *)(this + 4 * ((v10 - 1000000000) >> 5) + 2192);
      *v12 &= ~(1 << (v11 & 0x1F));
    }
  }
LABEL_21:
  v15 = *(_DWORD *)(this + 2716);
  if ( (v15 & 0x40) != 0 && *(float *)(this + 2824) < (double)*(float *)(dword_106B31C8 + 12) )
    *(_DWORD *)(this + 2716) = v15 & 0xFFFFFFBF;
}
