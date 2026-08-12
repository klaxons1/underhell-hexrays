int __thiscall sub_10265F70(int *this, unsigned __int8 a2)
{
  int result; // eax
  unsigned __int8 v3; // dl
  unsigned __int8 v4; // bl

  result = a2;
  if ( a2 < this[1] && a2 <= *((_BYTE *)this + 16) )
  {
    result = *this + 72 * a2;
    if ( *(_BYTE *)(result + 68) != a2 )
    {
      v3 = *(_BYTE *)(result + 69);
      v4 = *(_BYTE *)(result + 68);
      if ( v4 == 0xFF )
        *((_BYTE *)this + 12) = v3;
      else
        *(_BYTE *)(*this + 72 * v4 + 69) = v3;
      if ( v3 == 0xFF )
      {
        --*((_BYTE *)this + 15);
        *((_BYTE *)this + 13) = v4;
      }
      else
      {
        *(_BYTE *)(*this + 72 * v3 + 68) = v4;
        --*((_BYTE *)this + 15);
      }
      *(_BYTE *)(result + 69) = a2;
      *(_BYTE *)(result + 68) = a2;
    }
  }
  return result;
}
