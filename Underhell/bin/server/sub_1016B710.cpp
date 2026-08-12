int __thiscall sub_1016B710(void *this)
{
  int result; // eax
  int **v3; // ecx
  int *v4; // edi

  result = *((_DWORD *)this + 6);
  if ( result && *((_DWORD *)this + 4) )
  {
    v3 = (int **)*((_DWORD *)this + 1);
    v4 = *v3;
    *(float *)this = *(float *)(dword_106B31C8 + 12) + *((float *)*v3 + 6);
    sub_1016B4E0(v4, result);
    sub_1016B690(v4);
    sub_10184660(v4);
    result = *((_DWORD *)this + 4) - 1;
    if ( result > 0 )
      result = (int)memcpy(*((void **)this + 1), (const void *)(*((_DWORD *)this + 1) + 4), 4 * result);
    --*((_DWORD *)this + 4);
  }
  return result;
}
