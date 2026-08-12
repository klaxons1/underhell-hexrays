int __thiscall sub_1010A3D0(_DWORD *this, int a2, _DWORD *a3, int a4, int a5)
{
  int result; // eax
  void **v7; // ecx
  void *v8; // esi
  char *v9; // eax
  type_info *v10; // eax
  const void *v11; // edx

  result = this[13];
  if ( result == this[6] )
  {
    if ( *a3 != -1
      && (v7 = (void **)((char *)off_103DCD74 + 16 * (*a3 & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 2) == *a3 >> 12)
      && (v8 = *v7) != 0 )
    {
      v9 = sub_10034D90(*v7);
      if ( !*v9 )
      {
        v10 = (type_info *)__RTtypeid(v8);
        v9 = (char *)type_info::name(v10, (struct __type_info_node *)&unk_10481AF0);
      }
      if ( *a3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 2) != *a3 >> 12 )
        v11 = 0;
      else
        v11 = (const void *)*((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 1);
      return sub_10109E10((int)this, "EHandle (0x%p->%s)", v11, v9);
    }
    else
    {
      return sub_10109E10((int)this, "EHandle (NULL)");
    }
  }
  return result;
}
