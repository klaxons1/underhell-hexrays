int *__thiscall sub_100B5A00(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int *v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax
  int *v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  int *result; // eax

  sub_100DCF20(a2);
  v3 = this[911];
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (this[911] & 0xFFF) + 1], v5 = v3 >> 12, off_1061BE18[4 * (this[911] & 0xFFF) + 2] == v5)
    && *v4 )
  {
    if ( off_1061BE18[4 * (this[911] & 0xFFF) + 2] == v5 )
      a2 = *(_DWORD *)(*v4 + 260);
    else
      a2 = MEMORY[0x104];
  }
  else
  {
    a2 = 0;
  }
  this[915] = a2;
  v6 = this[912];
  if ( v6 != -1
    && (v7 = &off_1061BE18[4 * (this[912] & 0xFFF) + 1], v8 = v6 >> 12, off_1061BE18[4 * (this[912] & 0xFFF) + 2] == v8)
    && *v7 )
  {
    if ( off_1061BE18[4 * (this[912] & 0xFFF) + 2] == v8 )
      a2 = *(_DWORD *)(*v7 + 260);
    else
      a2 = MEMORY[0x104];
  }
  else
  {
    a2 = 0;
  }
  this[916] = a2;
  v9 = this[913];
  if ( v9 != -1
    && (v10 = &off_1061BE18[4 * (this[913] & 0xFFF) + 1],
        v11 = v9 >> 12,
        off_1061BE18[4 * (this[913] & 0xFFF) + 2] == v11)
    && *v10 )
  {
    if ( off_1061BE18[4 * (this[913] & 0xFFF) + 2] == v11 )
      a2 = *(_DWORD *)(*v10 + 260);
    else
      a2 = MEMORY[0x104];
  }
  else
  {
    a2 = 0;
  }
  this[917] = a2;
  v12 = this[914];
  if ( v12 != -1
    && (v13 = &off_1061BE18[4 * (this[914] & 0xFFF) + 1],
        v14 = v12 >> 12,
        off_1061BE18[4 * (this[914] & 0xFFF) + 2] == v14)
    && *v13 )
  {
    if ( off_1061BE18[4 * (this[914] & 0xFFF) + 2] == v14 )
      v15 = *v13;
    else
      v15 = 0;
    result = *(int **)(v15 + 260);
    this[918] = result;
  }
  else
  {
    result = &a2;
    a2 = 0;
    this[918] = 0;
  }
  return result;
}
