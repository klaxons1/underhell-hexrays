char __thiscall sub_1022E2B0(_DWORD *this, const char *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // eax

  v3 = 0;
  if ( (int)this[4] <= 0 )
  {
LABEL_4:
    *a3 = 0;
    LOBYTE(v4) = 0;
  }
  else
  {
    while ( strcmp(a2, (const char *)this[2 * *((char *)this + v3 + 24) + 71]) )
    {
      if ( ++v3 >= this[4] )
        goto LABEL_4;
    }
    *a3 = this[2 * *((char *)this + v3 + 24) + 70];
    return *((_BYTE *)this + v3 + 24);
  }
  return v4;
}
