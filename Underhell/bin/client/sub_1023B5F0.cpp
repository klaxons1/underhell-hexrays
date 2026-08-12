int __thiscall sub_1023B5F0(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edx
  int result; // eax

  v3 = this[29];
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_6:
    result = (int)a3;
    *a2 = *a3;
  }
  else
  {
    result = this[26] + 4;
    while ( !*(_BYTE *)(result + 8) || *(_DWORD **)result != a2 )
    {
      ++v4;
      result += 16;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
  }
  return result;
}
