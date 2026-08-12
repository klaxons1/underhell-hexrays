int __thiscall sub_10124650(_DWORD **this, float a2)
{
  int v2; // eax
  int result; // eax

  v2 = *(unsigned __int16 *)this;
  if ( (_WORD)v2 != 0xFFFF )
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_104131C0 + 72))(dword_104131C0, v2, LODWORD(a2));
  result = (*(int (__thiscall **)(_DWORD *, const char *, void *))(*this[4] + 188))(this[4], "$frame", &unk_10437E78);
  if ( result )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)result + 12))(result, LODWORD(a2));
  return result;
}
