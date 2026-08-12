_DWORD *__thiscall sub_10249C90(int *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax

  result = sub_1022A6A0(a2, "text", 0);
  v4 = result;
  if ( result )
  {
    if ( sub_1022AEE0(result, 0) == 1 )
    {
      v5 = *this;
      v6 = sub_1022B4C0(v4, 0, (int)Locale);
      return (_DWORD *)(*(int (__thiscall **)(int *, int))(v5 + 772))(this, v6);
    }
    else
    {
      result = (_DWORD *)sub_1022AEE0(v4, 0);
      if ( result == (_DWORD *)5 )
      {
        v7 = *this;
        v8 = sub_1022B600(v4, 0, (int)&unk_10302674);
        return (_DWORD *)(*(int (__thiscall **)(int *, int, _DWORD))(v7 + 768))(this, v8, 0);
      }
    }
  }
  return result;
}
