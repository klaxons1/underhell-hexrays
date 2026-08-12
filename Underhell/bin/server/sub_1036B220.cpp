void __thiscall sub_1036B220(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  float v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  float v10[3]; // [esp+10h] [ebp-30h] BYREF
  float v11; // [esp+1Ch] [ebp-24h]
  float v12; // [esp+20h] [ebp-20h]
  float v13; // [esp+24h] [ebp-1Ch]
  float v14; // [esp+28h] [ebp-18h]
  float v15; // [esp+2Ch] [ebp-14h]
  float v16; // [esp+30h] [ebp-10h]
  int v17; // [esp+34h] [ebp-Ch] BYREF
  float v18; // [esp+38h] [ebp-8h]
  int v19; // [esp+3Ch] [ebp-4h]

  v2 = this[77];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  sub_10422220(v4 + 704, v10);
  v11 = v10[0];
  v12 = v10[1];
  v13 = 0.0;
  off_10689714();
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v5 = *((float *)this + 146);
  v6 = this[147];
  v17 = this[145];
  v18 = v5;
  v19 = v6;
  v7 = sub_10072DB0((int)this, 450, 0, 256.0, &v17);
  if ( (v7 || *(_DWORD *)(dword_10698344 + 48) && (v7 = sub_10072DB0((int)this, 451, 0, 120.0, &v17)) != 0)
    && !sub_10070BB0(v7) )
  {
    sub_10044830(this, 0.0);
    sub_100448D0(this, v7);
    sub_10070B10((_DWORD *)v7, (int)this);
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    v14 = *(float *)(v7 + 580) - *(float *)&v17;
    v15 = *(float *)(v7 + 584) - v18;
    v16 = 0.0;
    off_10689714();
    if ( v14 * v11 + v12 * v15 + v16 * v13 >= 0.70700002 )
    {
      this[917] = 1;
      goto LABEL_24;
    }
    if ( v11 * v15 - v12 * v14 <= 0.0 )
      v8 = 2;
    else
      v8 = 0;
  }
  else
  {
    v8 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
  }
  this[917] = v8;
LABEL_24:
  v9 = this[917];
  if ( v9 )
  {
    if ( v9 == 2 )
      sub_10039F40(this, dword_106E80FC);
    else
      sub_10039F40(this, dword_106E8100);
  }
  else
  {
    sub_10039F40(this, dword_106E8104);
  }
}
