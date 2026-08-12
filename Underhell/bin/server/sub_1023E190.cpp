char __thiscall sub_1023E190(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // esi
  char *v4; // ecx

  LOBYTE(v2) = sub_1023E0F0(this + 4, &a2);
  v3 = a2;
  if ( a2[17] )
  {
    v2 = sub_1023DDA0(a2);
    if ( v2 >= 0 )
    {
      v4 = (char *)v3[11];
      if ( !v4 )
        v4 = (char *)String;
      LOBYTE(v2) = sub_1023AF30(v2, v3[14], v4);
    }
    v3[17] = 0;
  }
  return v2;
}
