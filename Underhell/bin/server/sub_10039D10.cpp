int __thiscall sub_10039D10(_DWORD *this, int a2, int *a3, int *a4, int *a5)
{
  int v7; // eax
  int result; // eax
  const char *v9; // edi
  const char *v10; // eax
  int v11; // ecx
  int *v12; // [esp-4h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-10h]
  const char *v14; // [esp+18h] [ebp+Ch]

  v12 = a5;
  *a3 = -1;
  v7 = sub_10039AE0(this, a2, v12);
  *a4 = v7;
  if ( a2 == 16 )
  {
    result = sub_10044D40(this);
LABEL_14:
    *a3 = result;
    goto LABEL_15;
  }
  result = sub_100BDCE0(v7);
  *a3 = result;
  if ( result != -1 )
    return result;
  if ( (_DWORD *)dword_10691B40 != this && dword_10691B3C != *a4 || *(float *)(dword_106B31C8 + 12) - flt_10691B38 > 5.0 )
  {
    v14 = *(const char **)(*(int (__thiscall **)(_DWORD *, int **))(*this + 28))(this, &a5);
    if ( !v14 )
      v14 = String;
    v9 = (const char *)this[23];
    if ( !v9 )
      v9 = String;
    v13 = (const char *)sub_10002060(*a4);
    v10 = (const char *)sub_100D6390(this);
    DevWarning("%s:%s:%s has no sequence for act:%s\n", v9, v10, v14, v13);
    v11 = *a4;
    flt_10691B38 = *(float *)(dword_106B31C8 + 12);
    dword_10691B40 = (int)this;
    dword_10691B3C = v11;
  }
  result = (int)a4;
  if ( *a4 == 11 )
  {
    *a4 = 6;
    result = sub_100BDCE0(6);
    goto LABEL_14;
  }
LABEL_15:
  if ( *a3 == -1 )
    *a3 = 0;
  return result;
}
