int __thiscall sub_1012D160(int *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax

  if ( *((_BYTE *)this + 24) )
  {
    SpewInfo(2, "C:\\uhsourcecode\\src\\public\\tier1\\UtlSortVector.h", 148);
    if ( !SpewMessage("%s", "Assertion Failed: !m_bNeedsSort") )
    {
      if ( !(unsigned __int8)ShouldUseNewAssertDialog()
        || (unsigned __int8)DoNewAssertDialog(
                              "C:\\uhsourcecode\\src\\public\\tier1\\UtlSortVector.h",
                              148,
                              "Assertion Failed: !m_bNeedsSort") )
      {
        __debugbreak();
      }
      ExitOnFatalAssert("C:\\uhsourcecode\\src\\public\\tier1\\UtlSortVector.h", 148);
    }
  }
  v3 = sub_1012C800(this, (int)a2);
  v4 = this[1];
  v5 = v3 + 1;
  v6 = this[3];
  if ( v6 + 1 > v4 )
    sub_102ABFC0(v6 - v4 + 1);
  ++this[3];
  v7 = *this;
  v8 = this[3] - v5 - 1;
  this[4] = *this;
  if ( v8 > 0 )
    memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
  v9 = (_DWORD *)(*this + 4 * v5);
  if ( v9 )
    *v9 = *a2;
  return v5;
}
