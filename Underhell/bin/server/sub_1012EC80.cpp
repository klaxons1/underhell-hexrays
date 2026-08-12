void *__thiscall sub_1012EC80(_DWORD *this)
{
  _DWORD *v1; // edi
  char *v2; // esi
  int v3; // ebx
  void *result; // eax

  v1 = this + 320200;
  v2 = (char *)(this + 200);
  v3 = 5;
  do
  {
    result = memset(v2, 0, 0x3E800u);
    *v1++ = v2;
    v2 += 256000;
    --v3;
  }
  while ( v3 );
  return result;
}
