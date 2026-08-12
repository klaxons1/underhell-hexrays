wchar_t *__thiscall sub_100D0E50(wchar_t *this, wchar_t *Source)
{
  wchar_t *result; // eax

  result = wcsncpy(this + 108, Source, 0x20u);
  this[139] = 0;
  return result;
}
