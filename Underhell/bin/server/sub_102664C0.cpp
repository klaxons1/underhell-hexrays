int __usercall sub_102664C0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  char *v4; // esi

  result = sub_102074B0((int)a1, a2);
  if ( !a1[373] )
    result = (*(int (__thiscall **)(_DWORD *))(*a1 + 852))(a1);
  if ( a1[373] )
  {
    v4 = (char *)a1[360];
    if ( !v4 )
      v4 = (char *)String;
    return sub_10269E50(v4);
  }
  return result;
}
