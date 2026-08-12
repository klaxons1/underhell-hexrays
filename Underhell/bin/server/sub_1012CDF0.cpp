int __thiscall sub_1012CDF0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx

  result = *((unsigned __int16 *)this + a2 + 2);
  if ( result != 0xFFFF )
  {
    v3 = this[2052];
    if ( v3 > 0 )
    {
      v4 = this[2049];
      *(_DWORD *)(v4 + 8 * result) = *(_DWORD *)(v4 + 8 * v3 - 8);
      *(_DWORD *)(v4 + 8 * result + 4) = *(_DWORD *)(v4 + 8 * v3 - 4);
      --this[2052];
    }
    *((_WORD *)this + a2 + 2) = -1;
    if ( result < this[2052] )
      *((_WORD *)this + *(unsigned __int16 *)(this[2049] + 8 * result) + 2) = result;
  }
  return result;
}
