void __thiscall sub_1036D280(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  double v7; // st7
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  void (__thiscall *v15)(int *, _DWORD, float *, _DWORD); // edx
  char v16[12]; // [esp+1Ch] [ebp-48h] BYREF
  char v17[4]; // [esp+28h] [ebp-3Ch] BYREF
  float v18; // [esp+2Ch] [ebp-38h]
  float v19[3]; // [esp+34h] [ebp-30h] BYREF
  float v20; // [esp+40h] [ebp-24h] BYREF
  float v21; // [esp+44h] [ebp-20h]
  float v22; // [esp+4Ch] [ebp-18h]
  float v23; // [esp+50h] [ebp-14h]
  float v24; // [esp+54h] [ebp-10h]
  float v25; // [esp+58h] [ebp-Ch] BYREF
  float v26; // [esp+5Ch] [ebp-8h]
  float v27; // [esp+60h] [ebp-4h]

  v2 = this[77];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  sub_104222B0(v4 + 704, v19, &v20, 0);
  v5 = this[917];
  if ( !v5 )
  {
    v25 = v20 * -1.0;
    v7 = -1.0 * v21;
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v25 = v19[0];
    v7 = v19[1];
    goto LABEL_13;
  }
  if ( v6 == 1 )
  {
    v25 = v20;
    v7 = v21;
LABEL_13:
    v26 = v7;
  }
  v27 = 0.0;
  off_10689714();
  sub_10422540(&v25, v17);
  (*(void (__thiscall **)(int *, int))(*this + 1416))(this, 17);
  sub_100C2660((int)this, 0.0);
  (*(void (__thiscall **)(int *, _DWORD, int))(*this + 140))(this, 0, -1);
  sub_100EA9A0(this, 1024);
  sub_100EAB80(this, 8);
  *(float *)(this[651] + 20) = v18;
  v8 = (*(int (__thiscall **)(int *))(*this + 1480))(this);
  if ( !v8 )
    goto LABEL_22;
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  v22 = *(float *)(v8 + 580) - *((float *)this + 145);
  v23 = *(float *)(v8 + 584) - *((float *)this + 146);
  v24 = 0.0;
  if ( off_10689714() < 250.0 && v23 * v26 + v22 * v25 + v24 * v27 >= 0.866 )
  {
    sub_10044830(this, 0.0);
    v9 = *this;
    v10 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)v8 + 504))(v8, v16, 0);
    (*(void (__thiscall **)(int *, _DWORD, int))(v9 + 2208))(this, 0, v10);
    sub_1036A4C0((int)this);
  }
  else
  {
LABEL_22:
    v11 = this[722];
    if ( v11 != -1
      && (v12 = &off_1061BE18[4 * (this[722] & 0xFFF) + 1],
          v13 = v11 >> 12,
          off_1061BE18[4 * (this[722] & 0xFFF) + 2] == v13)
      && *v12 )
    {
      if ( off_1061BE18[4 * (this[722] & 0xFFF) + 2] == v13 )
        sub_1036CCF0(this, (_DWORD *)*v12);
      else
        sub_1036CCF0(this, 0);
      sub_1036A4C0((int)this);
    }
    else
    {
      v14 = (unsigned int)this[63] >> 11;
      v25 = v25 * 100.0;
      v26 = v26 * 100.0;
      v27 = 100.0 * v27;
      if ( (v14 & 1) != 0 )
        sub_100DAE60((int)this);
      v15 = *(void (__thiscall **)(int *, _DWORD, float *, _DWORD))(*this + 2208);
      v25 = v25 + *((float *)this + 145);
      v26 = *((float *)this + 146) + v26;
      v27 = *((float *)this + 147) + v27;
      v15(this, 0, &v25, 0);
      sub_1036A4C0((int)this);
    }
  }
}
