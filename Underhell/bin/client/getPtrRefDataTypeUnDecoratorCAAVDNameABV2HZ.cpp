DName *__cdecl UnDecorator::getPtrRefDataType(DName *a1, _DWORD *a2, int a3)
{
  int v3; // eax
  DName *v4; // eax
  int v5; // edx
  int v6; // ecx
  DName *result; // eax
  _BYTE v8[8]; // [esp+0h] [ebp-18h] BYREF
  _DWORD v9[2]; // [esp+8h] [ebp-10h] BYREF
  int v10[2]; // [esp+10h] [ebp-8h] BYREF

  if ( !*dword_10482860 )
  {
    operator+(a1, 1, (int)a2);
    return a1;
  }
  if ( a3 && *dword_10482860 == 88 )
  {
    ++dword_10482860;
    if ( *a2 )
      operator+(a1, "void ", (int)a2);
    else
      DName::DName(a1, "void");
    return a1;
  }
  if ( *dword_10482860 != 89 )
  {
    UnDecorator::getBasicDataType(v10, a2);
    v3 = a2[1];
    if ( (v3 & 0x4000) != 0 )
    {
      v4 = DName::DName((DName *)v8, "cli::array<");
    }
    else
    {
      if ( (v3 & 0x2000) == 0 )
      {
        v6 = v10[1];
        v5 = v10[0];
        goto LABEL_15;
      }
      v4 = DName::DName((DName *)v8, "cli::pin_ptr<");
    }
    DName::operator+(v4, (DName *)v9, (int)v10);
    v5 = v9[0];
    v6 = v9[1];
LABEL_15:
    result = a1;
    *(_DWORD *)a1 = v5;
    *((_DWORD *)a1 + 1) = v6;
    return result;
  }
  ++dword_10482860;
  UnDecorator::getArrayType((int *)a1, a2);
  return a1;
}
