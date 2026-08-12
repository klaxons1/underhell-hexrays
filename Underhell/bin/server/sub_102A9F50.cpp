int __thiscall sub_102A9F50(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  char *v4; // eax
  _DWORD *v5; // eax
  unsigned int v7; // eax

  v2 = this[201];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[201] & 0xFFF) + 1], v3[1] != v2 >> 12) || !*v3 )
  {
    v4 = (char *)this[202];
    if ( !v4 )
      v4 = (char *)String;
    v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
    if ( !v5 )
    {
      DevMsg("Unable to find ai_goal_police target: %s\n", (const char *)this[202]);
      return 0;
    }
    this[201] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
  }
  v7 = this[201];
  if ( v7 == -1 || off_1061BE18[4 * (this[201] & 0xFFF) + 2] != v7 >> 12 )
    return 0;
  return off_1061BE18[4 * (this[201] & 0xFFF) + 1];
}
