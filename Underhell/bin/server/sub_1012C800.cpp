int __thiscall sub_1012C800(_BYTE *this, int a2)
{
  int v3; // ebx
  const char *v4; // eax
  int v5; // esi
  const char *v6; // ecx
  const char *v7; // ecx
  const char *v8; // eax
  int v11; // [esp+10h] [ebp-4h]

  if ( this[24] )
  {
    SpewInfo(2, "C:\\uhsourcecode\\src\\public\\tier1\\UtlSortVector.h", 244);
    if ( !SpewMessage("%s", "Assertion Failed: !m_bNeedsSort") )
    {
      if ( !(unsigned __int8)ShouldUseNewAssertDialog()
        || (unsigned __int8)DoNewAssertDialog(
                              "C:\\uhsourcecode\\src\\public\\tier1\\UtlSortVector.h",
                              244,
                              "Assertion Failed: !m_bNeedsSort") )
      {
        __debugbreak();
      }
      ExitOnFatalAssert("C:\\uhsourcecode\\src\\public\\tier1\\UtlSortVector.h", 244);
    }
  }
  v3 = *((_DWORD *)this + 3) - 1;
  v11 = 0;
  if ( v3 < 0 )
    return v3;
  while ( 1 )
  {
    v4 = *(const char **)(*(_DWORD *)a2 + 92);
    v5 = (v3 + v11) >> 1;
    if ( !v4 )
      v4 = String;
    v6 = *(const char **)(*(_DWORD *)(*(_DWORD *)this + 4 * v5) + 92);
    if ( !v6 )
      v6 = String;
    if ( _stricmp(v6, v4) >= 0 )
      break;
    v11 = v5 + 1;
LABEL_20:
    if ( v11 > v3 )
      return v3;
  }
  v7 = *(const char **)(*(_DWORD *)(4 * v5 + *(_DWORD *)this) + 92);
  if ( !v7 )
    v7 = String;
  v8 = *(const char **)(*(_DWORD *)a2 + 92);
  if ( !v8 )
    v8 = String;
  if ( _stricmp(v8, v7) < 0 )
  {
    v3 = v5 - 1;
    goto LABEL_20;
  }
  return (v3 + v11) >> 1;
}
