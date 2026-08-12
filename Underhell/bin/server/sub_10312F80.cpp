char __usercall sub_10312F80@<al>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  char result; // al

  result = sub_10021F60(a1);
  if ( result )
  {
    sub_102AA620((int)(a1 + 991), a2, (int)a1, 1, 45.0, 500.0);
    return 1;
  }
  return result;
}
