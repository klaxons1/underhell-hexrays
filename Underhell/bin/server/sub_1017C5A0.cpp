_DWORD *__thiscall sub_1017C5A0(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  char *v8; // eax
  _DWORD *v9; // eax
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  _DWORD *result; // eax

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 212);
  if ( !v2 )
    goto LABEL_13;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
    *(_DWORD *)(this + 832) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    *(_DWORD *)(this + 832) = -1;
  v4 = *(_DWORD *)(this + 832);
  if ( v4 == -1
    || (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 832) & 0xFFF) + 1],
        v6 = v4 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 832) & 0xFFF) + 2] != v6)
    || !*v5
    || (off_1061BE18[4 * (*(_DWORD *)(this + 832) & 0xFFF) + 2] != v6 ? (v7 = 0) : (v7 = *v5), !*(_DWORD *)(v7 + 24)) )
  {
    Warning("logic_lineto - Target not found or target with no origin!\n");
LABEL_13:
    *(_DWORD *)(this + 832) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  }
  v8 = *(char **)(this + 824);
  if ( !v8 )
  {
LABEL_26:
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
    *(_DWORD *)(this + 828) = *result;
    return result;
  }
  v9 = sub_1012BF20(&dword_1069E3E0, 0, v8, 0, 0, 0, 0);
  if ( v9 )
    *(_DWORD *)(this + 828) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9);
  else
    *(_DWORD *)(this + 828) = -1;
  v10 = *(_DWORD *)(this + 828);
  if ( v10 == -1
    || (v11 = &off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 1],
        v12 = v10 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 2] != v12)
    || !*v11
    || (off_1061BE18[4 * (*(_DWORD *)(this + 828) & 0xFFF) + 2] != v12 ? (result = 0) : (result = (_DWORD *)*v11),
        !result[6]) )
  {
    Warning("logic_lineto - Source not found or source with no origin!\n");
    goto LABEL_26;
  }
  return result;
}
