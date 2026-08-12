int __thiscall sub_1005C2D0(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // esi

  v2 = this[5];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
      }
    }
  }
  v6 = sub_101811E0("rope_anchor", -1);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 76))(v6, this[1]);
  sub_100E0D20(this + 6);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
}
