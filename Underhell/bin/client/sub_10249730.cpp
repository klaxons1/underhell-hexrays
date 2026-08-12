int __fastcall sub_10249730(int a1, int a2, wint_t C)
{
  wint_t v3; // si

  v3 = C;
  if ( iswalnum(C) )
    v3 = towlower(C);
  return *(_WORD *)(a1 + 280) != v3 ? 0 : a1;
}
