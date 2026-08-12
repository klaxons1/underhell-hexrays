int __thiscall sub_1008DA00(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  const char *v4; // eax

  result = (int)this;
  if ( a2 )
  {
    v3 = this[1];
    if ( v3 < 256 )
    {
      this[v3 + 2] = a2;
      ++this[1];
    }
    else
    {
      v4 = (const char *)(*(int (**)(void))(*(_DWORD *)a2 + 8))();
      return DevWarning(1, "No room for effect %s\n", v4);
    }
  }
  return result;
}
