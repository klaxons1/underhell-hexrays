int __thiscall sub_10392B60(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int result; // eax

  v3 = *(_DWORD *)(this + 3624);
  if ( v3 )
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 136))(v3, a2);
  else
    v4 = sub_1002CC40((_DWORD *)this, a2);
  v5 = v4;
  v6 = *(_DWORD *)(this + 2324);
  if ( v6 != 3 && v6 != 2
    || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2740) >= 4.0
    && (!(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) || sub_10023D10((_DWORD *)this, 39)) )
  {
    goto LABEL_15;
  }
  switch ( v5 )
  {
    case 1:
      return 76;
    case 6:
      return 7;
    case 11:
      return 12;
  }
LABEL_15:
  switch ( v5 )
  {
    case 309:
      return 306;
    case 352:
      return 344;
    case 353:
      return 348;
  }
  result = 270;
  if ( v5 != 273 )
    return v5;
  return result;
}
