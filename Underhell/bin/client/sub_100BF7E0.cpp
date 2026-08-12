int __thiscall sub_100BF7E0(int *this, wchar_t *Source)
{
  size_t v3; // esi
  wchar_t *v4; // eax
  int result; // eax

  sub_10034930(this[6]);
  this[6] = 0;
  v3 = wcslen(Source);
  v4 = (wchar_t *)sub_100DDA40((unsigned __int64)(v3 + 1) >> 31 != 0 ? -1 : 2 * (v3 + 1));
  this[6] = (int)v4;
  wcsncpy(v4, Source, v3);
  result = this[6];
  *(_WORD *)(result + 2 * v3) = 0;
  return result;
}
