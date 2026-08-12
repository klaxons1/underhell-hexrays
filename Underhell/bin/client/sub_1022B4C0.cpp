int __thiscall sub_1022B4C0(_DWORD *this, char *Str, int a3)
{
  float *v4; // eax
  float *v5; // esi
  int result; // eax
  CHAR MultiByteStr[512]; // [esp+14h] [ebp-240h] BYREF
  char Buffer[64]; // [esp+214h] [ebp-40h] BYREF

  v4 = (float *)sub_1022A6A0(this, Str, 0);
  v5 = v4;
  if ( !v4 )
    return a3;
  switch ( *((_BYTE *)v4 + 16) )
  {
    case 1:
      goto LABEL_8;
    case 2:
    case 4:
      sub_10228370(Buffer, 0x40u, "%d", *((_DWORD *)v4 + 3));
      sub_1022ABA0(this, Str, Buffer);
      return *((_DWORD *)v5 + 1);
    case 3:
      sub_10228370(Buffer, 0x40u, "%f", v4[3]);
      sub_1022ABA0(this, Str, Buffer);
      return *((_DWORD *)v5 + 1);
    case 5:
      if ( !WideCharToMultiByte(0xFDE9u, 0, *((LPCWCH *)v4 + 2), -1, MultiByteStr, 512, 0, 0) )
        return a3;
      sub_1022ABA0(this, Str, MultiByteStr);
LABEL_8:
      result = *((_DWORD *)v5 + 1);
      break;
    case 7:
      sub_10228370(Buffer, 0x40u, "%I64i", *(_QWORD *)*((_DWORD *)v4 + 1));
      sub_1022ABA0(this, Str, Buffer);
      result = *((_DWORD *)v5 + 1);
      break;
    default:
      return a3;
  }
  return result;
}
