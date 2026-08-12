wchar_t *__thiscall sub_100B0F40(wchar_t *this, int a2)
{
  wchar_t *result; // eax

  sub_10241570(a2);
  (*(void (__thiscall **)(wchar_t *, _DWORD))(*(_DWORD *)this + 264))(this, 0);
  result = (wchar_t *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                        dword_1047CA78,
                        "#hl2_AmmoFull");
  if ( result )
    return wcsncpy(this + 119, result, 0x10u);
  return result;
}
