int __thiscall sub_100D1C30(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // eax
  int result; // eax

  v2 = *(_DWORD *)(this + 1120);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1], v3[1] == v2 >> 12)
    && (v4 = *v3) != 0 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
  }
  else
  {
    v5 = 0;
  }
  result = sub_102600F0(v5, String);
  --*(_DWORD *)(this + 1256);
  *(_BYTE *)(this + 1264) = 0;
  return result;
}
