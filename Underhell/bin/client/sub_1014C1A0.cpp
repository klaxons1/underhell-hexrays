int __thiscall sub_1014C1A0(char *this, const void *a2)
{
  int result; // eax
  _DWORD *v3; // ebx
  unsigned __int8 v4; // al
  char *v5; // eax

  result = sub_100DDA40(40);
  v3 = (_DWORD *)result;
  if ( result )
  {
    v4 = sub_1014C050((int)a2);
    qmemcpy(v3, a2, 0x20u);
    v5 = &this[40 * v4];
    v3[9] = v5;
    v3[8] = *((_DWORD *)v5 + 8);
    *((_DWORD *)v5 + 8) = v3;
    *(_DWORD *)(v3[8] + 36) = v3;
    return (int)v3;
  }
  return result;
}
