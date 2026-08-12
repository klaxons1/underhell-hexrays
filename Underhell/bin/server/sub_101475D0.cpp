char __thiscall sub_101475D0(int **this, int *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  int v7; // edx
  int v8; // esi
  int **i; // eax
  int **v10; // eax
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // ebx
  float v14; // [esp+8h] [ebp-1Ch]
  float v15; // [esp+8h] [ebp-1Ch]
  char v16[8]; // [esp+18h] [ebp-Ch] BYREF
  float v17; // [esp+20h] [ebp-4h]
  _DWORD *v18; // [esp+2Ch] [ebp+8h]

  v3 = (unsigned int)this[1];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * ((unsigned int)this[1] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( a2 == *(int **)(v5 + 424) )
    return 1;
  v7 = (int)this[24];
  v8 = 0;
  if ( v7 > 0 )
  {
    for ( i = this + 20; a2 != *i; ++i )
    {
      if ( ++v8 >= v7 )
        return 0;
    }
    v10 = &this[3 * v8];
    v11 = *a2;
    v18 = v10 + 25;
    (*(void (__stdcall **)(int **, int **))(v11 + 188))(v10 + 25, v10 + 37);
    v12 = (unsigned int)this[1];
    if ( v12 == -1 || off_1061BE18[4 * ((unsigned int)this[1] & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * ((unsigned int)this[1] & 0xFFF) + 1];
    if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
      sub_100DAE60(v13);
    sub_10421BA0(v18, v13 + 500, &v16);
    v14 = (*(float *)&this[v8 + 49] - v17) / *(float *)&this[v8 + 53];
    sub_10145F10(this, (int)this[v8 + 57], v14);
    v15 = -*(float *)&this[3 * v8 + 39];
    sub_10145F10(this, (int)this[v8 + 61], v15);
  }
  return 0;
}
