int __thiscall sub_1001EB60(_BYTE *this, int *a2, int a3, int a4)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // esi
  char v11; // bl
  int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  double v15; // st4
  double v16; // st7
  double v17; // st4
  double v18; // st5
  int *v19; // ecx
  float v21; // [esp+0h] [ebp-64h]
  int v22[20]; // [esp+10h] [ebp-54h] BYREF
  char v23[4]; // [esp+60h] [ebp-4h] BYREF

  if ( *(_DWORD *)(a4 + 68) != 1 )
    goto LABEL_31;
  v5 = a2[11];
  if ( v5 == -1 )
    goto LABEL_31;
  v6 = &off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
  v7 = v5 >> 12;
  if ( off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v7 || !*v6 )
    goto LABEL_31;
  v8 = off_1061BE18[4 * (a2[11] & 0xFFF) + 2] == v7 ? *v6 : 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
    goto LABEL_31;
  v9 = a2[11];
  if ( v9 == -1 || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
  if ( v10 == (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 368))(this) || this[2680] )
    goto LABEL_31;
  v11 = 1;
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1868))(this);
  if ( sub_10077AB0(v23) )
  {
    while ( 1 )
    {
      v12 = sub_1001E870(a2);
      if ( (unsigned __int8)sub_1012B040(v12) )
        break;
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1868))(this);
      if ( !sub_10077340(v23) )
        goto LABEL_20;
    }
    v11 = 0;
  }
LABEL_20:
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60(this);
  v13 = a2[11];
  if ( v13 == -1 || off_1061BE18[4 * (a2[11] & 0xFFF) + 2] != v13 >> 12 )
    v14 = 0;
  else
    v14 = off_1061BE18[4 * (a2[11] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
    sub_100DAE60(v14);
  v15 = *(float *)(v14 + 580) - *((float *)this + 145);
  v16 = v15 * v15;
  v17 = *(float *)(v14 + 584) - *((float *)this + 146);
  v18 = *(float *)(v14 + 588) - *((float *)this + 147);
  v21 = v18 * v18 + v17 * v17 + v16;
  if ( off_10689708(v21) <= 360.0 && v11 )
  {
    sub_1001E4E0(v22, (int)a2);
    v19 = v22;
    *(float *)&v22[13] = (float)*((int *)this + 55);
  }
  else
  {
LABEL_31:
    v19 = a2;
  }
  return sub_100360A0((int)this, (int)v19, a3, a4);
}
