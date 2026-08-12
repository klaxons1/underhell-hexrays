char __thiscall sub_102DB1B0(_DWORD *this, _BYTE *a2, char a3)
{
  int v4; // eax

  v4 = sub_101C5260(this);
  if ( (_BYTE *)v4 != a2 )
  {
    if ( a3 != 1 || (LOBYTE(v4) = sub_101E48B0((int)a2, 35.0, 128.0), (_BYTE)v4) )
    {
      LOBYTE(v4) = sub_101C5290(a2);
      if ( !(_BYTE)v4 )
        LOBYTE(v4) = sub_103FD4C0(this, a2);
    }
  }
  return v4;
}
