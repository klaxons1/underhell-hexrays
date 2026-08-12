void __cdecl sub_102311B0(void *a1, char *a2)
{
  char v2; // al
  char *v3; // ecx

  if ( a1 )
  {
    if ( a2 )
    {
      memset(a1, 0, 0x100u);
      v2 = *a2;
      if ( *a2 )
      {
        v3 = a2;
        do
        {
          ++v3;
          *((_BYTE *)a1 + v2) = 1;
          v2 = *v3;
        }
        while ( *v3 );
      }
    }
  }
}
