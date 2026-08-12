int __thiscall sub_101F8CF0(void *this)
{
  int v2; // edi
  int result; // eax

  if ( *(_DWORD *)this )
  {
    do
    {
      v2 = *(_DWORD *)(*(_DWORD *)this + 5980);
      if ( *(_DWORD *)this )
        result = sub_101FB4B0(1);
      *(_DWORD *)this = v2;
    }
    while ( v2 );
  }
  return result;
}
