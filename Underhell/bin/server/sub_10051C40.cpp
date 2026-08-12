BOOL __thiscall sub_10051C40(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  BOOL result; // eax

  v2 = *(_DWORD *)(this + 20);
  result = 0;
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5)
          && sub_10023D10(*(_DWORD **)(this + 4), 67) )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
