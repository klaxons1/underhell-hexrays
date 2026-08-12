int __thiscall sub_1000FC30(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int result; // eax

  v3 = this[282];
  if ( v3 == -1 || (v4 = (int *)((char *)off_103DCD74 + 16 * (this[282] & 0xFFF) + 4), v4[1] != v3 >> 12) )
    result = 0;
  else
    result = *v4;
  if ( result != a2 )
  {
    if ( a2 )
    {
      result = *(_DWORD *)(*(int (**)(void))(*(_DWORD *)a2 + 8))();
      this[282] = result;
    }
    else
    {
      this[282] = -1;
    }
  }
  return result;
}
