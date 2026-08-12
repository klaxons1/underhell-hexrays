void __thiscall sub_1010A2A0(_BYTE *this, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  const void *v6; // esi
  const void *v7; // ecx
  void **v8; // ecx
  void *v9; // esi
  char *v10; // eax
  type_info *v11; // eax
  const void *v12; // ecx

  if ( this[20] )
  {
    if ( !a2 )
    {
      if ( *a3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 2) != *a3 >> 12 )
        v6 = 0;
      else
        v6 = (const void *)*((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 1);
      if ( *a4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*a4 & 0xFFF) + 2) != *a4 >> 12 )
        v7 = 0;
      else
        v7 = (const void *)*((_DWORD *)off_103DCD74 + 4 * (*a4 & 0xFFF) + 1);
      sub_10109720((int)this, "EHandles differ (net) 0x%p (pred) 0x%p\n", v7, v6);
    }
    if ( *a3 != -1
      && (v8 = (void **)((char *)off_103DCD74 + 16 * (*a3 & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 2) == *a3 >> 12)
      && (v9 = *v8) != 0 )
    {
      v10 = sub_10034D90(*v8);
      if ( !*v10 )
      {
        v11 = (type_info *)__RTtypeid(v9);
        v10 = (char *)type_info::name(v11, (struct __type_info_node *)&unk_10481AF0);
      }
      if ( *a3 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 2) != *a3 >> 12 )
        v12 = 0;
      else
        v12 = (const void *)*((_DWORD *)off_103DCD74 + 4 * (*a3 & 0xFFF) + 1);
      sub_101097C0((int)this, a2, "EHandle (0x%p->%s)", v12, v10);
    }
    else
    {
      sub_101097C0((int)this, a2, "EHandle (NULL)");
    }
  }
}
