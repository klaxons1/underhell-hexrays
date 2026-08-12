int __thiscall sub_10395D80(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  _DWORD *v6; // ecx

  v2 = this[1408];
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4)
    && *v3
    && (v3[1] != v4 ? (v5 = 0) : (v5 = *v3),
        !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 284))(v5) && sub_103942C0((int)this)) )
  {
    return sub_10394DA0(v6);
  }
  else
  {
    return 0;
  }
}
