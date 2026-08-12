void *__thiscall sub_1019FF40(_DWORD *this)
{
  _DWORD *v2; // ecx
  void *result; // eax
  int v4; // esi

  v2 = (_DWORD *)this[300];
  if ( v2 )
  {
    result = (void *)sub_100F1890(v2, 0, 0, 0);
    this[300] = 0;
  }
  v4 = this[302];
  if ( v4 )
  {
    result = off_103DC81C;
    *(float *)(v4 + 24) = *((float *)off_103DC81C + 3);
  }
  return result;
}
