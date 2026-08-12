__int16 __thiscall sub_10079730(_WORD *this, char *String1, const char *a3, int a4, int a5)
{
  char *v6; // eax
  int v7; // eax
  unsigned __int16 v8; // ax
  _DWORD v10[3]; // [esp+Ch] [ebp-64h] BYREF
  char v11; // [esp+18h] [ebp-58h]
  int v12; // [esp+40h] [ebp-30h] BYREF
  int v13; // [esp+44h] [ebp-2Ch]
  char Destination[40]; // [esp+48h] [ebp-28h] BYREF

  v6 = (char *)(*(int (__thiscall **)(_WORD *, const char *))(*(_DWORD *)this + 8))(this, a3);
  if ( !v6 )
  {
LABEL_7:
    Destination[0] = 0;
    v12 = 0;
    v13 = -1;
    sub_102282F0(Destination, String1, 0x28u);
    v12 = a5;
    v13 = a4;
    LOWORD(v7) = sub_10079600(this + 2, a3, &v12);
    return v7;
  }
  v7 = sub_10227C40(String1, v6);
  if ( v7 )
  {
    if ( a3 )
    {
      v11 = 0;
      v10[1] = 0;
      v10[2] = -1;
      v10[0] = a3;
      v8 = sub_10077FC0(this + 2, (int)v10);
    }
    else
    {
      v8 = -1;
    }
    sub_10079680((int)(this + 2), v8);
    goto LABEL_7;
  }
  return v7;
}
