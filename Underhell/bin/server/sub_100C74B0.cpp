int __thiscall sub_100C74B0(volatile signed __int32 *this, int a2, char a3)
{
  int result; // eax
  int v5; // eax
  const char *v6; // edi
  const char *v7; // eax
  _DWORD *v8; // ecx

  if ( sub_100C4E40(this, a2) != -1 )
    return sub_100C4E40(this, a2);
  v5 = sub_100BDCE0((int)this, a2);
  if ( v5 > 0 )
  {
    result = sub_100C71D0(this, v5, 0);
    if ( result >= 0 && result < *((_DWORD *)this + 283) )
    {
      v8 = (_DWORD *)(*((_DWORD *)this + 280) + 76 * result);
      if ( (*(_BYTE *)v8 & 1) != 0 )
      {
        if ( a3 )
          *v8 |= 2u;
        else
          *v8 &= ~2u;
      }
    }
    if ( result != -1 )
      *(_DWORD *)(*((_DWORD *)this + 280) + 76 * result + 52) = a2;
  }
  else
  {
    v6 = sub_10008F90(a2);
    v7 = *(const char **)(*(int (__thiscall **)(volatile signed __int32 *, char *))(*this + 28))(this, &a3);
    if ( !v7 )
      v7 = String;
    DevMsg("CBaseAnimatingOverlay::AddGesture:  model %s missing activity %s\n", v7, v6);
    return -1;
  }
  return result;
}
