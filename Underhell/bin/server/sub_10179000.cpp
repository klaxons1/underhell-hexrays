int __thiscall sub_10179000(int *this)
{
  int result; // eax
  int *v3; // edi
  int v4; // esi
  int *v5; // ecx

  (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 156))(dword_106B31D0, this[200], "a");
  result = this[62];
  v3 = this + 62;
  v4 = result | 1;
  if ( result != (result | 1) )
  {
    result = (int)(v3 - 62);
    if ( *((_BYTE *)v3 - 164) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v3 = v4;
    }
    else
    {
      v5 = *(int **)(result + 24);
      if ( v5 )
        result = sub_100194B0(v5, 248);
      *v3 = v4;
    }
  }
  return result;
}
