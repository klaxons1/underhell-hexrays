void __userpurge sub_10201980(int a1@<ecx>, int a2@<edi>, int a3)
{
  bool v3; // zf

  if ( !*(_BYTE *)(a1 + 800) )
  {
    v3 = *(_BYTE *)(a1 + 801) == 0;
    *(_BYTE *)(a1 + 800) = 1;
    if ( !v3 )
      sub_10201650(a1, a2);
  }
}
