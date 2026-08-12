int __thiscall sub_1010B210(_DWORD *this, _DWORD *a2, void *Src)
{
  _DWORD *v4; // eax
  char *v5; // eax
  int result; // eax
  char *v7; // eax

  *(_BYTE *)this &= 0xFCu;
  this[1] = -1;
  sub_1022D0A0((void *)Locale);
  sub_100CEE70(this + 47);
  this[5] = 0;
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 60))(a2);
  if ( v4 )
  {
    if ( sub_1010B110((char *)Src, v4, this + 2) && this[5] )
    {
      this[1] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
      result = sub_1022D0A0(Src);
      *(_BYTE *)this |= 1u;
    }
    else
    {
      v7 = sub_10034D90(a2);
      return Msg("No field '%s' in datamap_t for entity %d/%s\n", (const char *)Src, a2[20], v7);
    }
  }
  else
  {
    v5 = sub_10034D90(a2);
    return Msg("No prediction datamap_t for entity %d/%s\n", a2[20], v5);
  }
  return result;
}
