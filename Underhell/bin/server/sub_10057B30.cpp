int __thiscall sub_10057B30(int this)
{
  int result; // eax
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edi
  float v10; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(dword_10698344 + 48)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 2112))(*(_DWORD *)(this + 4))
    && sub_10023D10(*(_DWORD **)(this + 4), 21) )
  {
    return 43;
  }
  v3 = *(_DWORD *)(this + 20);
  if ( v3 == -1
    || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1],
        v5 = v3 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v5)
    || !*v4 )
  {
    sub_1004BA00((int *)this, 0);
LABEL_25:
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v8 = sub_1007DB30(100000);
    if ( sub_10023D10(*(_DWORD **)(this + 4), v8) )
    {
      if ( *(_DWORD *)(this + 20) == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
      {
        v9 = 0;
      }
      else
      {
        v9 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
      }
      v10 = *(float *)(this + 56) * 0.5;
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
          sub_100DAE60(v9);
        *(float *)(this + 92) = *(float *)(v9 + 580);
        *(float *)(this + 96) = *(float *)(v9 + 584);
        *(float *)(this + 100) = *(float *)(v9 + 588);
        *(float *)(this + 104) = v10;
      }
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 296))(this);
  }
  if ( off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 264))(v6) )
  {
    sub_100577F0(this, 0, 0);
    goto LABEL_13;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 292))(this) )
  {
LABEL_13:
    if ( sub_10051C40(this) )
      return 68;
    goto LABEL_25;
  }
  if ( sub_10051C40(this) )
    return 68;
  if ( !sub_10053910(this) )
    return 81;
  result = sub_10052650(this);
  if ( !result )
  {
    result = sub_10054150(this);
    if ( !result )
    {
      if ( sub_1004C220((_DWORD **)this, 4) )
      {
        v7 = sub_10039AE0(*(_DWORD **)(this + 4), 12, 0);
        if ( sub_10022CA0(*(_DWORD **)(this + 4), v7) )
          return 50;
      }
      goto LABEL_13;
    }
  }
  return result;
}
