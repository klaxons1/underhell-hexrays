char __thiscall sub_1039F060(int this)
{
  unsigned int v2; // eax
  float v4; // [esp+8h] [ebp-14h]

  LOBYTE(v2) = sub_1002FB90(this);
  if ( *(_DWORD *)(this + 3768) )
    LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3768) + 4))(
                   *(_DWORD *)(this + 3768),
                   this + 3736);
  if ( *(_DWORD *)(this + 3832) )
  {
    v2 = *(_DWORD *)(this + 3812);
    if ( v2 != -1 )
    {
      v2 >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3812) & 0xFFF) + 2] == v2 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 3812) & 0xFFF) + 1] )
        {
          LOBYTE(v2) = sub_1010C1D0(dword_10614CA8, this, "JoltVehicle");
          if ( !(_BYTE)v2 )
          {
            v4 = RandomFloat(3.0, 6.0);
            LOBYTE(v2) = sub_1010C7F0((float *)dword_10614CA8, this, "JoltVehicle", v4, 0, 0, 0);
          }
        }
      }
    }
  }
  return v2;
}
