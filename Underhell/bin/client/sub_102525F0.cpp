wchar_t *__thiscall sub_102525F0(wchar_t *this, wchar_t *Source)
{
  wchar_t *result; // eax

  result = wcsncpy(this + 203, Source, 0xFFu);
  this[458] = 0;
  return result;
}
