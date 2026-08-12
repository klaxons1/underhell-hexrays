int __thiscall sub_101F0510(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int *v6; // ecx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // eax
  int v20; // ebx
  int result; // eax
  int v22; // [esp-4h] [ebp-10h]

  sub_100C6890(this);
  v2 = *(_DWORD *)(this + 4264);
  if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4264) & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 4264) & 0xFFF) + 1];
  sub_101E7640((_DWORD *)this, v3);
  v4 = *(_DWORD *)(this + 3488);
  if ( !v4 )
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 116))(dword_106B3CDC);
  v5 = v4;
  if ( *(_DWORD *)(this + 3488) != v4 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 3488);
    }
    *(_DWORD *)(this + 3488) = v5;
  }
  *(_DWORD *)(this + 4384) = 0;
  v7 = sub_100CF460((_DWORD *)this);
  v8 = *(_DWORD *)(this + 4024);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4024) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 4024) & 0xFFF) + 1];
  if ( v7 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 876))(v7) )
  {
    if ( v9 )
    {
      v10 = sub_101E7EA0((_DWORD *)this, 0);
      v11 = sub_100BF520(v10, "Silencer");
      sub_100C1600(v9, v11, 0);
      v22 = 1;
      v12 = sub_101E7EA0((_DWORD *)this, 0);
LABEL_31:
      v17 = sub_100BF520(v12, "Silencer");
      sub_100C1600(v9, v17, v22);
    }
  }
  else if ( v9 )
  {
    v13 = *(_DWORD *)(this + 4024);
    if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4024) & 0xFFF) + 2] != v13 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(this + 4024) & 0xFFF) + 1];
    v15 = sub_100BF520(v14, "Silencer");
    sub_100C1600(v9, v15, 1);
    v16 = *(_DWORD *)(this + 4024);
    if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4024) & 0xFFF) + 2] != v16 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(this + 4024) & 0xFFF) + 1];
    v22 = 0;
    goto LABEL_31;
  }
  v18 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v19 = *(_DWORD **)(this + 1100);
  if ( v19 && *v19 )
    v20 = *(_DWORD *)(this + 1100);
  else
    v20 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
  result = sub_100BD5F0(v20, "body_pitch");
  *(_DWORD *)(this + 4400) = result;
  return result;
}
