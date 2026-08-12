int __thiscall sub_10346F70(int this)
{
  int result; // eax
  int v3; // esi
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  const char *v7; // eax
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(_DWORD *)(this + 3644);
    if ( v4 != -1
      && (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1],
          v6 = v4 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v6)
      && *v5 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v6 )
        LOBYTE(v7) = (unsigned __int8)sub_100D6390((_DWORD *)*v5);
      else
        LOBYTE(v7) = (unsigned __int8)sub_100D6390(0);
    }
    else
    {
      v7 = "<none>";
    }
    sub_10429A00(Buffer, 0x200u, "Enemy     : %s", (char)v7);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
