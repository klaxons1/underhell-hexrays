char __thiscall sub_1038B5C0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v8; // ecx

  if ( !*((_BYTE *)this + 4892) || !sub_102A8560((int)(this + 1219)) )
  {
    v3 = sub_101679A0((int)"gordon_precriminal");
    if ( sub_10167A00(v3) == 1 && (a2[4] & 8) != 0 && *a2 != -1 )
    {
      v4 = &off_1061BE18[4 * (*a2 & 0xFFF) + 1];
      v5 = *a2 >> 12;
      if ( off_1061BE18[4 * (*a2 & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          v6 = off_1061BE18[4 * (*a2 & 0xFFF) + 2] == v5 ? *v4 : 0;
          if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 1080))(this, v6) == 4 )
            return 0;
        }
      }
    }
  }
  v8 = this[906];
  if ( v8 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 224))(v8, a2);
  else
    return sub_100242F0(this, (int)a2);
}
