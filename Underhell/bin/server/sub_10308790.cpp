_DWORD *__thiscall sub_10308790(_DWORD *this, int *a2)
{
  _DWORD *result; // eax
  char *v3; // eax
  _DWORD *v4; // eax
  const char *v5; // eax
  const char *v6; // ecx

  result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*this + 264))(this);
  if ( (_BYTE)result )
  {
    if ( a2[6] == 2 )
    {
      v3 = (char *)a2[2];
      if ( !v3 )
        v3 = (char *)String;
    }
    else
    {
      v3 = (char *)sub_1010D460((int)(a2 + 2));
    }
    v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, *a2, a2[1], 0);
    if ( v4 )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 8))(v4);
      this[925] = *result;
    }
    else
    {
      if ( a2[6] == 2 )
      {
        if ( a2[2] )
          v5 = (const char *)a2[2];
        else
          v5 = String;
      }
      else
      {
        v5 = sub_1010D460((int)(a2 + 2));
      }
      v6 = (const char *)this[23];
      if ( !v6 )
        v6 = String;
      result = (_DWORD *)Warning("**Guard %s cannot find shove target %s\n", v6, v5);
      this[925] = -1;
    }
  }
  return result;
}
