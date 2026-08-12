char *__thiscall sub_102CA800(int this)
{
  char *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  char *v6; // edx

  result = sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 1104) )
  {
    if ( !*(_DWORD *)(this + 1108) )
    {
      result = *(char **)(this + 300);
      if ( result != (char *)-1 )
      {
        result = (char *)((unsigned int)result >> 12);
        if ( (char *)off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == result )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1] )
          {
            v3 = sub_10019AD0((_DWORD *)this);
            result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 208))(v3);
            if ( result )
            {
              v4 = sub_10019AD0((_DWORD *)this);
              v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 208))(v4);
              v6 = *(char **)(this + 1104);
              if ( !v6 )
                v6 = (char *)String;
              result = (char *)sub_100BEF30(v5, v6);
              *(_DWORD *)(this + 1108) = result;
            }
          }
        }
      }
    }
  }
  return result;
}
