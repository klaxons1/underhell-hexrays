char __thiscall sub_1011D2E0(char *this)
{
  char *v1; // esi
  char result; // al

  v1 = this - 4;
  result = sub_1011CD30(this - 4);
  if ( result )
  {
    *(float *)(*((_DWORD *)v1 + 4) + 96) = *((float *)off_103DC81C + 3);
    result = (char)off_103DC81C;
    *(float *)(*((_DWORD *)v1 + 4) + 100) = *((float *)off_103DC81C + 3);
  }
  return result;
}
