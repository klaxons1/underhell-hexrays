int __thiscall sub_1022B600(_DWORD *this, char *Str, int a3)
{
  float *v4; // eax
  float *v5; // esi
  int result; // eax
  wchar_t Buffer[64]; // [esp+14h] [ebp-80h] BYREF

  v4 = (float *)sub_1022A6A0(this, Str, 0);
  v5 = v4;
  if ( !v4 )
    return a3;
  switch ( *((_BYTE *)v4 + 16) )
  {
    case 1:
      if ( !MultiByteToWideChar(0xFDE9u, 0, *((LPCCH *)v4 + 1), -1, WideCharStr, 512) )
        return a3;
      sub_1022AC10(this, Str, WideCharStr);
      goto LABEL_8;
    case 2:
    case 4:
      sub_100BC810(Buffer, (wchar_t *)L"%d", *((_DWORD *)v4 + 3));
      sub_1022AC10(this, Str, Buffer);
      return *((_DWORD *)v5 + 2);
    case 3:
      sub_100BC810(Buffer, (wchar_t *)L"%f", v4[3]);
      sub_1022AC10(this, Str, Buffer);
      return *((_DWORD *)v5 + 2);
    case 5:
LABEL_8:
      result = *((_DWORD *)v5 + 2);
      break;
    case 7:
      sub_100BC810(Buffer, (wchar_t *)L"%I64i", **((_DWORD **)v4 + 1), *(_DWORD *)(*((_DWORD *)v4 + 1) + 4));
      sub_1022AC10(this, Str, Buffer);
      result = *((_DWORD *)v5 + 2);
      break;
    default:
      return a3;
  }
  return result;
}
