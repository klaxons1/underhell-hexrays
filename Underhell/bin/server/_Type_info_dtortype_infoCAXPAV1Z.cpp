void __cdecl type_info::_Type_info_dtor(struct type_info *a1)
{
  int v1; // ecx
  int v2; // eax
  _DWORD *v3; // edx

  _lock(14);
  v1 = *((_DWORD *)a1 + 1);
  if ( v1 )
  {
    v2 = dword_10700B34;
    v3 = &unk_10700B30;
    while ( dword_10700B34 )
    {
      if ( *(_DWORD *)dword_10700B34 == v1 )
      {
        v3[1] = *(_DWORD *)(dword_10700B34 + 4);
        sub_10184660(v2);
        break;
      }
      v3 = (_DWORD *)dword_10700B34;
    }
    sub_10184660(*((_DWORD *)a1 + 1));
    *((_DWORD *)a1 + 1) = 0;
  }
  _unlock(14);
}
