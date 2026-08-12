_DWORD *__thiscall sub_10170B80(int this)
{
  unsigned int v2; // eax
  char *v3; // eax
  unsigned int v4; // eax
  _DWORD *result; // eax
  char *v6; // eax

  sub_100E38F0((float *)this);
  v2 = *(_DWORD *)(this + 800);
  if ( v2 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] != v2 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1] )
  {
    v3 = *(char **)(this + 808);
    if ( !v3 )
      v3 = (char *)String;
    sub_101707F0((_DWORD *)this, v3);
  }
  v4 = *(_DWORD *)(this + 804);
  if ( v4 == -1
    || (result = (_DWORD *)(v4 >> 12), (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1] )
  {
    v6 = *(char **)(this + 212);
    if ( !v6 )
      v6 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, 0, 0, 0);
    if ( result )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
      *(_DWORD *)(this + 804) = *result;
    }
    else
    {
      *(_DWORD *)(this + 804) = -1;
    }
  }
  return result;
}
