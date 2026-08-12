const char *__cdecl type_info::_Name_base(const struct type_info *a1, struct __type_info_node *a2)
{
  const char *v2; // eax
  size_t i; // esi
  _DWORD *v5; // ebx
  rsize_t v6; // esi
  char *v7; // eax
  char *Source; // [esp+10h] [ebp-1Ch]

  if ( !*((_DWORD *)a1 + 1) )
  {
    v2 = (const char *)__unDName(0, (char *)a1 + 9, 0, (int)sub_100DDA40, (int)sub_10034930, 10240);
    Source = (char *)v2;
    if ( !v2 )
      return 0;
    for ( i = strlen(v2); i; Source[i] = 0 )
    {
      if ( Source[--i] != 32 )
        goto LABEL_9;
    }
    i = -1;
LABEL_9:
    _lock(14);
    if ( !*((_DWORD *)a1 + 1) )
    {
      v5 = (_DWORD *)sub_100DDA40(8);
      if ( v5 )
      {
        v6 = i + 2;
        v7 = (char *)sub_100DDA40(v6);
        *((_DWORD *)a1 + 1) = v7;
        if ( v7 )
        {
          if ( strcpy_s(v7, v6, Source) )
            _invoke_watson(0, 0, 0, 0, 0);
          *v5 = *((_DWORD *)a1 + 1);
          v5[1] = *((_DWORD *)a2 + 1);
          *((_DWORD *)a2 + 1) = v5;
        }
        else
        {
          sub_10034930((int)v5);
        }
      }
    }
    sub_10034930((int)Source);
    _unlock(14);
  }
  return (const char *)*((_DWORD *)a1 + 1);
}
