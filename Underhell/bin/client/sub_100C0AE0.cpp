int __thiscall sub_100C0AE0(_BYTE *this, unsigned int *a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ebx
  unsigned int v6; // edi
  int result; // eax
  unsigned int v8; // edx

  if ( this[24] )
  {
    SpewInfo(2, "C:\\uhsourcecode\\src\\public\\tier1/UtlSortVector.h", 213);
    if ( !SpewMessage("%s", "Assertion Failed: !m_bNeedsSort") )
    {
      if ( !(unsigned __int8)ShouldUseNewAssertDialog()
        || (unsigned __int8)DoNewAssertDialog(
                              "C:\\uhsourcecode\\src\\public\\tier1/UtlSortVector.h",
                              213,
                              "Assertion Failed: !m_bNeedsSort") )
      {
        __debugbreak();
      }
      ExitOnFatalAssert("C:\\uhsourcecode\\src\\public\\tier1/UtlSortVector.h", 213);
    }
  }
  v3 = 0;
  v4 = *((_DWORD *)this + 3) - 1;
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)this;
    v6 = *a2;
    do
    {
      result = (v4 + v3) >> 1;
      v8 = *(_DWORD *)(v5 + 12 * result);
      if ( v6 <= v8 )
      {
        if ( v6 >= v8 )
          return result;
        v4 = result - 1;
      }
      else
      {
        v3 = result + 1;
      }
    }
    while ( v3 <= v4 );
  }
  return -1;
}
