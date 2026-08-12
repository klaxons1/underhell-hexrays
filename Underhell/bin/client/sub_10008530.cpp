int __thiscall sub_10008530(int (__thiscall ****this)(_DWORD), int a2)
{
  int (__thiscall ***v3)(_DWORD); // edi
  const char *v4; // ebx
  const char *v5; // eax
  int result; // eax

  v3 = (int (__thiscall ***)(_DWORD))(**this[1])(this[1]);
  v4 = (const char *)sub_1022CF00(this + 5);
  v5 = (const char *)(**v3)(v3);
  result = _stricmp(v5, v4);
  if ( !result )
    return sub_1000A2C0(a2);
  return result;
}
