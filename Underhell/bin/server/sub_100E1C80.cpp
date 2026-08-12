int __thiscall sub_100E1C80(int this, int a2, int a3)
{
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int result; // eax
  int v12; // esi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  int *v17; // ecx
  int v18; // ecx
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // [esp-4h] [ebp-F0h]
  _BYTE v22[64]; // [esp+Ch] [ebp-E0h] BYREF
  _BYTE v23[64]; // [esp+4Ch] [ebp-A0h] BYREF
  float v24[16]; // [esp+8Ch] [ebp-60h] BYREF
  float v25[3]; // [esp+CCh] [ebp-20h] BYREF
  float v26[3]; // [esp+D8h] [ebp-14h] BYREF
  int v27; // [esp+E4h] [ebp-8h]
  bool v28; // [esp+EBh] [ebp-1h]

  if ( a3 == -1 )
    LOBYTE(a3) = *(_BYTE *)(this + 305);
  v4 = *(_DWORD *)(this + 300);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] != *(_DWORD *)(this + 300) >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
  v28 = v5 == 0;
  if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    v27 = 0;
  else
    v27 = off_1061BE18[4 * (v4 & 0xFFF) + 1];
  sub_1016AF10(this);
  if ( a2 )
    *(_DWORD *)(this + 300) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 300) = -1;
  v6 = *(_DWORD *)(this + 300);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
  if ( v7 == this )
    *(_DWORD *)(this + 300) = -1;
  v8 = *(_DWORD *)(this + 300);
  if ( v8 != -1
    && (v9 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1],
        v10 = v8 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v10)
    && *v9 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v10 )
      v13 = *v9;
    else
      v13 = 0;
    *(_DWORD *)(this + 100) = *(_DWORD *)(v13 + 260);
    sub_101129A0(*(_WORD *)(this + 356) & 0xFEFF);
    if ( a2 )
    {
      v14 = sub_100E99F0(a2);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v14 + 320) + 44))(v14 + 320) == 1 )
      {
        sub_101129A0(*(unsigned __int16 *)(this + 356) | 0x100);
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 44))(this + 320) == 1 )
      {
        sub_10112C00(6);
      }
    }
    if ( *(_DWORD *)(this + 24) )
    {
      v15 = *(_DWORD *)(this + 300);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] != v15 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
      sub_1016B0D0(v16, this);
      if ( (_BYTE)a3 != *(_BYTE *)(this + 305) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v17 = *(int **)(this + 24);
          if ( v17 )
            sub_100194B0(v17, 305);
        }
        *(_BYTE *)(this + 305) = a3;
      }
      sub_102608F0(a2, *(unsigned __int8 *)(this + 305));
      sub_102621B0(this);
      sub_100D5C50(v24, v26, (float *)(this + 716));
      sub_10426080(v22);
      sub_104257C0(v23, v24);
      sub_10421A90(v24, v25);
      sub_100E11A0(this, v25);
      sub_1025F370(this, v26, 0);
      if ( v28 )
        sub_100D5F80(this);
      else
        sub_100D5F20(v27, this);
    }
    v18 = *(_DWORD *)(this + 424);
    if ( v18 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 4))(v18) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 424) + 44))(
             *(_DWORD *)(this + 424),
             0) )
      {
        v19 = *(const char **)(this + 92);
        if ( !v19 )
          v19 = String;
        v21 = v19;
        v20 = sub_100D6390((_DWORD *)this);
        Warning("SetParent on static object, all constraints attached to %s (%s)will now be broken!\n", v20, v21);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 592))(this);
      sub_100E9630(0, 0, 0);
    }
    return sub_100E8D20(this);
  }
  else
  {
    *(_DWORD *)(this + 100) = 0;
    result = sub_101C46F0(2);
    v12 = result;
    if ( result )
    {
      sub_10262870(v27, result + 8, result + 20);
      return sub_10262870(v27, v12 + 40, v12 + 52);
    }
  }
  return result;
}
