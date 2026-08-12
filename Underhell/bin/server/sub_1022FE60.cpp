unsigned int __thiscall sub_1022FE60(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  unsigned int result; // eax

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 820);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
    *(_DWORD *)(this + 884) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    *(_DWORD *)(this + 884) = -1;
  result = *(_DWORD *)(this + 884);
  if ( result == -1
    || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(this + 884) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 884) & 0xFFF) + 1] )
  {
    *(_DWORD *)(this + 820) = 0;
  }
  return result;
}
