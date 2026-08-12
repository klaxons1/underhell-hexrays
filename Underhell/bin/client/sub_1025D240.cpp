int __thiscall sub_1025D240(_DWORD *this, int a2)
{
  int v2; // edi
  int result; // eax

  v2 = a2;
  sub_1025BC50(this, a2);
  result = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int))(*this + 328))(
                        this,
                        &a2,
                        "ToggleButton.SelectedTextColor",
                        v2);
  *(_DWORD *)((char *)this + 367) = result;
  return result;
}
