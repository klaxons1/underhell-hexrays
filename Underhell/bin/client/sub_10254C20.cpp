wchar_t *__thiscall sub_10254C20(void *this, wchar_t *Source)
{
  wchar_t *result; // eax
  _DWORD *v4; // ebx
  const unsigned __int16 *v5; // edi
  const char *v6; // ebx
  unsigned int v7; // ebx
  void *v8; // esp
  void *v9; // esp
  int (__thiscall *v10)(void *); // eax
  wchar_t v11[6]; // [esp+0h] [ebp-14h] BYREF
  size_t Count; // [esp+Ch] [ebp-8h]
  size_t Size; // [esp+10h] [ebp-4h]
  wchar_t *Sourcea; // [esp+1Ch] [ebp+8h]

  result = Source;
  if ( *((_DWORD *)Source + 3) == 1 )
  {
    v4 = **(_DWORD ***)Source;
    result = (wchar_t *)sub_1022B600(v4, "text", (int)&unk_10302674);
    v5 = result;
    Sourcea = result;
    if ( result )
    {
      if ( *result )
      {
        v6 = (const char *)sub_1022B4C0(v4, "command", (int)Locale);
        if ( _stricmp(v6, "replace") && _stricmp(v6, "default") )
        {
          if ( !_stricmp(v6, "append") )
          {
            Count = *((_DWORD *)this + 58);
            v7 = 2 * (wcslen(v5) + Count);
            Size = v7 + 2;
            v8 = alloca(v7 + 2);
            v5 = v11;
            memset(v11, 0, v7 + 2);
            wcsncpy(v11, *((const wchar_t **)this + 55), Count);
            wcsncat(v11, Sourcea, wcslen(Sourcea));
          }
          else
          {
            result = (wchar_t *)_stricmp(v6, "prepend");
            if ( result )
              return result;
            Size = *((_DWORD *)this + 58);
            v7 = 2 * (wcslen(v5) + Size);
            Count = v7 + 2;
            v9 = alloca(v7 + 2);
            v5 = v11;
            memset(v11, 0, v7 + 2);
            wcsncpy(v11, Sourcea, wcslen(Sourcea));
            wcsncat(v11, *((const wchar_t **)this + 55), Size);
          }
          v11[v7 / 2] = 0;
        }
        (*(void (__thiscall **)(void *, const unsigned __int16 *))(*(_DWORD *)this + 772))(this, v5);
        v10 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 996);
        *((_BYTE *)this + 340) = 1;
        return (wchar_t *)v10(this);
      }
    }
  }
  return result;
}
