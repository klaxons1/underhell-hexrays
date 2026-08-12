int __thiscall sub_102AA510(_BYTE *this, int a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ebx
  unsigned __int16 v6; // di
  int result; // eax
  unsigned __int16 v8; // dx

  if ( this[24] )
  {
    SpewInfo(2, "..\\public\\tier1/UtlSortVector.h", 213);
    if ( !SpewMessage("%s", "Assertion Failed: !m_bNeedsSort") )
    {
      if ( !(unsigned __int8)ShouldUseNewAssertDialog()
        || (unsigned __int8)DoNewAssertDialog(
                              "..\\public\\tier1/UtlSortVector.h",
                              213,
                              "Assertion Failed: !m_bNeedsSort") )
      {
        __debugbreak();
      }
      ExitOnFatalAssert("..\\public\\tier1/UtlSortVector.h", 213);
    }
  }
  v3 = 0;
  v4 = *((_DWORD *)this + 3) - 1;
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)this;
    v6 = *(_WORD *)(*(_DWORD *)a2 + 4);
    do
    {
      result = (v4 + v3) >> 1;
      v8 = *(_WORD *)(*(_DWORD *)(v5 + 4 * result) + 4);
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
