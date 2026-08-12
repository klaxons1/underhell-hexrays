unsigned int __thiscall sub_102B0F00(int this)
{
  unsigned int result; // eax
  unsigned int v3; // edi

  result = sub_100D1940((_DWORD *)this);
  v3 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( (*(_BYTE *)(v3 + 3292) & 1) == 0 )
      {
        *(_BYTE *)(this + 1388) = 1;
        *(_DWORD *)(this + 1392) = 0;
      }
      return sub_100D3C30((int *)this);
    }
  }
  return result;
}
